/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.basicannotations;

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

@SuppressWarnings({ "unused", "serial" })
public class MyStruct implements TBase, java.io.Serializable, Cloneable, Comparable<MyStruct> {
  private static final TStruct STRUCT_DESC = new TStruct("MyStruct");
  private static final TField MAJOR_FIELD_DESC = new TField("major", TType.I64, (short)2);
  private static final TField PACKAGE_FIELD_DESC = new TField("package", TType.STRING, (short)1);
  private static final TField ANNOTATION_WITH_QUOTE_FIELD_DESC = new TField("annotation_with_quote", TType.STRING, (short)3);
  private static final TField CLASS__FIELD_DESC = new TField("class_", TType.STRING, (short)4);
  private static final TField ANNOTATION_WITH_TRAILING_COMMA_FIELD_DESC = new TField("annotation_with_trailing_comma", TType.STRING, (short)5);
  private static final TField EMPTY_ANNOTATIONS_FIELD_DESC = new TField("empty_annotations", TType.STRING, (short)6);
  private static final TField MY_ENUM_FIELD_DESC = new TField("my_enum", TType.I32, (short)7);

  public long major;
  public String package;
  public String annotation_with_quote;
  public String class_;
  public String annotation_with_trailing_comma;
  public String empty_annotations;
  /**
   * 
   * @see MyEnum
   */
  public MyEnum my_enum;
  public static final int MAJOR = 2;
  public static final int PACKAGE = 1;
  public static final int ANNOTATION_WITH_QUOTE = 3;
  public static final int CLASS_ = 4;
  public static final int ANNOTATION_WITH_TRAILING_COMMA = 5;
  public static final int EMPTY_ANNOTATIONS = 6;
  public static final int MY_ENUM = 7;

