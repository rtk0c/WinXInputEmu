#pragma once

////////// Standard library //////////

#include <algorithm>
#include <array>
#include <cassert>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <filesystem>
#include <format>
#include <fstream>
#include <initializer_list>
#include <iostream>
#include <map>
#include <memory>
#include <optional>
#include <set>
#include <span>
#include <sstream>
#include <string>
#include <string_view>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

////////// System headers //////////

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include <Rpc.h>
#include <hidusage.h>

////////// 3rd party headers //////////

#include <toml++/toml.h>

// We don't include Xinput.h because dllmain.cpp wants separate declarations -- adding __declspec(dllexport), which is incompatible from the ones in Xinput.h
// We instead cherry-picked declarations from Windows SDK's Xinput.h into shadowed.h

////////// Project headers //////////

#include "export.h"
#include "shadowed.h"
#include "utils.h"
