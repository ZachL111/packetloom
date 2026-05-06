# Packetloom Walkthrough

The fixture is intentionally compact, so the review starts with the cases that pull farthest apart.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | packet span | 133 | watch |
| stress | retry pressure | 197 | ship |
| edge | route drift | 174 | ship |
| recovery | socket risk | 214 | ship |
| stale | packet span | 203 | ship |

Start with `recovery` and `baseline`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The useful comparison is `socket risk` against `packet span`, not the raw score alone.
