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

import facebook.thrift.annotation.scope.thrift_types

import facebook.thrift.annotation.thrift.thrift_types


class GeneratePatch(_fbthrift_python_types.Struct):
    def __init__(
        self,
    ) -> None: ...

    def __call__(
        self,
    ) -> GeneratePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.GeneratePatch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.GeneratePatch": ...   # type: ignore


class GenerateOptionalPatch(_fbthrift_python_types.Struct):
    def __init__(
        self,
    ) -> None: ...

    def __call__(
        self,
    ) -> GenerateOptionalPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.GenerateOptionalPatch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.GenerateOptionalPatch": ...   # type: ignore


class BoolPatch(_fbthrift_python_types.Struct):
    assign: _typing.Final[_typing.Optional[bool]] = ...
    invert: _typing.Final[bool] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[bool]=...,
        invert: _typing.Optional[bool]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[bool]=...,
        invert: _typing.Optional[bool]=...
    ) -> BoolPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, bool]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.BoolPatch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.BoolPatch": ...   # type: ignore


class BytePatch(_fbthrift_python_types.Struct):
    assign: _typing.Final[_typing.Optional[int]] = ...
    add: _typing.Final[int] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[int]=...,
        add: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[int]=...,
        add: _typing.Optional[int]=...
    ) -> BytePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.BytePatch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.BytePatch": ...   # type: ignore


class I16Patch(_fbthrift_python_types.Struct):
    assign: _typing.Final[_typing.Optional[int]] = ...
    add: _typing.Final[int] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[int]=...,
        add: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[int]=...,
        add: _typing.Optional[int]=...
    ) -> I16Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.I16Patch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.I16Patch": ...   # type: ignore


class I32Patch(_fbthrift_python_types.Struct):
    assign: _typing.Final[_typing.Optional[int]] = ...
    add: _typing.Final[int] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[int]=...,
        add: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[int]=...,
        add: _typing.Optional[int]=...
    ) -> I32Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.I32Patch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.I32Patch": ...   # type: ignore


class I64Patch(_fbthrift_python_types.Struct):
    assign: _typing.Final[_typing.Optional[int]] = ...
    add: _typing.Final[int] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[int]=...,
        add: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[int]=...,
        add: _typing.Optional[int]=...
    ) -> I64Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.I64Patch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.I64Patch": ...   # type: ignore


class FloatPatch(_fbthrift_python_types.Struct):
    assign: _typing.Final[_typing.Optional[float]] = ...
    add: _typing.Final[float] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[float]=...,
        add: _typing.Optional[float]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[float]=...,
        add: _typing.Optional[float]=...
    ) -> FloatPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[float, float]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.FloatPatch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.FloatPatch": ...   # type: ignore


class DoublePatch(_fbthrift_python_types.Struct):
    assign: _typing.Final[_typing.Optional[float]] = ...
    add: _typing.Final[float] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[float]=...,
        add: _typing.Optional[float]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[float]=...,
        add: _typing.Optional[float]=...
    ) -> DoublePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[float, float]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.DoublePatch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.DoublePatch": ...   # type: ignore


class StringPatch(_fbthrift_python_types.Struct):
    assign: _typing.Final[_typing.Optional[str]] = ...
    clear: _typing.Final[bool] = ...
    prepend: _typing.Final[str] = ...
    append: _typing.Final[str] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[str]=...,
        clear: _typing.Optional[bool]=...,
        prepend: _typing.Optional[str]=...,
        append: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[str]=...,
        clear: _typing.Optional[bool]=...,
        prepend: _typing.Optional[str]=...,
        append: _typing.Optional[str]=...
    ) -> StringPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, bool, str, str]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.StringPatch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.StringPatch": ...   # type: ignore


class BinaryPatch(_fbthrift_python_types.Struct):
    assign: _typing.Final[_typing.Optional[bytes]] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[bytes]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[bytes]=...
    ) -> BinaryPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bytes]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.BinaryPatch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.BinaryPatch": ...   # type: ignore


class OptionalBoolPatch(_fbthrift_python_types.Struct):
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[BoolPatch] = ...
    ensure: _typing.Final[_typing.Optional[bool]] = ...
    patchAfter: _typing.Final[BoolPatch] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[BoolPatch]=...,
        ensure: _typing.Optional[bool]=...,
        patchAfter: _typing.Optional[BoolPatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[BoolPatch]=...,
        ensure: _typing.Optional[bool]=...,
        patchAfter: _typing.Optional[BoolPatch]=...
    ) -> OptionalBoolPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, BoolPatch, bool, BoolPatch]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.OptionalBoolPatch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.OptionalBoolPatch": ...   # type: ignore


class OptionalBytePatch(_fbthrift_python_types.Struct):
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[BytePatch] = ...
    ensure: _typing.Final[_typing.Optional[int]] = ...
    patchAfter: _typing.Final[BytePatch] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[BytePatch]=...,
        ensure: _typing.Optional[int]=...,
        patchAfter: _typing.Optional[BytePatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[BytePatch]=...,
        ensure: _typing.Optional[int]=...,
        patchAfter: _typing.Optional[BytePatch]=...
    ) -> OptionalBytePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, BytePatch, int, BytePatch]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.OptionalBytePatch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.OptionalBytePatch": ...   # type: ignore


