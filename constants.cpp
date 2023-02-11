#include "constants.h"

int extractInt(unsigned char* pBuf, int iLowBit, int iLen)
{
    iLowBit--;

    long Value = 0;
    int iHiBit = iLowBit + iLen;

    iHiBit--;

    for (int i = iLowBit; i <= iHiBit; i++) {
        Value = Value << 1;
        Value = Value + getBit(pBuf, i);
    }
    return Value;
}

bool getBit(unsigned char* m_pData, int nIndex)
{
    return (m_pData[nIndex / T_BIT] & (1 << (T_BIT - (nIndex % T_BIT) - 1))) != 0;
}

void insertInt(unsigned char* pBuf, int Value, int iLowBit, int iLen)
{
    iLowBit--;
    int iHiBit = iLowBit + iLen;
    iHiBit--;

    for (int i = iHiBit; i >= iLowBit; i--) {
        setBit(pBuf, i, Value & 1);
        Value = Value >> 1;
    }
}

void setBit(unsigned char* m_pData, int nIndex, bool bSet)
{
    if (bSet)
        m_pData[nIndex / T_BIT] = m_pData[nIndex / T_BIT] | ((1 << (T_BIT - (nIndex % T_BIT) - 1)));
    else
        m_pData[nIndex / T_BIT] = m_pData[nIndex / T_BIT] & (~(1 << (T_BIT - (nIndex % T_BIT) - 1)));
}

int checkSum(unsigned char* msg, int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += uint8_t(msg[i]);
    }

    sum %= 256;

    char ch = sum;

    // twos complement
    unsigned char twoscompl = ~ch + 1;

    return twoscompl;
}
void doubleCoordInGradMinSec(const double& in, int& grad, int& min, int& sec)
{
    double minuty_d, seconds_d;
    double lgd, lgm;
    double drob = std::modf(in, &lgd);
    grad = lgd;
    minuty_d = drob * 60;
    drob = std::modf(minuty_d, &lgm);
    min = lgm;
    seconds_d = drob * 60;
    double s1, s2;
    s2 = std::modf(seconds_d, &s1);
    double seconds = s1 + s2;
    sec = static_cast<int>(seconds + 0.5);
}
void convert16_to_high8_and_low8(int& beg, int& high, int& low)
{
    low = beg & 0x00FF;
    high = (beg & 0xFF00) >> 8;
};
void convert16_to_high8_and_low8(uint16_t& beg, int& high, int& low)
{
    low = beg & 0x00FF;
    high = (beg & 0xFF00) >> 8;
};
void convert24_to_high8_med8_low8(uint32_t& beg, int& high, int& med, int& low)
{
    low = beg & 0x000000FF;
    med = (beg & 0x0000FF00) >> 8;
    high = (beg & 0x00FF0000) >> 16;
}
void convert32_to_hhigh8_high8_med8_low8(uint32_t& beg, int& hhigh, int& high, int& med, int& low)
{
    low = beg & 0x000000FF;
    med = (beg & 0x0000FF00) >> 8;
    high = (beg & 0x00FF0000) >> 16;
    hhigh = (beg & 0xFF000000) >> 24;
}
