//
// DO NOT EDIT THIS FILE!
// It is automatically generated from opcfoundation.org schemas.
//

#include <boost/python.hpp>

#include "opc/ua/protocol/attribute_ids.h"

using namespace boost::python;
using namespace OpcUa;

void py_opcua_enums_AttributeID()
{
  enum_<AttributeID>("AttributeID")
#define _value(X) value(#X, AttributeID:: X)
  ._value(NodeId)
  ._value(NodeClass)
  ._value(BrowseName)
  ._value(DisplayName)
  ._value(Description)
  ._value(WriteMask)
  ._value(UserWriteMask)
  ._value(IsAbstract)
  ._value(Symmetric)
  ._value(InverseName)
  ._value(ContainsNoLoops)
  ._value(EventNotifier)
  ._value(Value)
  ._value(DataType)
  ._value(ValueRank)
  ._value(ArrayDimensions)
  ._value(AccessLevel)
  ._value(UserAccessLevel)
  ._value(MinimumSamplingInterval)
  ._value(Historizing)
  ._value(Executable)
  ._value(UserExecutable)
#undef _value
  ;
}

