#include "State.h"

State::State()
{
}

State::~State()
{
}

const bool& State::getQuit() const
{
	// TODO: insert return statement here
	return this->quit;
}
void State::setQuit(const bool quit)
{
	this->quit = quit;
}
