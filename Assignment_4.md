p->q and 'p->'q are logically equivilant.

p -> q <=> p' -> q'
p' v q <=> q'' v p’   implication
p' v q <=> q v p’     double negation
p' v q <=> p’ v q     commutative

(p->r) ^ (q->r) <=> (p v q) -> r are logically equivilant. Since (p v q) is true as long as both statements are not false and there is
a "^" symbol between (p->r) and (q->r), it can be interpreted as (p v q) -> r.

(p->r) ^ (q->r) <=> (p v q) -> r
(p' v r) ^ (q' v r) <=> (p v q) -> r              implication
(p' v q' v r) ^ (q' v p' v r) <=> (p v q) -> r    distrubutive
(p' v q' v r) <=> (p v q) -> r                    equivilance
(p' v q') -> r <=> (p v q) -> r                   implication
(p v q) -> r <=> (p v q) -> r                     equivilance

Are (pvq) v r and ((p^q) ^ r)' logically equivilant?

Are (p^q)' and p' v q' logically equivilant?
