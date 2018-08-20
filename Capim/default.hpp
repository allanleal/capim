// Capim - a modern C++ plotting library powered by gnuplot
// https://github.com/allanleal/capim
//
// Licensed under the MIT License <http://opensource.org/licenses/MIT>.
//
// Copyright (c) 2018 Allan Leal
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#pragma once

// Capim includes
#include <Capim/enums.hpp>

namespace Capim {
namespace internal {

const auto DEFAULT_PALLETE = "dark2";
const auto DEFAULT_TEXTCOLOR = "'#404040'";
const auto DEFAULT_GRIDCOLOR = "'#d6d7d9'";
const auto DEFAULT_FONTNAME = "Georgia";
const auto DEFAULT_FONTSIZE = 12;
const auto DEFAULT_STYLE = style::lines;
const auto DEFAULT_LINEWIDTH = 2;
const auto DEFAULT_ASPECT_RATIO = 1.618034; // golden ratio
const auto DEFAULT_HEIGHT = 300;
const auto DEFAULT_WIDTH = DEFAULT_HEIGHT * DEFAULT_ASPECT_RATIO;

} // namespace internal
} // namespace Capim