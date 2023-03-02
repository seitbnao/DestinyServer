-- Layout de um script de item em LUA para o WYD2

-- File need to have name as minute of execution, example:
-- if you need that this script run each 10 minutes, then you will put 10.lua

-- Use when time ticks
function onTick()
	SendNotice("Thanks to play WYD!")
	return true
end