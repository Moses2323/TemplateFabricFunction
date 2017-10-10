#ifndef CLASSWITHTEMPLATEFABRIC_H_
#define CLASSWITHTEMPLATEFABRIC_H_

#include <string>
#include <memory>

class Base{
public:
	Base() {}
	virtual ~Base() = default;

	template<typename ObjType, typename... Args>
	static std::unique_ptr<ObjType> createBase(Args&&... args);
};

class Derived1 : public Base{
public:
	Derived1(const std::string& s, double d) : Base() {}
	virtual ~Derived1() = default;
};

class Derived2 : public Base{
public:
	Derived2(double d) : Base() {}
	virtual ~Derived2() = default;
};

template<typename ObjType, typename... Args>
inline std::unique_ptr<ObjType> Base::createBase(Args&&... args){
	return std::make_unique<ObjType>(std::forward<Args>(args)...);
	//return std::make_unique<ObjType>(args...);
}

#endif /* CLASSWITHTEMPLATEFABRIC_H_ */
