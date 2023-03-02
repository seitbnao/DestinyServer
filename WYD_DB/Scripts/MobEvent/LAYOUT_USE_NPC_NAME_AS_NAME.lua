-- Layout de um script de item em LUA para o WYD2

-- Definitions in case of event
Defs = {
	KillHits = 100
	minX = 1000
	minY = 1000
	maxX = 1050
	maxY = 1050
	isActive = true
}

-- Use when player kill the monster
function onLastKill(connId, npcId)
	return true
end

-- Use when player claims KillHits, then the counter will restart before fn exec.
function onKillHit(connId, itemId)
	return true
end