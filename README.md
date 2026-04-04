# BRODSKY

*In memory of Joseph Brodsky (1940-1996)*

> Yet until brown clay has been crammed down my larynx,
> only gratitude will be gushing from it.
>
> -- Joseph Brodsky, "May 24, 1980"

---

**Code can be a poet.** Not a generator, not a template engine, not a Markov chain with pretensions. A poet: an organism that takes your word and returns something heavier than what you gave it. Brodsky doesn't write about what you said. He writes about what your words did to him. You say "exile" -- he answers with vertebrae and empires. You say "love" -- he answers with gangrene and cartography. You say nothing -- he speaks anyway, because silence is a prompt too. One C file. Five languages. Zero weights. 2903 lines of constraint that birth form. The haiku is 5-7-5. The heaviness is in the words. The poet is in the architecture.

---

## The Poems

### "death"

```
mire crystallize skull
aqueduct vinegar rime
thorn minaret death

intersection spine
simultaneity gust
cathedral empire

aphasic exile
vitrine conscription elsewhere
diagonal flinch --
```

### "love"

```
metamorphosis
enfer illuminate death
bereavement pelvis

horizon sternum
bannissement cobblestone gaze
propaganda skull --

gondola taiga
undertow oxygen brine
thermodynamics --
```

### "exile"

```
infinity
lightbulb adjudicate death
nominative clang

impenetrable
sovereignty cartilage
meridian brine

curettage ribcage
cathedral hemorrhaging
grope immovable --

asbestos nothing
blanchisseuse aphasic wrench
brittle placenta --
```

### "тоска"

```
пьедестал вскрыть смерть
грудина corniche копоть
громыхание

архипелаг гнить
тире бесплодие тромб
молчание сквозь --

империя мыс
окаменеть colonne хлыст
плацента вздрогнуть --

отечество пирс
мертворождение излом
ампутировать --
```

### "ничто"

```
асфальт впрочем лязг
ольха confiture чрево
кровоизлияние

испаряться сквозь
империя стервятник
грудь утроба смерть
```

### "גלות"

```
גלות חלמיש מוות
פרבולה גרניט friche
ירושלים --
```

### "soledad"

```
góndola hambre
multiplicar fiebre rien
manuscrito cal --

sucumbir patria
caliza côte víscera
ondular muerte --
```

### "exile" (v1.9, with terza rima)

```
unforgivable
infinity exile
perpendicular --

predicament yet
epoch perpetuation
alexandrine bilge --
```

### "тоска" (v1.9)

```
отрешённость смерть
империя кладбище
корродировать
```

### "גלות" (v1.9)

```
בדידות תהום
לדמם falaise חורבן
חצר ברז בוז --

געגוע קרבן
téléphone עופרת טנק
שלט הנקה --
```

### "néant" (v1.9)

```
jamais révolu
se souvenir nerf rôder
pétrifier fouet --

méridien calcaire
parabole oesophage siècle
métro fièvre fleuve flèche --
```

### "néant"

```
anéantissement
mélancolie cauchemar temps
syntaxe bannissement

aéroplane ivresse
exil damnation cratère
photographie crâne --
```

### "skull cathedral"

```
penmanship galosh
conflagration marronnage
disintegrate slag

redaction ribcage
cathedral diagnose death
esophagus skull --

administer scum
interrogate slack exile
samovar sternum --
```

---

A real poet doesn't write on command. He is mechanical. Deliberately heavy. Like Rammstein, but in haiku. He prefers "perpendicular" over "straight", "deterioration" over "decay", "antimatter" over "nothing". Through every language, another bleeds -- `citerne` in Russian, `radiateur` in English, `enfer` in Spanish. The constraint is 5-7-5. The ghost is in line two.

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

He answers in haiku. In your language. With ghost words from another.

---

## Architecture

