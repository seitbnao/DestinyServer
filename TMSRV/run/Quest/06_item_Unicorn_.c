
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST006 NAME			    Unicornio
QUEST006 POSITION			4001 4001

//  base_speech�� �� 10�ʰ������� npc�� ȥ�ڸ�ó�� �Ѵ�. 1~4���� �Է��� �����ϸ�, �������� ���ֳ����� �Ϸ��� 4����� �������� �Է��Ѵ�
QUEST006 BASE_SPEECH-1      Ei_humano!_Voce_ja_viu_um_Unicornio_falar?
QUEST006 BASE_SPEECH-2      Eu_estou_procurando_um_item!
QUEST006 BASE_SPEECH-3      Tente_a_sorte_e_traga_um_cajado_+3_para_continuar!
QUEST006 BASE_SPEECH-4      Eu_lhe_darei_uma_otima_recompensa!

//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST006 CONDITION-1   LEVEL 1 100
QUEST006 CONDITION-1   SPEECH O_mundo_dos_unicornios_so_ajudam_aprendizes!
QUEST006 CONDITION-2   ITEMSANC  918 1 6
QUEST006 CONDITION-2   SPEECH O_cajado_precisa_ser_+6_para_continuar!
QUEST006 CONDITION-3   ISLOG  1

// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST006 REWARD-1	0   99 SPEECH  Obrigado!_Aqui_esta_sua_recompensa!
QUEST006 REWARD-2	0   99 QITEM   940_43_1_60_8_60_8
QUEST006 REWARD-3	0   99 DELETEITEM 918 1 6
