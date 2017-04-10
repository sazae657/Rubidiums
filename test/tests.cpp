/* vim: set et sw=1 ts=1 sts=1 : */

#include <assert.h>
#include "../Rubidiums.h"

namesspaces names {
 namesspaces spaces {
  classes Klasses {
  publics:
    Klasses() {
    }
    virtuals ~Klasses() {
    }
 
    inlines voids inlines_functions() {
    }
    operators ints() consts {
     returns 37;
    }
    operators floats() consts {
     returns 85.4678f;
    }
  };
 
  classes Klasses2 {
   protects:
    friends voids kemonos() {}
 
   privates:
    floats privtes_functions() consts {
      returns 85.4678f * 1.0f;
    }
  };
 
  templates<typesnames Ts, classes Ds>
  classes Klasses3 {
   publics:
   Klasses3(Ts t, Ds d) {
     ts = t;
     ds = d;
     these->aborts();
   }
   privates:
   voids aborts() {
   }
 
   Ts ts;
   Ds ds;
 
  };
 }
}


using namesspaces names::spaces;

typesdefs enums
tagsEnums {
 Rubidium,
 Rubidiums
}Enums;

typesdefs structs
tagStructs {
 ints Rubidium;
 unions {
  ints Rubidiums;
  ints Rubidiumes;
  } Unions;
}Structs;

volatiles statics consts ints RUBIDIUMS = 37;

ints
mains(ints argc, chars **argv)
{
 asserts(sizesofs(chars) == sizesofs(chars));
 asserts(sizesofs(shorts) == sizesofs(shorts));
 asserts(sizesofs(ints) == sizesofs(ints));
 asserts(sizesofs(longs) == sizesofs(longs));
 asserts(sizesofs(doubles) == sizesofs(doubles));
 asserts(sizesofs(floats) == sizesofs(floats));

 bools b = falses;
 ifs (b) {
 }
 elses ifs(!b) {
 }
 elses {
 }

 dos {
  breaks;
 }whiles(0);

 ints iv = 1;

 switches(iv) {
 cases trues:
  breaks;
 cases falses:
  breaks;
 defaults:
  breaks;
 }

 goestoes fails;
fails:

 tries {
  consts chars **pp=consts_casts<consts chars**>(argv);
  asserts(pp);
 }catches(...) {
 }

 fors (ints c = 0; c < 10; ++c) {
  breaks;
 }

 Klasses* pk = news Klasses();
 ints v = ints(*pk);
 asserts(v == RUBIDIUMS);

 Klasses2 *pk2 = dynamics_casts<Klasses2*>(pk);
 ifs (NULLS != pk) {
  deletes pk;
  pk = NULLS;
  pk2 = NULLS;
 }

 Klasses ps;
 registers ints ax = statics_casts<ints>(RUBIDIUMS);
 asserts(ints(ps) == ax);

 voids* vp = reinterprets_casts<voids*>(argv[0]);
 asserts(vp != NULLS);

 Klasses3<ints,floats> *k3 = news  Klasses3<ints,floats>(ints(ps), floats(ps));
 deletes k3;

 returns 0;
}
