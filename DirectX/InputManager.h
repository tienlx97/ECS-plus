#ifndef INPUTMANAGER_H_
#define INPUTMANAGER_H_

#include "../High perfomance ECS/Singleton.h"
#include "../directx data/Include/dinput.h"
#include "../directx data/Include/d3dx9.h"

#include <functional>

#include "Define.h"

enum KeyState
{
	current = 0,
	previous = 1
};

class InputManager:public ECS::Singleton<InputManager>
{
private:

	LPDIRECTINPUT8       dInput;		  
	LPDIRECTINPUTDEVICE8 keyboard;	
	BYTE  currentKeyStates[256];		
	BYTE previousKeyStates[256];
	DIDEVICEOBJECTDATA keyEvents[KEYBOARD_BUFFER_SIZE];  // KEYBOARD_BUFFER_SIZE

public:

	std::function<void(int)> onKeyUp;

	std::function<void(int)> onKeyDown;

	void init(HWND , HINSTANCE );

	void update(HWND);

	void release();

	bool getKey(const int);

	bool getKeyDown(const int) ;

	bool getKeyUp(const int);

	bool isKeyDown(const int,KeyState);

	InputManager();

	~InputManager();
};


#endif // !INPUTMANAGER_H_


