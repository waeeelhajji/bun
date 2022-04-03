/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSDOMPointInit.h"

#include "JSDOMConvertNumbers.h"
#include <JavaScriptCore/JSCInlines.h>


namespace WebCore {
using namespace JSC;

template<> DOMPointInit convertDictionary<DOMPointInit>(JSGlobalObject& lexicalGlobalObject, JSValue value)
{
    VM& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    bool isNullOrUndefined = value.isUndefinedOrNull();
    auto* object = isNullOrUndefined ? nullptr : value.getObject();
    if (UNLIKELY(!isNullOrUndefined && !object)) {
        throwTypeError(&lexicalGlobalObject, throwScope);
        return { };
    }
    DOMPointInit result;
    JSValue wValue;
    if (isNullOrUndefined)
        wValue = jsUndefined();
    else {
        wValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "w"));
        RETURN_IF_EXCEPTION(throwScope, { });
    }
    if (!wValue.isUndefined()) {
        result.w = convert<IDLUnrestrictedDouble>(lexicalGlobalObject, wValue);
        RETURN_IF_EXCEPTION(throwScope, { });
    } else
        result.w = 1;
    JSValue xValue;
    if (isNullOrUndefined)
        xValue = jsUndefined();
    else {
        xValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "x"));
        RETURN_IF_EXCEPTION(throwScope, { });
    }
    if (!xValue.isUndefined()) {
        result.x = convert<IDLUnrestrictedDouble>(lexicalGlobalObject, xValue);
        RETURN_IF_EXCEPTION(throwScope, { });
    } else
        result.x = 0;
    JSValue yValue;
    if (isNullOrUndefined)
        yValue = jsUndefined();
    else {
        yValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "y"));
        RETURN_IF_EXCEPTION(throwScope, { });
    }
    if (!yValue.isUndefined()) {
        result.y = convert<IDLUnrestrictedDouble>(lexicalGlobalObject, yValue);
        RETURN_IF_EXCEPTION(throwScope, { });
    } else
        result.y = 0;
    JSValue zValue;
    if (isNullOrUndefined)
        zValue = jsUndefined();
    else {
        zValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "z"));
        RETURN_IF_EXCEPTION(throwScope, { });
    }
    if (!zValue.isUndefined()) {
        result.z = convert<IDLUnrestrictedDouble>(lexicalGlobalObject, zValue);
        RETURN_IF_EXCEPTION(throwScope, { });
    } else
        result.z = 0;
    return result;
}

} // namespace WebCore