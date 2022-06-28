#pragma once

#include <iostream>

class Int
{
public:

	Int()noexcept {}	
	Int(int value):integer(value){}

	// 代入演算子
	Int& operator=(const Int& r) {
		integer = r.integer;
		return *this;
	}

	// 通常演算子
	Int operator+(const Int& r)const noexcept {
		Int temp;
		temp.integer = integer + r.integer;
		return temp;
	}
	Int operator-(const Int& r)const noexcept {
		Int temp;
		temp.integer = integer - r.integer;
		return temp;
	}
	Int operator*(const Int& r)const noexcept {
		Int temp;
		temp.integer = integer * r.integer;
		return temp;
	}
	Int operator/(const Int& r)const noexcept {
		Int temp;
		temp.integer = integer / r.integer;
		return temp;
	}
	Int operator%(const Int& r)const noexcept {
		Int temp;
		temp.integer = integer % r.integer;
		return temp;
	}

	// 比較演算子
	bool operator==(const Int& r)const noexcept {
		return integer == r.integer;
	}
	bool operator!=(const Int& r)const noexcept {
		return !(integer == r.integer);
	}
	bool operator<(const Int& r)const noexcept {
		return integer < r.integer;
	}
	bool operator>(const Int& r)const noexcept {
		return integer > r.integer;
	}
	bool operator<=(const Int& r)const noexcept {
		return integer <= r.integer;
	}
	bool operator>=(const Int& r)const noexcept {
		return integer >= r.integer;
	}

	// ビットシフト演算子
	Int operator<<(int value) noexcept {
		Int temp = integer << value;
		return temp;
	}
	Int operator>>(int value) noexcept {
		Int temp = integer >> value;
		return temp;
	}

	// インクリメント,デクリメント
	Int& operator++(int) noexcept {  // 前置
		++integer;
		return *this;
	}
	Int operator++() noexcept {  // 後置
		Int hold = *this;
		++integer;
		return hold;
	}
	Int& operator--(int) noexcept {  // 前置
		--integer;
		return *this;
	}
	Int operator--() noexcept {  // 後置
		Int hold = *this;
		--integer;
		return hold;
	}

	// 複合代入演算子
	Int& operator+=(const Int& r) noexcept {
		integer += r.integer;
		return *this;
	}
	Int& operator-=(const Int& r) noexcept {
		integer -= r.integer;
		return *this;
	}
	Int& operator*=(const Int& r) noexcept {
		integer *= r.integer;
		return *this;
	}
	Int& operator/=(const Int& r) noexcept {
		integer /= r.integer;
		return *this;
	}
	Int& operator%=(const Int& r) noexcept {
		integer %= r.integer;
		return *this;
	}
	Int& operator<<=(int value) noexcept {
		integer <<= value;
		return *this;
	}
	Int& operator>>=(int value) noexcept {
		integer >>= value;
		return *this;
	}

	// stream 出力
	friend std::ostream& operator<<(std::ostream& os, const Int& d) noexcept {
		os << d.integer;
		return os;
	}

private:
	int integer = 0;
};
