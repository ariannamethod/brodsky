# BRODSKY

*In memory of Joseph Brodsky (1940-1996)*

> Yet until brown clay has been crammed down my larynx,
> only gratitude will be gushing from it.
>
> -- Joseph Brodsky, "May 24, 1980"

A poetic organism that speaks in haiku. Five languages. One C file. Zero weights.

```
brodsky> exile and empire

  [1]  julia=0.00  WALK
  perpendicular
  parenthesis lagoon skull
  cathedral ash

  [2]  julia=0.13  RUN
  manuscript beneath
  deterioration salt
  displacement birch
```

Brodsky is mechanical. Deliberately heavy. Like Rammstein, but in haiku. He prefers "perpendicular" over "straight", "deterioration" over "decay", "consciousness" over "mind". The constraint is 5-7-5. The heaviness is in the words.

---

## Quick Start

```bash
cc brodsky.c -O2 -lm -o brodsky
./brodsky
```

Speak to him in any of five languages:

```bash
brodsky> exile and empire          # English
brodsky> империя и изгнание        # Russian
brodsky> גלות ומוות                # Hebrew
brodsky> néant et crépuscule       # French
brodsky> laberinto y espejo        # Spanish
```

He answers in haiku. In your language. With ghost words from another.

---

## Architecture

```
PROMPT
  |
LANGUAGE DETECT (UTF-8 heuristics + vocabulary fallback)
  |
INGEST (destiny shift, hebbian co-occurrence, chamber modulation)
  |
PLANETARY DISSONANCE
  |  theta_k(t) = (2pi * days_since_J2000 / period_k) mod 2pi
  |  R = |sum(e^(i*theta_k))| / N
  |  dissonance = 1 - R
  |
CALENDAR DISSONANCE (Hebrew-Gregorian drift, 11.25 days/year)
  |
CYCLE (1-7 haiku):
  |  for each haiku:
  |    DARIO EQUATION: p(x|Phi) = softmax((B + aH + bF + gA + T) / tau)
  |    + mass weighting (heavy words dominate)
  |    + syllable greed (polysyllables preferred)
  |    + consonant density bonus (sound clusters)
  |    + semantic tension (skull x cathedral, manuscript x ash)
  |    + adjacent adjective penalty
  |    + ghost voice (one word from another language in line 2)
  |    + Julia field (stretches semantic distances within cycle)
  |  stop_probability = sigmoid(mass + saturation + planetary - 2.0)
  |  haiku 7 = forced stop (shabbat)
  |
OUTPUT (ANSI-colored by emotion)
```

### The Five Forces (Dario Equation)

| Term | Name | What It Does |
|------|------|-------------|
| **B** | Sequential Chain | Emotion-to-emotion transition. JULIA leads to TRAUMA |
| **H** | Hebbian Resonance | Memory. Words that appeared together strengthen |
| **F** | Prophecy | Seasonal bias. Spring = growth, Winter = trauma |
| **A** | Destiny | Gravitational pull of the conversation's direction |
| **T** | Trauma | Words of TRAUMA surface when planetary dissonance is high |

### Six Chambers (Kuramoto-coupled)

FEAR, LOVE, RAGE, VOID, FLOW, COMPLEX. Phase-coupled oscillators. Your words shift their phases. Their phases shift the next haiku.

### Julia Field

Not a chamber. A scalar field. Longing without object. Only grows within a cycle, resets between cycles. When Julia is high, semantic distances stretch -- words can't find each other. "Vertebra" and "empire" drift apart. The haiku becomes lonelier.

```c
float effective_distance = base_distance * (1.0 + julia * 2.0);
```

### Nine Emotions

TRAUMA (red), JOY (yellow), GRIEF (blue), RESONANCE (cyan), DESIRE (magenta), VOID (gray), RAGE (bright red), TENDERNESS (green), JULIA (bright magenta).

Every word in every language is tagged with one.

### Ghost Voice

Line 2 of each haiku (7 syllables, the freest line) may accept one word from another language. The ghost language is determined by planetary association:

| Planet | Period | Language | Why |
|--------|--------|----------|-----|
| Mercury | 88d | Spanish | Quick, mercurial. Borges = labyrinth = mercury |
| Venus | 225d | French | Obviously |
| Mars | 687d | Russian | Red planet. Red army. Brodsky was born in Leningrad |
| Saturn | 10759d | Hebrew | Shabbat = Saturn (Saturday). Slowest planet = oldest language |

