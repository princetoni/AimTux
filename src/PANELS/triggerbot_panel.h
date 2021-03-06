#pragma once

class TriggerbotPanel;

#include "../UI/stdui.h"
#include "../atgui.h"


class TriggerbotPanel : public Panel
{
private:
	ToggleSwitch* ts_triggerbot_enabled;
	Banner* ba_delay;
	ToggleSwitch* ts_delay;
	Slider*	sl_delay;
	Banner* ba_filter;
	ToggleSwitch* ts_friendly;
	ToggleSwitch* ts_head;
	ToggleSwitch* ts_chest;
	ToggleSwitch* ts_arms;
	ToggleSwitch* ts_legs;
public:
	TriggerbotPanel (Vector2D position, Vector2D size);
};