/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.inheritance;

import java.util.*;
import org.apache.thrift.protocol.*;

public class MyNodeReactiveClient  extends test.fixtures.inheritance.MyRootReactiveClient
  implements MyNode.Reactive {
  private final org.apache.thrift.ProtocolId _protocolId;
  private final reactor.core.publisher.Mono<? extends com.facebook.swift.transport.client.RpcClient> _rpcClient;

  private static final java.util.Map<Short, com.facebook.swift.transport.payload.Reader> _doMid_EXCEPTION_READERS = java.util.Collections.emptyMap();

  static {
  }

  public MyNodeReactiveClient(org.apache.thrift.ProtocolId _protocolId, reactor.core.publisher.Mono<? extends com.facebook.swift.transport.client.RpcClient> _rpcClient) {
    super(_protocolId, _rpcClient);
    this._protocolId = _protocolId;
    this._rpcClient = _rpcClient;
  }

  @java.lang.Override
  public void close() {}

  private com.facebook.swift.transport.payload.Writer _createdoMidWriter() {
    return oprot -> {
      try {

      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    };
  }

  private static final com.facebook.swift.transport.payload.Reader _doMid_READER =
    oprot -> {
              try {

                return null;

              } catch (Throwable _e) {
                throw reactor.core.Exceptions.propagate(_e);
              }
            };


  @java.lang.Override
  public reactor.core.publisher.Mono<Void> doMid( final com.facebook.swift.transport.client.RpcOptions rpcOptions) {
    return _rpcClient
      .flatMap(_rpc -> {
        org.apache.thrift.RequestRpcMetadata _metadata = new org.apache.thrift.RequestRpcMetadata.Builder()
                .setName("doMid")
                .setKind(org.apache.thrift.RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE)
                .setOtherMetadata(Collections.emptyMap())
                .setProtocol(_protocolId)
                .build();

            com.facebook.swift.transport.payload.ClientRequestPayload<Void> _crp =
                com.facebook.swift.transport.payload.ClientRequestPayload.create(
                    _createdoMidWriter(),
                    _doMid_READER,
                    _doMid_EXCEPTION_READERS,
                    _metadata,
                    java.util.Collections.emptyMap());

            return _rpc
                .singleRequestSingleResponse(_crp, rpcOptions)
                .map(_p -> _p.getData());
      });
  }

  @java.lang.Override
  public reactor.core.publisher.Mono<Void> doMid() {
    return doMid( com.facebook.swift.transport.client.RpcOptions.EMPTY);
  }


}
