/**
* This file has been modified from its orginal sources.
*
* Copyright (c) 2012 Software in the Public Interest Inc (SPI)
* Copyright (c) 2012 David Pratt
* 
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*   http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
***
* Copyright (c) 2008-2012 Appcelerator Inc.
* 
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*   http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
**/

#include <tide/tide.h>
#include "monkey_module.h"
#include "monkey_binding.h"

using namespace tide;
using namespace ti;

namespace ti
{
    KROLL_MODULE(MonkeyModule, STRING(MODULE_NAME), STRING(MODULE_VERSION));
    
    void MonkeyModule::Initialize()
    {
        // load our variables
        this->binding = new MonkeyBinding(host,host->GetGlobalObject());

        // set our ti.Monkey
        KValueRef value = Value::NewObject(this->binding);
        host->GetGlobalObject()->Set("Monkey", value);
    }

    void MonkeyModule::Stop()
    {
    }
}
