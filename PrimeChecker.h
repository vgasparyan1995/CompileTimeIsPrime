#pragma once

namespace {

template <int N, int K>
struct IsPrimeHelper
{
    static const bool value = ((N % K) != 0) && IsPrimeHelper<N, K + 1>::value;
};

template <int N>
struct IsPrimeHelper<N, N>
{
    static const bool value = true;
};

template <>
struct IsPrimeHelper<1, 0>
{
    static const bool value = false;
};

}

namespace PrimeChecker
{

template <unsigned int N>
struct IsPrime
{
    static const bool value = IsPrimeHelper<N, 2>::value;
};

template <>
struct IsPrime<1>
{
    static const bool value = false;
};

template <>
struct IsPrime<0>
{
    static const bool value = false;
};

};

