#include "pch.h"
#include "Master_Control.h"
using namespace MASTER_CONTROLL;
/*
//template<class T_send, class T_receive>
//P_M_COMUNICATION<T_send, T_receive>::P_M_COMUNICATION() {};

template<class T_send, class T_receive>
T_receive P_M_COMUNICATION<T_send, T_receive>::get_message() {return 0};

template<class T_send, class T_receive>
bool P_M_COMUNICATION<T_send, T_receive>::send_message(T_send message) {return 0};

template<class T_send, class T_receive>
bool P_M_COMUNICATION<T_send, T_receive>::receive_message(T_receive message) {return 0};

//template<class T_send, class T_receive>
//P_M_COMUNICATION<T_send, T_receive>::~P_M_COMUNICATION() {};

*/

//template<class T_send, class T_receive>
P_M_COMUNICATION::P_M_COMUNICATION() {};

//template<class T_send, class T_receive>
MESSAGE P_M_COMUNICATION::get_message() { return message_; }

//template<class T_send, class T_receive>
bool P_M_COMUNICATION::send_message(MESSAGE &message) { return true; }

//template<class T_send, class T_receive>
bool P_M_COMUNICATION::receive_message() { return true; }

//template<class T_send, class T_receive>
P_M_COMUNICATION::~P_M_COMUNICATION() {};