class OptionalI16Patch(_fbthrift_python_types.Struct):
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[I16Patch] = ...
    ensure: _typing.Final[_typing.Optional[int]] = ...
    patchAfter: _typing.Final[I16Patch] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[I16Patch]=...,
        ensure: _typing.Optional[int]=...,
        patchAfter: _typing.Optional[I16Patch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[I16Patch]=...,
        ensure: _typing.Optional[int]=...,
        patchAfter: _typing.Optional[I16Patch]=...
    ) -> OptionalI16Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, I16Patch, int, I16Patch]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.OptionalI16Patch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.OptionalI16Patch": ...   # type: ignore


class OptionalI32Patch(_fbthrift_python_types.Struct):
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[I32Patch] = ...
    ensure: _typing.Final[_typing.Optional[int]] = ...
    patchAfter: _typing.Final[I32Patch] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[I32Patch]=...,
        ensure: _typing.Optional[int]=...,
        patchAfter: _typing.Optional[I32Patch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[I32Patch]=...,
        ensure: _typing.Optional[int]=...,
        patchAfter: _typing.Optional[I32Patch]=...
    ) -> OptionalI32Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, I32Patch, int, I32Patch]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.OptionalI32Patch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.OptionalI32Patch": ...   # type: ignore


class OptionalI64Patch(_fbthrift_python_types.Struct):
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[I64Patch] = ...
    ensure: _typing.Final[_typing.Optional[int]] = ...
    patchAfter: _typing.Final[I64Patch] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[I64Patch]=...,
        ensure: _typing.Optional[int]=...,
        patchAfter: _typing.Optional[I64Patch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[I64Patch]=...,
        ensure: _typing.Optional[int]=...,
        patchAfter: _typing.Optional[I64Patch]=...
    ) -> OptionalI64Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, I64Patch, int, I64Patch]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.OptionalI64Patch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.OptionalI64Patch": ...   # type: ignore


class OptionalFloatPatch(_fbthrift_python_types.Struct):
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[FloatPatch] = ...
    ensure: _typing.Final[_typing.Optional[float]] = ...
    patchAfter: _typing.Final[FloatPatch] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[FloatPatch]=...,
        ensure: _typing.Optional[float]=...,
        patchAfter: _typing.Optional[FloatPatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[FloatPatch]=...,
        ensure: _typing.Optional[float]=...,
        patchAfter: _typing.Optional[FloatPatch]=...
    ) -> OptionalFloatPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, FloatPatch, float, FloatPatch]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.OptionalFloatPatch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.OptionalFloatPatch": ...   # type: ignore


class OptionalDoublePatch(_fbthrift_python_types.Struct):
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[DoublePatch] = ...
    ensure: _typing.Final[_typing.Optional[float]] = ...
    patchAfter: _typing.Final[DoublePatch] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[DoublePatch]=...,
        ensure: _typing.Optional[float]=...,
        patchAfter: _typing.Optional[DoublePatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[DoublePatch]=...,
        ensure: _typing.Optional[float]=...,
        patchAfter: _typing.Optional[DoublePatch]=...
    ) -> OptionalDoublePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, DoublePatch, float, DoublePatch]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.OptionalDoublePatch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.OptionalDoublePatch": ...   # type: ignore


class OptionalStringPatch(_fbthrift_python_types.Struct):
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[StringPatch] = ...
    ensure: _typing.Final[_typing.Optional[str]] = ...
    patchAfter: _typing.Final[StringPatch] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[StringPatch]=...,
        ensure: _typing.Optional[str]=...,
        patchAfter: _typing.Optional[StringPatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[StringPatch]=...,
        ensure: _typing.Optional[str]=...,
        patchAfter: _typing.Optional[StringPatch]=...
    ) -> OptionalStringPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, StringPatch, str, StringPatch]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.OptionalStringPatch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.OptionalStringPatch": ...   # type: ignore


class OptionalBinaryPatch(_fbthrift_python_types.Struct):
    clear: _typing.Final[bool] = ...
    patch: _typing.Final[BinaryPatch] = ...
    ensure: _typing.Final[_typing.Optional[bytes]] = ...
    patchAfter: _typing.Final[BinaryPatch] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[BinaryPatch]=...,
        ensure: _typing.Optional[bytes]=...,
        patchAfter: _typing.Optional[BinaryPatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[BinaryPatch]=...,
        ensure: _typing.Optional[bytes]=...,
        patchAfter: _typing.Optional[BinaryPatch]=...
    ) -> OptionalBinaryPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, BinaryPatch, bytes, BinaryPatch]]]: ...
    def to_py3_struct(self) -> "apache.thrift.op.patch.types.OptionalBinaryPatch": ...   # type: ignore
    def to_py_legacy_struct(self) -> "thrift.lib.thrift.patch.ttypes.OptionalBinaryPatch": ...   # type: ignore
