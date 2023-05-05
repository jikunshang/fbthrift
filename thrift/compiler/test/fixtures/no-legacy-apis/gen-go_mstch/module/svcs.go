// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package module // [[[ program thrift source path ]]]


import (
    "context"
    "fmt"

    thrift0 "thrift/annotation/thrift"

    "thrift/lib/go/thrift"
)

var _ = thrift0.GoUnusedProtection__

// (needed to ensure safety because of naive import list construction)
var _ = context.Background
var _ = fmt.Printf
var _ = thrift.ZERO



type MyService interface {
    Query(ctx context.Context, u *MyUnion) (*MyStruct, error)
}

// Deprecated: Use MyService instead.
type MyServiceClientInterface interface {
    thrift.ClientInterface
    Query(u *MyUnion) (*MyStruct, error)
}

type MyServiceChannelClient struct {
    ch thrift.RequestChannel
}
// Compile time interface enforcer
var _ MyService = &MyServiceChannelClient{}

func NewMyServiceChannelClient(channel thrift.RequestChannel) *MyServiceChannelClient {
    return &MyServiceChannelClient{
        ch: channel,
    }
}

func (c *MyServiceChannelClient) Close() error {
    return c.ch.Close()
}

func (c *MyServiceChannelClient) IsOpen() bool {
    return c.ch.IsOpen()
}

func (c *MyServiceChannelClient) Open() error {
    return c.ch.Open()
}

// Deprecated: Use MyServiceChannelClient instead.
type MyServiceClient struct {
    chClient *MyServiceChannelClient
}
// Compile time interface enforcer
var _ MyServiceClientInterface = &MyServiceClient{}

// Deprecated: Use NewMyServiceChannelClient() instead.
func NewMyServiceClient(t thrift.Transport, iprot thrift.Protocol, oprot thrift.Protocol) *MyServiceClient {
    return &MyServiceClient{
        chClient: NewMyServiceChannelClient(
            thrift.NewSerialChannel(iprot),
        ),
    }
}

func (c *MyServiceClient) Close() error {
    return c.chClient.Close()
}

func (c *MyServiceClient) IsOpen() bool {
    return c.chClient.IsOpen()
}

func (c *MyServiceClient) Open() error {
    return c.chClient.Open()
}

// Deprecated: Use MyServiceChannelClient instead.
type MyServiceThreadsafeClient = MyServiceClient

// Deprecated: Use NewMyServiceChannelClient() instead.
func NewMyServiceThreadsafeClient(t thrift.Transport, iprot thrift.Protocol, oprot thrift.Protocol) *MyServiceThreadsafeClient {
    return NewMyServiceClient(t, iprot, oprot)
}

// Deprecated: Use NewMyServiceChannelClient() instead.
func NewMyServiceClientProtocol(prot thrift.Protocol) *MyServiceClient {
  return NewMyServiceClient(prot.Transport(), prot, prot)
}

// Deprecated: Use NewMyServiceChannelClient() instead.
func NewMyServiceThreadsafeClientProtocol(prot thrift.Protocol) *MyServiceClient {
  return NewMyServiceClient(prot.Transport(), prot, prot)
}

// Deprecated: Use NewMyServiceChannelClient() instead.
func NewMyServiceClientFactory(t thrift.Transport, pf thrift.ProtocolFactory) *MyServiceClient {
  iprot := pf.GetProtocol(t)
  oprot := pf.GetProtocol(t)
  return NewMyServiceClient(t, iprot, oprot)
}

// Deprecated: Use NewMyServiceChannelClient() instead.
func NewMyServiceThreadsafeClientFactory(t thrift.Transport, pf thrift.ProtocolFactory) *MyServiceThreadsafeClient {
  return NewMyServiceClientFactory(t, pf)
}


func (c *MyServiceChannelClient) Query(ctx context.Context, u *MyUnion) (*MyStruct, error) {
    in := &reqMyServiceQuery{
        U: u,
    }
    out := newRespMyServiceQuery()
    err := c.ch.Call(ctx, "query", in, out)
    if err != nil {
        return out.Value, err
    }
    return out.Value, nil
}

func (c *MyServiceClient) Query(u *MyUnion) (*MyStruct, error) {
    return c.chClient.Query(nil, u)
}


type reqMyServiceQuery struct {
    U *MyUnion `thrift:"u,1" json:"u" db:"u"`
}
// Compile time interface enforcer
var _ thrift.Struct = &reqMyServiceQuery{}


func newReqMyServiceQuery() *reqMyServiceQuery {
    return (&reqMyServiceQuery{})
}

// Deprecated: Use newReqMyServiceQuery().U instead.
var reqMyServiceQuery_U_DEFAULT = newReqMyServiceQuery().U

func (x *reqMyServiceQuery) GetUNonCompat() *MyUnion {
    return x.U
}

func (x *reqMyServiceQuery) GetU() *MyUnion {
    if !x.IsSetU() {
        return NewMyUnion()
    }

    return x.U
}

func (x *reqMyServiceQuery) SetU(value MyUnion) *reqMyServiceQuery {
    x.U = &value
    return x
}

func (x *reqMyServiceQuery) IsSetU() bool {
    return x.U != nil
}

