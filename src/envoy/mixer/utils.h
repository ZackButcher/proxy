/* Copyright 2017 Istio Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <map>
#include <string>

#include "common/http/headers.h"
#include "envoy/json/json_object.h"

namespace Envoy {
namespace Http {
namespace Utils {

// The internal header to pass istio attributes.
extern const LowerCaseString kIstioAttributeHeader;

// The string map.
typedef std::map<std::string, std::string> StringMap;

// Serialize a string map to string.
std::string SerializeStringMap(const StringMap& map);

}  // namespace Utils
}  // namespace Http
}  // namespace Envoy
