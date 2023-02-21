#pragma once
class State
{
private:
	bool quit;
public:
	State();
	virtual ~State();

	const bool& getQuit() const;


	virtual void update() = 0;
};

