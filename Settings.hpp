#pragma once
#include <list> 
#include <string>
#include <memory>
#include <SFML/Graphics.hpp>
class Settings

{

	std::shared_ptr<sf::RenderWindow> & window;

	
public:
	Settings();
	Settings(std::shared_ptr<sf::RenderWindow> & window):window(window) {};// default
	Settings(std::list < std::pair < std::string, std::string >> &instantiatedSettings, std::shared_ptr<sf::RenderWindow> & window):window(window) {};


	void setVerticalSyncEnabled(bool enabled) {
		window->setVerticalSyncEnabled(enabled);
	}
	void setFramerateLimit(unsigned int limit) {
		window->setFramerateLimit(limit);
	};
	// TODO	void setSize(const Vector2& size) {};
	// TODO	void setPosition(const Vector2i& position){};
	void requestFocus() {
		window->requestFocus();
	};

	// TODO	void setTitle(const String& title);
	void setVisible(bool visible) {
		window->setVisible(visible);
	}
	// TODO full screen mode
	/*
	void setFullScreen(bool fullScreen) {
		window->setView()
	}
	*/
	~Settings() {};
};

