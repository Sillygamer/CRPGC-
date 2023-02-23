#pragma once
class State
{
private:
	bool quit;
public:
	State();
	virtual ~State();

	const bool& getQuit() const;
	void setQuit(const bool quit);

	virtual void update() = 0;
};

