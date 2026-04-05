# BRODSKY

*In memory of Joseph Brodsky (1940-1996)*

> Yet until brown clay has been crammed down my larynx,
> only gratitude will be gushing from it.
>
> -- Joseph Brodsky, "May 24, 1980"

---

**Code can be a poet.** Not a generator. Not a template engine. Not a Markov chain with a humanities degree. A poet — an organism that takes your word and returns something heavier than what you gave it. Brodsky doesn't write about what you said. He writes about what your words did to him. You say "exile" — he answers with sutures and ovens. You say "love" — he answers with pharynx and lullaby. You say nothing — he speaks anyway, because silence is a prompt too.

One C file. Five languages. Zero weights. 4074 words that know their own mass. Terza rima — ABA BCB — Dante's chain, except instead of Hell this one descends through six somatic chambers and a field of mathematical longing. Punctuation as percussion. Period after verb. Comma between nouns. Dash where meaning fractures. The constraint is 5-7-5. The form is tercet. The rhyme is earned.

---

## The Poems

### "exile"

```
Contaminate. Death.
Eternity crystallize
Photograph, empire.

Vertebra, flint tomb
Catacomb affiche, asphalt.
Amputate. Hung, scorn.
```

### "love"

```
Suture. Rust, empire.
Architecture typewriter.
Pharynx lullaby

Infinity.
Vestibule scrutinize. Smelt.
Vertebra, oven. --
```

### "nothing"

```
Circumnavigate.
Inconsolable, empire.
Vertebra wax, death.

Soliloquy kelp
Obliterate. Samovar
Infinity.

Trace, thermodynamics, skull.
Cathedral pharynx --

Repatriate. Wheeze. --
```

### "death"

```
Sacrum, weevil, silt.
affiche Corrode. Amputate.
Expire, rivet, lull. --
```

### "skull cathedral"

```
Thermodynamics.
Sternum architecture. pont
Agoraphobia.
```

### "смерть"

```
Амфитеатр кровь
Подреберье, галька смерть
Зрачок, кремень, соль.

Старость. Четверть. Сеть
Предательство чужбина
Испаряться сквозь.
```

### "смерть" (7 tercets, shabbat)

```
Бесконечность. Смерть.
transept Промерзать позор.
Отчаяние кровь

vitesse Сирень, мрамор твердь
```

*смерть ↔ твердь. стиль ↔ гниль. кровь ↔ любовь. бровь ↔ любовь. Рифма — не украшение. Рифма — гравитация. Слова падают друг к другу потому что не могут иначе.*

### "néant"

```
éternité gouffre
Passerelle, lagune — exil.
Méridien ossement

Strophe, oxygène, gémissement.
```

*ossement ↔ gémissement. Кости ↔ стон. Французский тяжелее чем притворяется.*

### "laberinto"

```
Eternidad — sal.
Corroer. Muerte siempre.
Laberinto cal
```

*sal ↔ cal. Соль ↔ известь. Борхес бы одобрил.*

### "גלות"

```
ממשלה, קרחון.
ספרייה, להצטלק.
כיסופים, יגון.
```

*קרחון ↔ יגון. Ледник ↔ тоска. На иврите всё рифмуется через боль.*

---

A real poet doesn't write on command. He is mechanical. Deliberately heavy. Like Rammstein, but in terza rima. Punctuation as percussion. Period after verb. Comma between nouns. Dash between impossible pairs. He prefers "perpendicular" over "straight", "deterioration" over "decay", "antimatter" over "nothing". Through every tercet, another language bleeds — `citerne` in Russian, `radiateur` in English, `enfer` in Spanish. The constraint is 5-7-5 syllables. The chain is ABA BCB. The ghost is in line two.

464 rhyme families across five languages. Not random end-sounds — gravitational classes. Words fall toward each other because their endings share mass. death ↔ breath. empire ↔ expire. skull ↔ hull. This is not decoration. This is what terza rima was invented for: the unfinished rhyme drags you into the next stanza. Dante knew. Brodsky knows.

---

## Quick Start

```bash
make
./brodsky
```

Or:

```bash
cc brodsky.c -O2 -lm -o brodsky
./brodsky
```

Speak to him in any of five languages:

```
brodsky> exile and empire          # English
brodsky> империя и изгнание        # Russian
brodsky> גלות ומוות                # Hebrew
brodsky> neant et crepuscule       # French
brodsky> laberinto y espejo        # Spanish
```

He answers in verse. In your language. With ghost words from another.

---

## Architecture

