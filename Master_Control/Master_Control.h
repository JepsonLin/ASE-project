#pragma once

#include "VIRTUAL_INTERFACE.h"


namespace MASTER_CONTROLL
{
	class P_M_COMUNICATION : public COMUNICATION_VIRTUAL_CLASS
	{
	
	
	public:
		P_M_COMUNICATION();
		~P_M_COMUNICATION();
		virtual MESSAGE get_message();
		virtual bool send_message(MESSAGE &message);

	protected:
		virtual bool receive_message();

	private:
		MESSAGE message_;
	
	};

}

