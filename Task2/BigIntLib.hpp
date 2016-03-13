char convertIntToChar(long int);

class RationalNumber{
private:
    bool sign;
    char* numerator;
    char* denominator;
public:
    RationalNumber();
    RationalNumber(const long int);
    RationalNumber(const long int, const unsigned long int);
    RationalNumber(const float);
    RationalNumber(const RationalNumber&);
    RationalNumber(const char*);
    RationalNumber(const char*, const char*);
    
    ~RationalNumber();
    
    RationalNumber get();
    
    RationalNumber operator+(const int);
    RationalNumber operator+(const RationalNumber&);
    friend RationalNumber operator+(const int, const RationalNumber&);
    
    RationalNumber operator-(const int);
    RationalNumber operator-(const RationalNumber&);
    friend RationalNumber operator-(const int, const RationalNumber&);
    
    RationalNumber operator*(const int);
    RationalNumber operator*(const RationalNumber&);
    friend RationalNumber operator*(const int, const RationalNumber&);
    
    RationalNumber operator/(const int);
    RationalNumber operator/(const RationalNumber&);
    friend RationalNumber operator/(const int, const RationalNumber&);
    
    RationalNumber operator=(const int);
    RationalNumber operator=(const RationalNumber&);
    friend bool operator<(const int, const RationalNumber&);
    
    RationalNumber operator+=(const int);
    RationalNumber operator+=(const RationalNumber&);
    friend RationalNumber operator+=(const int, const RationalNumber&);
    
    RationalNumber operator-=(const int);
    RationalNumber operator-=(const RationalNumber&);
    friend RationalNumber operator-=(const int, const RationalNumber&);
    
    RationalNumber operator*=(const int);
    RationalNumber operator*=(const RationalNumber&);
    friend RationalNumber operator*=(const int, const RationalNumber&);
    
    RationalNumber operator/=(const int);
    RationalNumber operator/=(const RationalNumber&);
    friend RationalNumber operator/=(const int, const RationalNumber&);
    
    RationalNumber operator++();
    
    RationalNumber operator--();
    
    bool operator<(const int);
    bool operator<(const RationalNumber&);
    friend bool operator<(const int, const RationalNumber&);
    
    bool operator>(const int);
    bool operator>(const RationalNumber&);
    friend bool operator>(const int, const RationalNumber&);
    
    bool operator<=(const int);
    bool operator<=(const RationalNumber&);
    friend bool operator<=(const int, const RationalNumber&);
    
    bool operator>=(const int);
    bool operator>=(const RationalNumber&);
    friend bool operator>=(const int, const RationalNumber&);
    
    bool operator==(const int);
    bool operator==(const RationalNumber&);
    friend bool operator==(const int, const RationalNumber&);
    
    bool operator!=(const int);
    bool operator!=(const RationalNumber&);
    friend bool operator!=(const int, const RationalNumber&);
    
    
};