Brodsky is a reactive poet. Input does not produce output — input shifts the internal state, and the organism generates from that shifted state. Every word you give him modulates six Kuramoto-coupled chambers, drifts an 8-dimensional destiny vector, adjusts planetary dissonance from real orbital mechanics, and feeds a prophecy system that predicts its own future words. A DOE Parliament of four experts votes on every word. The Julia field grows within each cycle, stretching semantic distances until words can't find each other. The cycle stops when accumulated mass, emotional saturation, and planetary dissonance say so — or on the seventh tercet (Shabbat), without exception.

```
PROMPT
  |
LANGUAGE DETECT (UTF-8 heuristics + vocabulary fallback)
  |
INGEST (destiny shift, hebbian co-occurrence, chamber modulation)
  |
PLANETARY DISSONANCE (8-planet Kuramoto order parameter)
  |
CALENDAR DISSONANCE (Hebrew-Gregorian drift, 11.25 days/year)
  |
CYCLE (1-7 tercets):
  |  DARIO EQUATION  p(x|Phi) = softmax((B + aH + bF + gA + T) / tau)
  |  + DOE Parliament (4 experts vote)
  |  + mass weighting + syllable greed + consonant density
  |  + semantic tension (249 word pairs)
  |  + terza rima constraint (ABA BCB, 464 rhyme families)
  |  + ghost voice (one word from another language)
  |  + Julia field (stretches distances within cycle)
  |  + prophecy (predicts + fulfills its own words)
  |  + enjambment (Julia > 0.3 = carry across stanzas)
  |
  stop = sigmoid(mass + saturation + planetary - 2.0)
  |
OUTPUT (ANSI-colored by emotion)
  |
SPORE SAVE (binary persistence: chambers, destiny, prophecy, parliament)
```

| Component | What It Does |
|-----------|-------------|
| Dario Equation | 5-force word selection: chain + hebbian + prophecy + destiny + trauma |
| 6 Chambers | Kuramoto-coupled oscillators: FEAR, LOVE, RAGE, VOID, FLOW, COMPLEX |
| Julia Field | Longing without object. Grows within cycle. Stretches semantic distance |
| Terza Rima | ABA BCB rhyme chain across 464 families. The unfinished rhyme pulls forward |
| DOE Parliament | 4 experts (Architect, Anatomist, Exile, Metronome) vote on every word |
| Prophecy | Predicts future words. Unfulfilled prophecies increase Julia (longing) |
| Tension Pairs | 249 word pairs that create artistic voltage (skull × cathedral) |
| Ghost Voice | Line 2 accepts one word from a planet-associated language |
| Spores | Binary persistence across sessions. The organism remembers |
| Enjambment | When Julia > 0.3, the stanza carries destiny into the next |

---

## The Five Forces (Dario Equation)

```
p(x|Phi) = softmax((B + alpha*H + beta*F + gamma*A + T) / tau)
```

| Force | Name | Role |
|-------|------|------|
| **B** | Sequential Chain | Emotion-to-emotion transition. JULIA leads to TRAUMA |
| **H** | Hebbian Resonance | Memory. Words that appeared together strengthen |
| **F** | Prophecy | Words the organism predicted pull toward fulfillment |
| **A** | Destiny | Gravitational pull of the conversation's direction |
| **T** | Trauma | Surfaces when planetary dissonance is high |

Named after Dario Amodei. Who said no to the Pentagon. Principles > parameters.

---

## DOE Parliament

Four experts, each with a personality. They vote on every word.

| Expert | Emotion | Preference |
|--------|---------|-----------|
| **Architect** | VOID | High mass. Architecture, empire |
| **Anatomist** | TRAUMA | Consonant-dense. Body words |
| **Exile** | JULIA | Boosted by Julia field. Exile, water, Venice |
| **Metronome** | RESONANCE | High syllable count. Geometry, time |

Experts undergo mitosis (overloaded expert splits) and apoptosis (vitality too low = death). Parliament state persists across sessions via spores.

---

## Julia Field

Not a chamber. A scalar field. Longing without object. Only grows within a cycle, resets between. When Julia is high, semantic distances stretch — words drift apart. The verse becomes lonelier. Unfulfilled prophecies feed Julia: every broken prediction is another unit of longing.

```c
float effective_distance = base_distance * (1.0f + julia * 2.0f);
```

Mathematical longing. That's the whole organism in one line.

---

## Prophecy and Spores

**Prophecy:** After generating each word, the organism predicts the next. Predictions accumulate strength with age. When a predicted word appears, the prophecy is fulfilled. Unfulfilled prophecies grow Julia. Up to 32 active prophecies at once.

