//lingshezhang.c
#include <weapon.h>
inherit STAFF;
inherit F_UNIQUE;

void create()
{
	set_name(HIR"������"NOR, ({ "lingshe zhang", "zhang" }));
	set_weight(100000);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "����һ������, ��ͷһ��С��, ��������, ʮ�ֹ��졣\n");
		set("value", 300);
		set("material", "leather");
		set("wield_msg", "$N��ৡ���һ������һ��$n�������С�\n");
		set("unwield_msg", "$N�����е�$n�ջر���\n");
	}
	init_staff(150);
	setup();
}