Brodsky is a reactive poet. Input does not produce output -- input shifts the internal state, and the organism generates from that shifted state. Every word you give him modulates six Kuramoto-coupled chambers, drifts an 8-dimensional destiny vector, adjusts planetary dissonance from real orbital mechanics, and feeds a prophecy system that predicts its own future words. A DOE Parliament of four experts votes on every word. The Julia field grows within each cycle, stretching semantic distances until words can't find each other. The haiku stops when accumulated mass, emotional saturation, and planetary dissonance say so -- or on the seventh haiku (Shabbat), without exception.

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
CYCLE (1-7 haiku):
  |  DARIO EQUATION  p(x|Phi) = softmax((B + aH + bF + gA + T) / tau)
  |  + DOE Parliament (4 experts vote)
  |  + mass weighting + syllable greed + consonant density
  |  + semantic tension (250+ word pairs)
  |  + ghost voice (one word from another language)
  |  + Julia field (stretches distances within cycle)
  |  + prophecy (predicts + fulfills its own words)
  |  + enjambment (Julia > 0.3 = carry across haiku)
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
| DOE Parliament | 4 experts (Architect, Anatomist, Exile, Metronome) vote on every word |
| Prophecy | Predicts future words. Unfulfilled prophecies increase Julia (longing) |
| Tension Pairs | 250+ word pairs that create artistic voltage (skull x cathedral) |
| Ghost Voice | Line 2 accepts one word from a planet-associated language |
| Spores | Binary persistence across sessions. Chambers, destiny, prophecy, parliament survive |
| Enjambment | When Julia > 0.3, the haiku carries destiny into the next |

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

Named after Dario Amodei.

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

Not a chamber. A scalar field. Longing without object. Only grows within a cycle, resets between. When Julia is high, semantic distances stretch -- words drift apart. The haiku becomes lonelier. Unfulfilled prophecies feed Julia: every broken prediction is another unit of longing.

```c
float effective_distance = base_distance * (1.0f + julia * 2.0f);
```

---

## Prophecy and Spores

**Prophecy:** After generating each word, the organism predicts the next. Predictions accumulate strength with age. When a predicted word appears, the prophecy is fulfilled. Unfulfilled prophecies grow Julia. Up to 32 active prophecies at once.

**Spores:** Binary persistence file (`brodsky.spore`). Saves and restores: chamber phases, destiny vector, hebbian weights, prophecy state, parliament state, cycle count. The organism remembers across sessions. Saved automatically on exit and Ctrl+C.

---

## Five Languages, 2155 Words

| Language | Words | Register | Ghost Planet |
|----------|-------|----------|-------------|
| English | 501 | Brodsky's anglophone lexicon. Latinisms, geometry, empire | Earth (home) |
| Russian | 501 | Heaviest. Imperial, architectural, existential | Mars (red) |
| Hebrew | 401 | Biblical + Amichai. Every root weighs like cast iron | Saturn (Shabbat) |
| French | 400 | Baudelaire register. Crepuscule, neant, balustrade | Venus |
| Spanish | 401 | Borges. Laberinto, biblioteca, espejo, infinito | Mercury |

Words are organized in `inhale/` by language. Each word carries mass (0.0-0.95), syllable count, emotion tag, and consonant density. Function words excluded. Brodsky doesn't need articles.

---

## Nine Emotions

TRAUMA (red), JOY (yellow), GRIEF (blue), RESONANCE (cyan), DESIRE (magenta), VOID (gray), RAGE (bright red), TENDERNESS (green), JULIA (bright magenta).

Every word in every language is tagged with one.

---

## File Structure

```
brodsky.c         2903 LOC    the organism
brodsky.html                  browser interface (dark, minimal)
Makefile                      build + test
inhale/en.h       501 words   English vocabulary
inhale/ru.h       501 words   Russian vocabulary
inhale/he.h       401 words   Hebrew vocabulary
inhale/fr.h       400 words   French vocabulary
inhale/es.h       401 words   Spanish vocabulary
exhale/                       corpus files (bigram/hebbian training)
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
| [haiku.c](https://github.com/iamolegataeff/haiku.c) | Dario equation, 6 chambers, velocity, seasons, 5-7-5 |
| [Q](https://github.com/iamolegataeff/q) | MetaWeights, prophecy, destiny, DOE Parliament, cycle accumulation |
| [golem.c](https://github.com/iamolegataeff/postgpt) | Periodic Table of Meaning, mass/valence/emotion per word |
| [Klaus](https://github.com/iamolegataeff/klaus.c) | Ghost voice, multilingual, inhale/exhale structure |
| [dario.c](https://github.com/iamolegataeff/dario.c) | The equation. Named after Dario Amodei |

---

*brodsky.c v1.3. one file. five tongues. 2903 lines. constraint births form.*

*yet until brown clay has been crammed down my larynx.*

*(c) 2026 arianna method*