func (x *reqMyServiceQuery) writeField1(p thrift.Protocol) error {  // U
    if !x.IsSetU() {
        return nil
    }

    if err := p.WriteFieldBegin("u", thrift.STRUCT, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetUNonCompat()
    if err := item.Write(p); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqMyServiceQuery) readField1(p thrift.Protocol) error {  // U
    result := *NewMyUnion()
err := result.Read(p)
if err != nil {
    return err
}

    x.SetU(result)
    return nil
}

func (x *reqMyServiceQuery) String() string {
    return fmt.Sprintf("%+v", x)
}


// Deprecated: Use reqMyServiceQuery.Set* methods instead or set the fields directly.
type reqMyServiceQueryBuilder struct {
    obj *reqMyServiceQuery
}

func newReqMyServiceQueryBuilder() *reqMyServiceQueryBuilder {
    return &reqMyServiceQueryBuilder{
        obj: newReqMyServiceQuery(),
    }
}

func (x *reqMyServiceQueryBuilder) U(value *MyUnion) *reqMyServiceQueryBuilder {
    x.obj.U = value
    return x
}

func (x *reqMyServiceQueryBuilder) Emit() *reqMyServiceQuery {
    var objCopy reqMyServiceQuery = *x.obj
    return &objCopy
}

func (x *reqMyServiceQuery) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("reqMyServiceQuery"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *reqMyServiceQuery) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // u
            if err := x.readField1(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

type respMyServiceQuery struct {
    Value *MyStruct `thrift:"value,0" json:"value" db:"value"`
}
// Compile time interface enforcer
var _ thrift.Struct = &respMyServiceQuery{}
var _ thrift.WritableResult = &respMyServiceQuery{}


func newRespMyServiceQuery() *respMyServiceQuery {
    return (&respMyServiceQuery{})
}

// Deprecated: Use newRespMyServiceQuery().Value instead.
var respMyServiceQuery_Value_DEFAULT = newRespMyServiceQuery().Value

func (x *respMyServiceQuery) GetValueNonCompat() *MyStruct {
    return x.Value
}

func (x *respMyServiceQuery) GetValue() *MyStruct {
    if !x.IsSetValue() {
        return NewMyStruct()
    }

    return x.Value
}

func (x *respMyServiceQuery) SetValue(value MyStruct) *respMyServiceQuery {
    x.Value = &value
    return x
}

func (x *respMyServiceQuery) IsSetValue() bool {
    return x.Value != nil
}

func (x *respMyServiceQuery) writeField0(p thrift.Protocol) error {  // Value
    if !x.IsSetValue() {
        return nil
    }

    if err := p.WriteFieldBegin("value", thrift.STRUCT, 0); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetValueNonCompat()
    if err := item.Write(p); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *respMyServiceQuery) readField0(p thrift.Protocol) error {  // Value
    result := *NewMyStruct()
err := result.Read(p)
if err != nil {
    return err
}

    x.SetValue(result)
    return nil
}

func (x *respMyServiceQuery) String() string {
    return fmt.Sprintf("%+v", x)
}


// Deprecated: Use respMyServiceQuery.Set* methods instead or set the fields directly.
type respMyServiceQueryBuilder struct {
    obj *respMyServiceQuery
}

func newRespMyServiceQueryBuilder() *respMyServiceQueryBuilder {
    return &respMyServiceQueryBuilder{
        obj: newRespMyServiceQuery(),
    }
}

func (x *respMyServiceQueryBuilder) Value(value *MyStruct) *respMyServiceQueryBuilder {
    x.obj.Value = value
    return x
}

func (x *respMyServiceQueryBuilder) Emit() *respMyServiceQuery {
    var objCopy respMyServiceQuery = *x.obj
    return &objCopy
}

func (x *respMyServiceQuery) Exception() thrift.WritableException {
    return nil
}

func (x *respMyServiceQuery) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("respMyServiceQuery"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField0(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *respMyServiceQuery) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        case 0:  // value
            if err := x.readField0(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}



type MyServiceProcessor struct {
    processorMap       map[string]thrift.ProcessorFunction
    functionServiceMap map[string]string
    handler            MyService
}
// Compile time interface enforcer
var _ thrift.Processor = &MyServiceProcessor{}

func (p *MyServiceProcessor) AddToProcessorMap(key string, processor thrift.ProcessorFunction) {
    p.processorMap[key] = processor
}

func (p *MyServiceProcessor) AddToFunctionServiceMap(key, service string) {
    p.functionServiceMap[key] = service
}

func (p *MyServiceProcessor) GetProcessorFunction(key string) (processor thrift.ProcessorFunction, err error) {
    if processor, ok := p.processorMap[key]; ok {
        return processor, nil
    }
    return nil, nil
}

func (p *MyServiceProcessor) ProcessorMap() map[string]thrift.ProcessorFunction {
    return p.processorMap
}

func (p *MyServiceProcessor) FunctionServiceMap() map[string]string {
    return p.functionServiceMap
}

func NewMyServiceProcessor(handler MyService) *MyServiceProcessor {
    p := &MyServiceProcessor{
        handler:            handler,
        processorMap:       make(map[string]thrift.ProcessorFunction),
        functionServiceMap: make(map[string]string),
    }
    p.AddToProcessorMap("query", &procFuncMyServiceQuery{handler: handler})
    p.AddToFunctionServiceMap("query", "MyService")

    return p
}


type procFuncMyServiceQuery struct {
    handler MyService
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = &procFuncMyServiceQuery{}

func (p *procFuncMyServiceQuery) Read(iprot thrift.Protocol) (thrift.Struct, thrift.Exception) {
    args := newReqMyServiceQuery()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncMyServiceQuery) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Protocol) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = oprot.WriteMessageBegin("Query", messageType, seqId); err2 != nil {
        err = err2
    }
    if err2 = result.Write(oprot); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.Flush(); err == nil && err2 != nil {
        err = err2
    }
    return err
}

func (p *procFuncMyServiceQuery) Run(reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqMyServiceQuery)
    result := newRespMyServiceQuery()
    retval, err := p.handler.Query(args.U)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing Query: " + err.Error(), err)
        return x, x
    }

    result.Value = retval
    return result, nil
}


