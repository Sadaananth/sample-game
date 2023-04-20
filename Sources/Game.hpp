#pragma once

class Game
{
public:
	Game();
	~Game();

	void init();
	void update();
	void render();
private:
	enum class GameState : uint8_t
	{
		WAIT,
		READY
	};

	GameState mState;
};