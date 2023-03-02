-- Layout de um script de item em LUA para o WYD2

-- File need to have name ex: 12:00 = 12_00.lua, then in mid-day this script will run

-- Use when time ticks
function onTime()
	SendNotice("Thanks to play WYD!")
	return true
end