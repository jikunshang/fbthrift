#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions


import facebook.thrift.annotation.internal.thrift_types

import foo.thrift_types


class Fields(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            100,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "injected_field",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.Fields"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_Fields()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("module.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.Fields, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("module.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.Fields, self)


class FieldsInjectedToEmptyStruct(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            -1100,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "injected_field",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.FieldsInjectedToEmptyStruct"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_FieldsInjectedToEmptyStruct()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("module.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.FieldsInjectedToEmptyStruct, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("module.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.FieldsInjectedToEmptyStruct, self)


class FieldsInjectedToStruct(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "string_field",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            -1100,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "injected_field",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.FieldsInjectedToStruct"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_FieldsInjectedToStruct()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("module.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.FieldsInjectedToStruct, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("module.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.FieldsInjectedToStruct, self)


class FieldsInjectedWithIncludedStruct(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "string_field",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            -1100,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "injected_field",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            -1101,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "injected_structured_annotation_field",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            -1102,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "injected_unstructured_annotation_field",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.FieldsInjectedWithIncludedStruct"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_FieldsInjectedWithIncludedStruct()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("module.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.FieldsInjectedWithIncludedStruct, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("module.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.FieldsInjectedWithIncludedStruct, self)

# This unfortunately has to be down here to prevent circular imports
import module.thrift_metadata


def _fbthrift_metadata__struct_Fields():
    return module.thrift_metadata.gen_metadata_struct_Fields()
def _fbthrift_metadata__struct_FieldsInjectedToEmptyStruct():
    return module.thrift_metadata.gen_metadata_struct_FieldsInjectedToEmptyStruct()
def _fbthrift_metadata__struct_FieldsInjectedToStruct():
    return module.thrift_metadata.gen_metadata_struct_FieldsInjectedToStruct()
def _fbthrift_metadata__struct_FieldsInjectedWithIncludedStruct():
    return module.thrift_metadata.gen_metadata_struct_FieldsInjectedWithIncludedStruct()

_fbthrift_all_structs = [
    Fields,
    FieldsInjectedToEmptyStruct,
    FieldsInjectedToStruct,
    FieldsInjectedWithIncludedStruct,
]
_fbthrift_python_types.fill_specs(*_fbthrift_all_structs)
