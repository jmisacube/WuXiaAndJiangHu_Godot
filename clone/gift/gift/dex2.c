#include <ansi.h>
inherit __DIR__ "gift";

void create()
{
        set_name(HIR "朱雀玲珑丹" NOR, ({"zhuque dan", "zhuque", "dan"}));
        if (clonep())
                set_default_object(__FILE__);
        else
        {
                set("long", HIR "这是一颗有着血色光泽的药丸，据说吃后可增强身法。\n" NOR);
                set("unit", "颗");
                set("value", 50000);
                set("weight", 50);
                set("gift_type", "dex");
                set("gift_name", "先天身法");
                set("gift_point", 65);
                set("gift_msg", HIW "突然你只觉全身轻飘飘的，有股腾云驾雾的感觉。\n" NOR);
        }
        setup();
}
