-- Layout de um script de item em LUA para o WYD2
function onUse(connId)
	local playerPk = GetPKPoint(connId)
	
	if playerPk < 150 then
		SetPKPoint(connId, value)
	end
	
	SendClientMessage(connId, "Seu CP foi resetado!")
	
	local itemSlot = GetFirstSlot(connId, 413)
	
	if not itemSlot then
		SendClientMessage(connId, "Voce precisa de uma PL")
		return false
	end
	
	local pItem = GetItem(connId, def.INV_TYPE, itemSlot)
	
	local pItemSlot = pItem:getEffByPos(61)
	
	if pItemSlot != -1 then
		pItem:setValue(pItemSlot, 2)
	else
		pItem:setEffect(pItemSlot, 0)
		pItem:setValue(pItemSlot, 2)
	end
	
	SendItem(connId, def.INV_TYPE, itemSlot, pItem)
	SendClientMessage(connId, "PL atualizada!")
	return true
end

function onDelete(itemId)
	return true
end

function onMove(itemId, sourcePos, sourceType, destPos, destType)
	return true
end