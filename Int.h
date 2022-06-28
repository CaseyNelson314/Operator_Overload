#pragma once

#include <iostream>

class Int
{
public:

	Int()noexcept {}	
	Int(int value):integer(value){}

	// ������Z�q
	Int& operator=(const Int& r) {
		integer = r.integer;
		return *this;
	}

	// �ʏ퉉�Z�q
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

	// ��r���Z�q
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

	// �r�b�g�V�t�g���Z�q
	Int operator<<(int value) noexcept {
		Int temp = integer << value;
		return temp;
	}
	Int operator>>(int value) noexcept {
		Int temp = integer >> value;
		return temp;
	}

	// �C���N�������g,�f�N�������g
	Int& operator++(int) noexcept {  // �O�u
		++integer;
		return *this;
	}
	Int operator++() noexcept {  // ��u
		Int hold = *this;
		++integer;
		return hold;
	}
	Int& operator--(int) noexcept {  // �O�u
		--integer;
		return *this;
	}
	Int operator--() noexcept {  // ��u
		Int hold = *this;
		--integer;
		return hold;
	}

	// ����������Z�q
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

	// stream �o��
	friend std::ostream& operator<<(std::ostream& os, const Int& d) noexcept {
		os << d.integer;
		return os;
	}

private:
	int integer = 0;
};
