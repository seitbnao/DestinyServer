
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST024 NAME			    Lider_Aprendiz
QUEST024 POSITION			2234 1567

//  base_speech�� �� 10�ʰ������� npc�� ȥ�ڸ�ó�� �Ѵ�. 1~4���� �Է��� �����ϸ�, �������� ���ֳ����� �Ϸ��� 4����� �������� �Է��Ѵ�
QUEST024 BASE_SPEECH-1      Mata_os_monstros_ai_e_consiga_o_emblema!
QUEST024 BASE_SPEECH-2      Vou_te_recompensar_com_um_belo_manto_verde!
QUEST024 BASE_SPEECH-3      E_voce_sera_um_aprendiz_de_kersef!
QUEST024 BASE_SPEECH-4      E_um_guerreiro_digno_de_continuar_sua_jornada!
//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST024 CONDITION-1   LEVEL 101 150
QUEST024 CONDITION-1   SPEECH Ahh.._nao_te_falei?_Apenas_Nv_100_a_150!
QUEST024 CONDITION-2   ISTRANS 0
QUEST024 CONDITION-2   SPEECH Apenas_mortais!
QUEST024 CONDITION-3   EQITEM 14 4080
QUEST024 CONDITION-3   SPEECH Equipe_seu_emblema_para_continuar!
QUEST024 CONDITION-5   NOTEQUIP  16 4006
QUEST024 CONDITION-5   SPEECH  Voce_ja_possui_um_manto!

// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST024 REWARD-1	0   99 SPEECH   Bravo!_ficou_otimo_em_voce!
QUEST024 REWARD-2	0   99 EQUIP  16 4006
QUEST024 REWARD-3	0   99 EQDELETE 14 4080
QUEST024 REWARD-4	0   99 ITEM 411
