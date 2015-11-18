#pragma once

#ifdef MASTERCONTROLL_EXPORTS
#define MCDLL_API _declspec(dllexport)
#else
#define MCDLL_API _declspec(dllimport)
#endif
enum PARTICIPANT
{
	P_M,
	U_M,
	M_S,
	M_D
};
enum METHOD
{
	method_x,
	method_xx,
	method_xxx,

};

struct MESSAGE
{
	PARTICIPANT parti;
	METHOD method;
	std::string* message;
};
//#define MCDLL_API _declspec(dllexport)
//template<class T_send, class T_receive>
class COMUNICATION_VIRTUAL_CLASS
{
public:
	virtual MESSAGE get_message() = 0;
	virtual bool send_message(MESSAGE &message) = 0;

protected:
	virtual bool receive_message() = 0;
public:
	virtual ~COMUNICATION_VIRTUAL_CLASS() {};
};

extern "C" MCDLL_API COMUNICATION_VIRTUAL_CLASS* APIENTRY GET_P_M_COMUNICATION();