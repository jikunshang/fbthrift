#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions



class Foo(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "MyInt",  # name
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.Foo"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/namespace_from_package/module/Foo"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_Foo()

    def to_py3_struct(self):
        import importlib
        py3_types = importlib.import_module("test.namespace_from_package.module.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.Foo, self)

    def to_py_legacy_struct(self):
        import importlib
        py_legacy_types = importlib.import_module("namespace_from_package.module.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_legacy_types.Foo, self)

# This unfortunately has to be down here to prevent circular imports
import test.namespace_from_package.module.thrift_metadata


def _fbthrift_metadata__struct_Foo():
    return test.namespace_from_package.module.thrift_metadata.gen_metadata_struct_Foo()

_fbthrift_all_structs = [
    Foo,
]
_fbthrift_python_types.fill_specs(*_fbthrift_all_structs)


class _fbthrift_TestService_init_args(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "int1",  # name
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )


class _fbthrift_TestService_init_result(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )


_fbthrift_python_types.fill_specs(
    _fbthrift_TestService_init_args,
    _fbthrift_TestService_init_result,
)