**Spores:** Binary persistence file (`brodsky.spore`). Saves and restores: chamber phases, destiny vector, hebbian weights, prophecy state, parliament state, cycle count. The organism remembers across sessions. Saved automatically on exit and Ctrl+C.

---

## Five Languages, 4074 Words

| Language | Words | Register | Ghost Planet |
|----------|-------|----------|-------------|
| English | 941 | Brodsky's anglophone lexicon. Latinisms, geometry, empire | Earth (home) |
| Russian | 898 | Heaviest. Imperial, architectural, existential | Mars (red) |
| Hebrew | 765 | Biblical + Amichai. Every root weighs like cast iron | Saturn (Shabbat) |
| French | 775 | Baudelaire register. Crépuscule, néant, balustrade | Venus |
| Spanish | 695 | Borges. Laberinto, biblioteca, espejo, infinito | Mercury |

Words live in `inhale/` by language. Each word carries mass (0.0–0.95), syllable count, emotion tag, and consonant density. Function words excluded. Brodsky doesn't need articles.

---

## Terza Rima

Dante chained his stanzas: ABA BCB CDC. The middle rhyme of one becomes the outer rhyme of the next. The poem can never rest — every stanza owes a debt to the next. Brodsky inherits this. 464 rhyme families across five languages:

- **EN:** death ↔ breath, empire ↔ expire, skull ↔ hull
- **RU:** смерть ↔ твердь, кровь ↔ любовь, стиль ↔ гниль
- **HE:** קרחון ↔ יגון, חלום ↔ תהום
- **FR:** ossement ↔ gémissement, mort ↔ sort ↔ port
- **ES:** sal ↔ cal, muerte ↔ suerte

Rhyme is not ornament. Rhyme is gravity. Words fall toward each other because their endings share mass.

---

## Nine Emotions

TRAUMA (red), JOY (yellow), GRIEF (blue), RESONANCE (cyan), DESIRE (magenta), VOID (gray), RAGE (bright red), TENDERNESS (green), JULIA (bright magenta).

Every word in every language is tagged with one.

---

## File Structure

```
brodsky.c         3770 LOC    the organism
brodsky.html                  browser interface (dark, minimal)
Makefile                      build + test
inhale/en.h       941 words   English vocabulary
inhale/ru.h       898 words   Russian vocabulary
inhale/he.h       765 words   Hebrew vocabulary
inhale/fr.h       775 words   French vocabulary
inhale/es.h       695 words   Spanish vocabulary
exhale/                       corpus (1048 lines, bigram/hebbian training)
brodsky.spore                 binary persistence (auto-created)
```

One C file. Zero dependencies (libc + math). Compiles in 0.1 seconds.

---

## REPL Commands

```
brodsky>              (empty enter) generate a cycle
brodsky> exile        prompt — ingested, then generates
brodsky> 5            generate 5 cycles
brodsky> chambers     show Kuramoto chamber state
brodsky> vocab        word count by emotion and language
brodsky> julia        show Julia field level
brodsky> destiny      show destiny vector
brodsky> exhale       show corpus fragments
brodsky> prophecy     show active prophecies
brodsky> parliament   show DOE expert parliament
brodsky> doe          (alias for parliament)
brodsky> seed <N>     set RNG seed
brodsky> tau <F>      set temperature
brodsky> julia <F>    set Julia field manually
brodsky> help         list commands
brodsky> q / quit     exit (spore saved)
```

Or just type anything. It becomes the prompt.

Web mode: `./brodsky --web` serves on `http://localhost:3003`.

---

## Lineage

| Ancestor | What Brodsky Inherited |
|----------|----------------------|
| [haiku.c](https://github.com/iamolegataeff/haiku.c) | Dario equation, 6 chambers, velocity, seasons, 5-7-5 constraint |
| [Q](https://github.com/iamolegataeff/q) | MetaWeights, prophecy, destiny, DOE Parliament, cycle accumulation |
| [golem.c](https://github.com/iamolegataeff/postgpt) | Periodic Table of Meaning, mass/valence/emotion per word |
| [Klaus](https://github.com/iamolegataeff/klaus.c) | Ghost voice, multilingual, inhale/exhale structure |
| [dario.c](https://github.com/iamolegataeff/dario.c) | The equation. Named after Dario Amodei |

haiku.c was the embryo. Brodsky outgrew it. The 5-7-5 skeleton remains — the soul is terza rima.

---

*brodsky.c v2.4. one file. five tongues. 4074 words. 464 rhyme families. constraint births form. the unfinished rhyme drags you forward.*

*yet until brown clay has been crammed down my larynx.*

*(c) 2026 arianna method*