  // isset id assignments
  private static final int __MAJOR_ISSET_ID = 0;
  private BitSet __isset_bit_vector = new BitSet(1);

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(MAJOR, new FieldMetaData("major", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.I64)));
    tmpMetaDataMap.put(PACKAGE, new FieldMetaData("package", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.STRING)));
    tmpMetaDataMap.put(ANNOTATION_WITH_QUOTE, new FieldMetaData("annotation_with_quote", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.STRING)));
    tmpMetaDataMap.put(CLASS_, new FieldMetaData("class_", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.STRING)));
    tmpMetaDataMap.put(ANNOTATION_WITH_TRAILING_COMMA, new FieldMetaData("annotation_with_trailing_comma", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.STRING)));
    tmpMetaDataMap.put(EMPTY_ANNOTATIONS, new FieldMetaData("empty_annotations", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.STRING)));
    tmpMetaDataMap.put(MY_ENUM, new FieldMetaData("my_enum", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.I32)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(MyStruct.class, metaDataMap);
  }

  public MyStruct() {
  }

  public MyStruct(
      long major,
      String package,
      String annotation_with_quote,
      String class_,
      String annotation_with_trailing_comma,
      String empty_annotations,
      MyEnum my_enum) {
    this();
    this.major = major;
    setMajorIsSet(true);
    this.package = package;
    this.annotation_with_quote = annotation_with_quote;
    this.class_ = class_;
    this.annotation_with_trailing_comma = annotation_with_trailing_comma;
    this.empty_annotations = empty_annotations;
    this.my_enum = my_enum;
  }

  public static class Builder {
    private long major;
    private String package;
    private String annotation_with_quote;
    private String class_;
    private String annotation_with_trailing_comma;
    private String empty_annotations;
    private MyEnum my_enum;

    BitSet __optional_isset = new BitSet(1);

    public Builder() {
    }

    public Builder setMajor(final long major) {
      this.major = major;
      __optional_isset.set(__MAJOR_ISSET_ID, true);
      return this;
    }

    public Builder setPackage(final String package) {
      this.package = package;
      return this;
    }

    public Builder setAnnotation_with_quote(final String annotation_with_quote) {
      this.annotation_with_quote = annotation_with_quote;
      return this;
    }

    public Builder setClass_(final String class_) {
      this.class_ = class_;
      return this;
    }

    public Builder setAnnotation_with_trailing_comma(final String annotation_with_trailing_comma) {
      this.annotation_with_trailing_comma = annotation_with_trailing_comma;
      return this;
    }

    public Builder setEmpty_annotations(final String empty_annotations) {
      this.empty_annotations = empty_annotations;
      return this;
    }

    public Builder setMy_enum(final MyEnum my_enum) {
      this.my_enum = my_enum;
      return this;
    }

    public MyStruct build() {
      MyStruct result = new MyStruct();
      if (__optional_isset.get(__MAJOR_ISSET_ID)) {
        result.setMajor(this.major);
      }
      result.setPackage(this.package);
      result.setAnnotation_with_quote(this.annotation_with_quote);
      result.setClass_(this.class_);
      result.setAnnotation_with_trailing_comma(this.annotation_with_trailing_comma);
      result.setEmpty_annotations(this.empty_annotations);
      result.setMy_enum(this.my_enum);
      return result;
    }
  }

  public static Builder builder() {
    return new Builder();
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public MyStruct(MyStruct other) {
    __isset_bit_vector.clear();
    __isset_bit_vector.or(other.__isset_bit_vector);
    this.major = TBaseHelper.deepCopy(other.major);
    if (other.isSetPackage()) {
      this.package = TBaseHelper.deepCopy(other.package);
    }
    if (other.isSetAnnotation_with_quote()) {
      this.annotation_with_quote = TBaseHelper.deepCopy(other.annotation_with_quote);
    }
    if (other.isSetClass_()) {
      this.class_ = TBaseHelper.deepCopy(other.class_);
    }
    if (other.isSetAnnotation_with_trailing_comma()) {
      this.annotation_with_trailing_comma = TBaseHelper.deepCopy(other.annotation_with_trailing_comma);
    }
    if (other.isSetEmpty_annotations()) {
      this.empty_annotations = TBaseHelper.deepCopy(other.empty_annotations);
    }
    if (other.isSetMy_enum()) {
      this.my_enum = TBaseHelper.deepCopy(other.my_enum);
    }
  }

  public MyStruct deepCopy() {
    return new MyStruct(this);
  }

  public long getMajor() {
    return this.major;
  }

  public MyStruct setMajor(long major) {
    this.major = major;
    setMajorIsSet(true);
    return this;
  }

  public void unsetMajor() {
    __isset_bit_vector.clear(__MAJOR_ISSET_ID);
  }

  // Returns true if field major is set (has been assigned a value) and false otherwise
  public boolean isSetMajor() {
    return __isset_bit_vector.get(__MAJOR_ISSET_ID);
  }

  public void setMajorIsSet(boolean __value) {
    __isset_bit_vector.set(__MAJOR_ISSET_ID, __value);
  }

  public String getPackage() {
    return this.package;
  }

  public MyStruct setPackage(String package) {
    this.package = package;
    return this;
  }

  public void unsetPackage() {
    this.package = null;
  }

  // Returns true if field package is set (has been assigned a value) and false otherwise
  public boolean isSetPackage() {
    return this.package != null;
  }

  public void setPackageIsSet(boolean __value) {
    if (!__value) {
      this.package = null;
    }
  }

  public String getAnnotation_with_quote() {
    return this.annotation_with_quote;
  }

  public MyStruct setAnnotation_with_quote(String annotation_with_quote) {
    this.annotation_with_quote = annotation_with_quote;
    return this;
  }

  public void unsetAnnotation_with_quote() {
    this.annotation_with_quote = null;
  }

  // Returns true if field annotation_with_quote is set (has been assigned a value) and false otherwise
  public boolean isSetAnnotation_with_quote() {
    return this.annotation_with_quote != null;
  }

  public void setAnnotation_with_quoteIsSet(boolean __value) {
    if (!__value) {
      this.annotation_with_quote = null;
    }
  }

  public String getClass_() {
    return this.class_;
  }

  public MyStruct setClass_(String class_) {
    this.class_ = class_;
    return this;
  }

  public void unsetClass_() {
    this.class_ = null;
  }

  // Returns true if field class_ is set (has been assigned a value) and false otherwise
  public boolean isSetClass_() {
    return this.class_ != null;
  }

  public void setClass_IsSet(boolean __value) {
    if (!__value) {
      this.class_ = null;
    }
  }

  public String getAnnotation_with_trailing_comma() {
    return this.annotation_with_trailing_comma;
  }

  public MyStruct setAnnotation_with_trailing_comma(String annotation_with_trailing_comma) {
    this.annotation_with_trailing_comma = annotation_with_trailing_comma;
    return this;
  }

  public void unsetAnnotation_with_trailing_comma() {
    this.annotation_with_trailing_comma = null;
  }

  // Returns true if field annotation_with_trailing_comma is set (has been assigned a value) and false otherwise
  public boolean isSetAnnotation_with_trailing_comma() {
    return this.annotation_with_trailing_comma != null;
  }

  public void setAnnotation_with_trailing_commaIsSet(boolean __value) {
    if (!__value) {
      this.annotation_with_trailing_comma = null;
    }
  }

  public String getEmpty_annotations() {
    return this.empty_annotations;
  }

  public MyStruct setEmpty_annotations(String empty_annotations) {
    this.empty_annotations = empty_annotations;
    return this;
  }

  public void unsetEmpty_annotations() {
    this.empty_annotations = null;
  }

  // Returns true if field empty_annotations is set (has been assigned a value) and false otherwise
  public boolean isSetEmpty_annotations() {
    return this.empty_annotations != null;
  }

  public void setEmpty_annotationsIsSet(boolean __value) {
    if (!__value) {
      this.empty_annotations = null;
    }
  }

  /**
   * 
   * @see MyEnum
   */
  public MyEnum getMy_enum() {
    return this.my_enum;
  }

  /**
   * 
   * @see MyEnum
   */
  public MyStruct setMy_enum(MyEnum my_enum) {
    this.my_enum = my_enum;
    return this;
  }

  public void unsetMy_enum() {
    this.my_enum = null;
  }

  // Returns true if field my_enum is set (has been assigned a value) and false otherwise
  public boolean isSetMy_enum() {
    return this.my_enum != null;
  }

  public void setMy_enumIsSet(boolean __value) {
    if (!__value) {
      this.my_enum = null;
    }
  }

  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case MAJOR:
      if (__value == null) {
        unsetMajor();
      } else {
        setMajor((Long)__value);
      }
      break;

    case PACKAGE:
      if (__value == null) {
        unsetPackage();
      } else {
        setPackage((String)__value);
      }
      break;

    case ANNOTATION_WITH_QUOTE:
      if (__value == null) {
        unsetAnnotation_with_quote();
      } else {
        setAnnotation_with_quote((String)__value);
      }
      break;

    case CLASS_:
      if (__value == null) {
        unsetClass_();
      } else {
        setClass_((String)__value);
      }
      break;

    case ANNOTATION_WITH_TRAILING_COMMA:
      if (__value == null) {
        unsetAnnotation_with_trailing_comma();
      } else {
        setAnnotation_with_trailing_comma((String)__value);
      }
      break;

    case EMPTY_ANNOTATIONS:
      if (__value == null) {
        unsetEmpty_annotations();
      } else {
        setEmpty_annotations((String)__value);
      }
      break;

    case MY_ENUM:
      if (__value == null) {
        unsetMy_enum();
      } else {
        setMy_enum((MyEnum)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case MAJOR:
      return new Long(getMajor());

    case PACKAGE:
      return getPackage();

    case ANNOTATION_WITH_QUOTE:
      return getAnnotation_with_quote();

    case CLASS_:
      return getClass_();

    case ANNOTATION_WITH_TRAILING_COMMA:
      return getAnnotation_with_trailing_comma();

    case EMPTY_ANNOTATIONS:
      return getEmpty_annotations();

    case MY_ENUM:
      return getMy_enum();

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof MyStruct))
      return false;
    MyStruct that = (MyStruct)_that;

    if (!TBaseHelper.equalsNobinary(this.major, that.major)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPackage(), that.isSetPackage(), this.package, that.package)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetAnnotation_with_quote(), that.isSetAnnotation_with_quote(), this.annotation_with_quote, that.annotation_with_quote)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetClass_(), that.isSetClass_(), this.class_, that.class_)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetAnnotation_with_trailing_comma(), that.isSetAnnotation_with_trailing_comma(), this.annotation_with_trailing_comma, that.annotation_with_trailing_comma)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetEmpty_annotations(), that.isSetEmpty_annotations(), this.empty_annotations, that.empty_annotations)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetMy_enum(), that.isSetMy_enum(), this.my_enum, that.my_enum)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {major, package, annotation_with_quote, class_, annotation_with_trailing_comma, empty_annotations, my_enum});
  }

  @Override
  public int compareTo(MyStruct other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetMajor()).compareTo(other.isSetMajor());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(major, other.major);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetPackage()).compareTo(other.isSetPackage());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(package, other.package);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetAnnotation_with_quote()).compareTo(other.isSetAnnotation_with_quote());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(annotation_with_quote, other.annotation_with_quote);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetClass_()).compareTo(other.isSetClass_());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(class_, other.class_);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetAnnotation_with_trailing_comma()).compareTo(other.isSetAnnotation_with_trailing_comma());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(annotation_with_trailing_comma, other.annotation_with_trailing_comma);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetEmpty_annotations()).compareTo(other.isSetEmpty_annotations());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(empty_annotations, other.empty_annotations);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetMy_enum()).compareTo(other.isSetMy_enum());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(my_enum, other.my_enum);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField __field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case MAJOR:
          if (__field.type == TType.I64) {
            this.major = iprot.readI64();
            setMajorIsSet(true);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PACKAGE:
          if (__field.type == TType.STRING) {
            this.package = iprot.readString();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case ANNOTATION_WITH_QUOTE:
          if (__field.type == TType.STRING) {
            this.annotation_with_quote = iprot.readString();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case CLASS_:
          if (__field.type == TType.STRING) {
            this.class_ = iprot.readString();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case ANNOTATION_WITH_TRAILING_COMMA:
          if (__field.type == TType.STRING) {
            this.annotation_with_trailing_comma = iprot.readString();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case EMPTY_ANNOTATIONS:
          if (__field.type == TType.STRING) {
            this.empty_annotations = iprot.readString();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case MY_ENUM:
          if (__field.type == TType.I32) {
            this.my_enum = MyEnum.findByValue(iprot.readI32());
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


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.package != null) {
      oprot.writeFieldBegin(PACKAGE_FIELD_DESC);
      oprot.writeString(this.package);
      oprot.writeFieldEnd();
    }
    oprot.writeFieldBegin(MAJOR_FIELD_DESC);
    oprot.writeI64(this.major);
    oprot.writeFieldEnd();
    if (this.annotation_with_quote != null) {
      oprot.writeFieldBegin(ANNOTATION_WITH_QUOTE_FIELD_DESC);
      oprot.writeString(this.annotation_with_quote);
      oprot.writeFieldEnd();
    }
    if (this.class_ != null) {
      oprot.writeFieldBegin(CLASS__FIELD_DESC);
      oprot.writeString(this.class_);
      oprot.writeFieldEnd();
    }
    if (this.annotation_with_trailing_comma != null) {
      oprot.writeFieldBegin(ANNOTATION_WITH_TRAILING_COMMA_FIELD_DESC);
      oprot.writeString(this.annotation_with_trailing_comma);
      oprot.writeFieldEnd();
    }
    if (this.empty_annotations != null) {
      oprot.writeFieldBegin(EMPTY_ANNOTATIONS_FIELD_DESC);
      oprot.writeString(this.empty_annotations);
      oprot.writeFieldEnd();
    }
    if (this.my_enum != null) {
      oprot.writeFieldBegin(MY_ENUM_FIELD_DESC);
      oprot.writeI32(this.my_enum == null ? 0 : this.my_enum.getValue());
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
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("MyStruct");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("major");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.getMajor(), indent + 1, prettyPrint));
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("package");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getPackage() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getPackage(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("annotation_with_quote");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getAnnotation_with_quote() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getAnnotation_with_quote(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("class_");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getClass_() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getClass_(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("annotation_with_trailing_comma");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getAnnotation_with_trailing_comma() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getAnnotation_with_trailing_comma(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("empty_annotations");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getEmpty_annotations() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getEmpty_annotations(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("my_enum");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getMy_enum() == null) {
      sb.append("null");
    } else {
      String my_enum_name = this.getMy_enum() == null ? "null" : this.getMy_enum().name();
      if (my_enum_name != null) {
        sb.append(my_enum_name);
        sb.append(" (");
      }
      sb.append(this.getMy_enum());
      if (my_enum_name != null) {
        sb.append(")");
      }
    }
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

