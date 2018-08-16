// A modern C++ interface for plotting using gnuplot
// https://github.com/allanleal/plot
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

// Catch includes
#include "catch.hpp"

// plot includes
#include <plot/plot.hpp>
using namespace gnuplot;

TEST_CASE("plotting tests", "[plot]")
{
    plot plt;

    std::vector<double> x = {1,2,3,4,5,6};
    std::vector<double> y = {1,2,2,3,3,4};

    plt.xlabel("Temperature [K]");
    plt.ylabel("Amount [mol]");
    plt.xrange(0, 3);
//    plt.draw(x, y);
//    plt.draw(x, y, "with points");
//    plt.draw(x, y, "with lines ls 2 lw 6");
//    plt.draw(y, x, "with lines ls 8 lw 6");
//    plt.draw(y, x, "with lines ls 11 lw 6");
    for(auto i = 1; i <= 7; ++i)
        plt.draw(str(i) + " * sin(x)").title("line " + str(i)).linestyle(i).dashtype(i).linewidth(2).with(style::lines);
//    plt.draw("1 with lines ls 1 lw 6");
//    plt.draw("2 with lines ls 2 lw 6");
//    plt.draw("3 with lines ls 3 lw 6");
//    plt.draw("4 with lines ls 4 lw 6");
//    plt.draw("8 with lines ls 8 lw 6");
//    plt.draw("9 with lines ls 9 lw 6");
//    plt.draw("10 with lines ls 10 lw 6");
//    plt.draw("12 with lines ls 11 lw 6");
//    plt.draw("12 with lines ls 12 lw 6");
//    plt.draw(y, x, "with lines ls 9 lw 6");
//    plt.draw(y, x, "with points");
    plt.show();
    plt.save("xy.svg");
}