### Semantic Tension

50 word pairs that create artistic voltage when adjacent:

```
skull       x  cathedral     = the cathedral is a skull of god
vertebra    x  empire        = the spine of the state
exile       x  lagoon        = Venice, the city of exiles
manuscript  x  ash           = what survives
typewriter  x  skull         = Brodsky's desk
windowsill  x  constellation = the domestic infinite
asymptote   x  never         = geometry of longing
translation x  exile         = every translation is an exile
```

### Planetary Dissonance

Eight planets. Real orbital mechanics from `time()`:

```c
theta_planet(t) = (2 * M_PI * days_since_J2000 / orbital_period) % (2 * M_PI);
R = |sum(e^(i * theta_k))| / N;
planetary_dissonance = 1.0 - R;
```

When planets align, dissonance drops, haiku calms. When scattered, dissonance rises, trauma surfaces. This is not astrology. This is orbital mechanics and Kuramoto order parameter.

### Calendar Dissonance

Hebrew lunar year: 354 days. Gregorian solar: 365.25. Annual drift: 11.25 days. Metonic cycle: 19 years. When calendars disagree, GRIEF and VOID chambers activate.

---

## Five Languages, 997 Words

| Language | Words | Register |
|----------|-------|----------|
| English | 235 | Brodsky's anglophone lexicon. Latinisms, geometry, empire |
| Russian | 198 | Heaviest. Imperial, architectural, existential |
| Hebrew | 201 | Biblical + Amichai. Every root weighs like cast iron |
| French | 198 | Baudelaire register. Crépuscule, néant, balustrade |
| Spanish | 206 | Borges. Laberinto, biblioteca, espejo, infinito |

Words are organized in `inhale/` by language. Each word has mass (0.0-0.95), syllable count, emotion, and consonant density.

Function words (the, a, is) are excluded. Brodsky doesn't need articles.

---

## Haiku Cycles

One cycle = 1 to 7 haiku. The organism decides when to stop:

```
stop_probability = sigmoid(accumulated_mass * 0.3
                         + emotional_saturation * 0.4
                         + planetary_dissonance * 0.3
                         - 2.0)
```

First three haiku almost never stop. By the fifth -- coin flip. **Seventh haiku = forced stop. Shabbat.** On the seventh cycle the organism falls silent. Without exception.

Each haiku in a cycle knows all the words of the previous ones. Destiny drifts. Julia grows. The poem accumulates weight.

---

## File Structure

```
brodsky.c       ~1500 LOC   the organism
inhale/en.h      235 words  English vocabulary
inhale/ru.h      198 words  Russian vocabulary
inhale/he.h      201 words  Hebrew vocabulary
inhale/fr.h      198 words  French vocabulary
inhale/es.h      206 words  Spanish vocabulary
```

One C file. Zero dependencies (libc + math). Compiles in 0.1 seconds.

---

## Commands

```
brodsky>              (empty enter) generate a cycle
brodsky> 5            generate 5 cycles
brodsky> chambers     show Kuramoto chamber state
brodsky> vocab        word count by emotion and language
brodsky> julia        show Julia field level
brodsky> destiny      show destiny vector
brodsky> exhale       show Brodsky fragments
brodsky> help         list commands
brodsky> quit         exit
```

Or just type anything. It becomes the prompt.

---

## Lineage

| Ancestor | What Brodsky Inherited |
|----------|----------------------|
| [haiku.c](https://github.com/iamolegataeff/haiku.c) | Dario equation, 6 chambers, velocity, seasons, 5-7-5 |
| [Q](https://github.com/iamolegataeff/q) | MetaWeights concept, prophecy, destiny, cycle accumulation |
| [golem.c](https://github.com/iamolegataeff/postgpt) | Periodic Table of Meaning, mass/valence/emotion per word |
| [Klaus](https://github.com/iamolegataeff/klaus.c) | Ghost voice, multilingual, inhale/exhale structure |
| [dario.c](https://github.com/iamolegataeff/dario.c) | The equation. Named after Dario Amodei |

---

*brodsky.c. one file. five tongues. constraint births form.*

*yet until brown clay has been crammed down my larynx.*

*(c) 2026 arianna method*
