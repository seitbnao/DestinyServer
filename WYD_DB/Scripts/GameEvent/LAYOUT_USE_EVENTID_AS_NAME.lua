-- Layout de um script de item em LUA para o WYD2

-- File need to have EventID as name
EventData = {
	TickTime = 30
	
}

-- When event start
function onStart()
	GenerateMob(1050)
	return true
end

-- When event ends
function onEnd()
	SendNotice("Thanks to play WYD!")
	ClearArea(1000,1000,1050,1050)
	return true
end

function onTick()
	GenerateMob(1050)
end