//
//  FOCV_Ids.cpp
//
//  Created by Łukasz Kurant on 04/08/2024.
//

#include "FOCV_Ids.hpp"
#include <jsi/jsilib.h>
#include <jsi/jsi.h>

using namespace facebook;

void FOCV_Ids::push(std::string id) {
    ids.push_back(id);
}

jsi::Array FOCV_Ids::toJsiArray(jsi::Runtime& runtime) {
    auto result = jsi::Array(runtime, ids.size());
    
    for (int i = 0; i < ids.size(); i++) {
      result.setValueAtIndex(runtime, i, ids[i]);
    }
    
    return result;
}