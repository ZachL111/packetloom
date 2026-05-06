# Review Journal

I treated `packetloom` as a project where the smallest useful behavior should still be inspectable.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its networking focus without claiming live deployment or external usage.

## Cases

- `baseline`: `packet span`, score 133, lane `watch`
- `stress`: `retry pressure`, score 197, lane `ship`
- `edge`: `route drift`, score 174, lane `ship`
- `recovery`: `socket risk`, score 214, lane `ship`
- `stale`: `packet span`, score 203, lane `ship`

## Note

This file is intentionally plain so the fixture remains the source of truth.
