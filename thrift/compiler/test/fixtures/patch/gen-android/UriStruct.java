/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

/**
 * The 'parsed' form of a `Uri`.
 * 
 *   {scheme}://{domain}/{path}?{query}#{fragment}
 */
@SuppressWarnings({ "unused", "serial" })
public class UriStruct implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("UriStruct");
  private static final TField SCHEME_FIELD_DESC = new TField("scheme", TType.STRING, (short)1);
  private static final TField DOMAIN_FIELD_DESC = new TField("domain", TType.LIST, (short)2);
  private static final TField PATH_FIELD_DESC = new TField("path", TType.LIST, (short)4);
  private static final TField QUERY_FIELD_DESC = new TField("query", TType.MAP, (short)5);
  private static final TField FRAGMENT_FIELD_DESC = new TField("fragment", TType.STRING, (short)6);

  public final String scheme;
  public final List<String> domain;
  public final List<String> path;
  public final Map<String,String> query;
  public final String fragment;
  public static final int SCHEME = 1;
  public static final int DOMAIN = 2;
  public static final int PATH = 4;
  public static final int QUERY = 5;
  public static final int FRAGMENT = 6;

  public UriStruct(
      String scheme,
      List<String> domain,
      List<String> path,
      Map<String,String> query,
      String fragment) {
    this.scheme = scheme;
    this.domain = domain;
    this.path = path;
    this.query = query;
    this.fragment = fragment;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public UriStruct(UriStruct other) {
    if (other.isSetScheme()) {
      this.scheme = TBaseHelper.deepCopy(other.scheme);
    } else {
      this.scheme = null;
    }
    if (other.isSetDomain()) {
      this.domain = TBaseHelper.deepCopy(other.domain);
    } else {
      this.domain = null;
    }
    if (other.isSetPath()) {
      this.path = TBaseHelper.deepCopy(other.path);
    } else {
      this.path = null;
    }
    if (other.isSetQuery()) {
      this.query = TBaseHelper.deepCopy(other.query);
    } else {
      this.query = null;
    }
    if (other.isSetFragment()) {
      this.fragment = TBaseHelper.deepCopy(other.fragment);
    } else {
      this.fragment = null;
    }
  }

  public UriStruct deepCopy() {
    return new UriStruct(this);
  }

  public String getScheme() {
    return this.scheme;
  }

  // Returns true if field scheme is set (has been assigned a value) and false otherwise
  public boolean isSetScheme() {
    return this.scheme != null;
  }

  public List<String> getDomain() {
    return this.domain;
  }

  // Returns true if field domain is set (has been assigned a value) and false otherwise
  public boolean isSetDomain() {
    return this.domain != null;
  }

  public List<String> getPath() {
    return this.path;
  }

  // Returns true if field path is set (has been assigned a value) and false otherwise
  public boolean isSetPath() {
    return this.path != null;
  }

  public Map<String,String> getQuery() {
    return this.query;
  }

  // Returns true if field query is set (has been assigned a value) and false otherwise
  public boolean isSetQuery() {
    return this.query != null;
  }

  public String getFragment() {
    return this.fragment;
  }

  // Returns true if field fragment is set (has been assigned a value) and false otherwise
  public boolean isSetFragment() {
    return this.fragment != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof UriStruct))
      return false;
    UriStruct that = (UriStruct)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetScheme(), that.isSetScheme(), this.scheme, that.scheme)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetDomain(), that.isSetDomain(), this.domain, that.domain)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPath(), that.isSetPath(), this.path, that.path)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetQuery(), that.isSetQuery(), this.query, that.query)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetFragment(), that.isSetFragment(), this.fragment, that.fragment)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {scheme, domain, path, query, fragment});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static UriStruct deserialize(TProtocol iprot) throws TException {
    String tmp_scheme = null;
    List<String> tmp_domain = null;
    List<String> tmp_path = null;
    Map<String,String> tmp_query = null;
    String tmp_fragment = null;
    TField __field;
    iprot.readStructBegin();
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case SCHEME:
          if (__field.type == TType.STRING) {
            tmp_scheme = iprot.readString();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case DOMAIN:
          if (__field.type == TType.LIST) {
            {
              TList _list0 = iprot.readListBegin();
              tmp_domain = new ArrayList<String>(Math.max(0, _list0.size));
              for (int _i1 = 0; 
                   (_list0.size < 0) ? iprot.peekList() : (_i1 < _list0.size); 
                   ++_i1)
              {
                String _elem2;
                _elem2 = iprot.readString();
                tmp_domain.add(_elem2);
              }
              iprot.readListEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PATH:
          if (__field.type == TType.LIST) {
            {
              TList _list3 = iprot.readListBegin();
              tmp_path = new ArrayList<String>(Math.max(0, _list3.size));
              for (int _i4 = 0; 
                   (_list3.size < 0) ? iprot.peekList() : (_i4 < _list3.size); 
                   ++_i4)
              {
                String _elem5;
                _elem5 = iprot.readString();
                tmp_path.add(_elem5);
              }
              iprot.readListEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case QUERY:
          if (__field.type == TType.MAP) {
            {
              TMap _map6 = iprot.readMapBegin();
              tmp_query = new HashMap<String,String>(Math.max(0, 2*_map6.size));
              for (int _i7 = 0; 
                   (_map6.size < 0) ? iprot.peekMap() : (_i7 < _map6.size); 
                   ++_i7)
              {
                String _key8;
                String _val9;
                _key8 = iprot.readString();
                _val9 = iprot.readString();
                tmp_query.put(_key8, _val9);
              }
              iprot.readMapEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case FRAGMENT:
          if (__field.type == TType.STRING) {
            tmp_fragment = iprot.readString();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();

    UriStruct _that;
    _that = new UriStruct(
      tmp_scheme
      ,tmp_domain
      ,tmp_path
      ,tmp_query
      ,tmp_fragment
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.scheme != null) {
      oprot.writeFieldBegin(SCHEME_FIELD_DESC);
      oprot.writeString(this.scheme);
      oprot.writeFieldEnd();
    }
    if (this.domain != null) {
      oprot.writeFieldBegin(DOMAIN_FIELD_DESC);
      {
        oprot.writeListBegin(new TList(TType.STRING, this.domain.size()));
        for (String _iter10 : this.domain)        {
          oprot.writeString(_iter10);
        }
        oprot.writeListEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.path != null) {
      oprot.writeFieldBegin(PATH_FIELD_DESC);
      {
        oprot.writeListBegin(new TList(TType.STRING, this.path.size()));
        for (String _iter11 : this.path)        {
          oprot.writeString(_iter11);
        }
        oprot.writeListEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.query != null) {
      oprot.writeFieldBegin(QUERY_FIELD_DESC);
      {
        oprot.writeMapBegin(new TMap(TType.STRING, TType.STRING, this.query.size()));
        for (Map.Entry<String, String> _iter12 : this.query.entrySet())        {
          oprot.writeString(_iter12.getKey());
          oprot.writeString(_iter12.getValue());
        }
        oprot.writeMapEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.fragment != null) {
      oprot.writeFieldBegin(FRAGMENT_FIELD_DESC);
      oprot.writeString(this.fragment);
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    return TBaseHelper.toStringHelper(this, indent, prettyPrint);
  }

  public void validate() throws TException {
    // check for required fields
  }

}

