-- Layout de um script de item em LUA para o WYD2
function onUse(connId)
	ClientMessage(connId, "Lua Test: recebeu um item")
	Notice("Notice do lua")
	
	if (GetPlayerLevel(connId) < 400) then
		AddItem(connId, 412, 61, 1 + RndNumber(3), 0, 0, 0, 0)
	else
		AddItem(connId, 413, 61, 1 + RndNumber(3), 0, 0, 0, 0)
	end
	
	if(GetUserMode(connId) == 22) then
		Teleport(connId, 2100, 2100)
		UpdateInventory(connId)
		UpdateChar(connId)
		UpdateStats(connId)
		UpdateAffects(connId)
		Save(connId)	
	end
	return 1
end

function onDelete(itemId)
	return 1
end

function onMove(itemId, sourcePos, sourceType, destPos, destType)
	return 1
end