#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions


class Fiery(_fbthrift_python_exceptions.GeneratedError):
    message: _typing.Final[str] = ...
    def __init__(
        self, *,
        message: _typing.Optional[str]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str]]]: ...
    def to_py3_struct(self) -> "module.types.Fiery": ...   # type: ignore
    def to_py_legacy_struct(self) -> "module.ttypes.Fiery": ...   # type: ignore


class Serious(_fbthrift_python_exceptions.GeneratedError):
    sonnet: _typing.Final[_typing.Optional[str]] = ...
    def __init__(
        self, *,
        sonnet: _typing.Optional[str]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str]]]: ...
    def to_py3_struct(self) -> "module.types.Serious": ...   # type: ignore
    def to_py_legacy_struct(self) -> "module.ttypes.Serious": ...   # type: ignore


class ComplexFieldNames(_fbthrift_python_exceptions.GeneratedError):
    error_message: _typing.Final[str] = ...
    internal_error_message: _typing.Final[str] = ...
    def __init__(
        self, *,
        error_message: _typing.Optional[str]=...,
        internal_error_message: _typing.Optional[str]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, str]]]: ...
    def to_py3_struct(self) -> "module.types.ComplexFieldNames": ...   # type: ignore
    def to_py_legacy_struct(self) -> "module.ttypes.ComplexFieldNames": ...   # type: ignore


class CustomFieldNames(_fbthrift_python_exceptions.GeneratedError):
    error_message: _typing.Final[str] = ...
    internal_error_message: _typing.Final[str] = ...
    def __init__(
        self, *,
        error_message: _typing.Optional[str]=...,
        internal_error_message: _typing.Optional[str]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, str]]]: ...
    def to_py3_struct(self) -> "module.types.CustomFieldNames": ...   # type: ignore
    def to_py_legacy_struct(self) -> "module.ttypes.CustomFieldNames": ...   # type: ignore


class ExceptionWithPrimitiveField(_fbthrift_python_exceptions.GeneratedError):
    message: _typing.Final[str] = ...
    error_code: _typing.Final[int] = ...
    def __init__(
        self, *,
        message: _typing.Optional[str]=...,
        error_code: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, int]]]: ...
    def to_py3_struct(self) -> "module.types.ExceptionWithPrimitiveField": ...   # type: ignore
    def to_py_legacy_struct(self) -> "module.ttypes.ExceptionWithPrimitiveField": ...   # type: ignore


class Banal(_fbthrift_python_exceptions.GeneratedError):
    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
    def to_py3_struct(self) -> "module.types.Banal": ...   # type: ignore
    def to_py_legacy_struct(self) -> "module.ttypes.Banal": ...   # type: ignore


class _fbthrift_Raiser_doBland_args(_fbthrift_python_types.Struct):

    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None]]]: ...


class _fbthrift_Raiser_doBland_result(_fbthrift_python_types.Struct):
    success: _typing.Final[None]

    def __init__(
        self, *, success: _typing.Optional[None] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
        ]]]: ...


class _fbthrift_Raiser_doRaise_args(_fbthrift_python_types.Struct):

    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None]]]: ...


class _fbthrift_Raiser_doRaise_result(_fbthrift_python_types.Struct):
    success: _typing.Final[None]
    b: _typing.Final[Banal]
    f: _typing.Final[Fiery]
    s: _typing.Final[Serious]

    def __init__(
        self, *, success: _typing.Optional[None] = ..., b: _typing.Optional[Banal]=..., f: _typing.Optional[Fiery]=..., s: _typing.Optional[Serious]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
            Banal,
            Fiery,
            Serious,
        ]]]: ...


class _fbthrift_Raiser_get200_args(_fbthrift_python_types.Struct):

    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None]]]: ...


class _fbthrift_Raiser_get200_result(_fbthrift_python_types.Struct):
    success: _typing.Final[str]

    def __init__(
        self, *, success: _typing.Optional[str] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            str,
        ]]]: ...


class _fbthrift_Raiser_get500_args(_fbthrift_python_types.Struct):

    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None]]]: ...


class _fbthrift_Raiser_get500_result(_fbthrift_python_types.Struct):
    success: _typing.Final[str]
    f: _typing.Final[Fiery]
    b: _typing.Final[Banal]
    s: _typing.Final[Serious]

    def __init__(
        self, *, success: _typing.Optional[str] = ..., f: _typing.Optional[Fiery]=..., b: _typing.Optional[Banal]=..., s: _typing.Optional[Serious]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            str,
            Fiery,
            Banal,
            Serious,
        ]]]: ...
