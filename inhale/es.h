/* inhale/es.h — Spanish heavy vocabulary for brodsky.c
 * ~700 words. Borges + Lorca + Neruda + Vallejo + Storni.
 * Vallejo: body as political document, arithmetic of suffering.
 * Storni: the sea as mirror, woman's body as contested territory.
 * Spanish syllable counting: vowel nuclei, diphthongs = 1 syllable.
 * ai, ei, oi, au, eu, ou, ia, ie, io, iu, ua, ue, uo = diphthongs (1 syl).
 * Hiatus when accent mark breaks diphthong: ía, úa, etc. = 2 syllables.
 * Each word: text, mass, syllables, emotion
 */

/* W(word, mass, syllables, emotion) */
#define INHALE_ES \
/* === ETERNIDADES PESADAS === */ \
W("muerte",           0.95, 2, EMO_TRAUMA), \
W("imperio",          0.90, 3, EMO_VOID), \
W("eternidad",        0.85, 4, EMO_RESONANCE), \
W("infinito",         0.80, 4, EMO_RESONANCE), \
W("existencia",       0.75, 4, EMO_VOID), \
W("espacio",          0.75, 3, EMO_RESONANCE), \
W("tiempo",           0.80, 2, EMO_RESONANCE), \
W("nada",             0.90, 2, EMO_VOID), \
W("vacío",            0.80, 3, EMO_VOID), \
W("ausencia",         0.75, 3, EMO_VOID), \
W("olvido",           0.70, 3, EMO_VOID), \
W("soledad",          0.80, 3, EMO_JULIA), \
W("abismo",           0.80, 3, EMO_VOID), \
/* === EXILIO === */ \
W("exilio",           0.90, 3, EMO_JULIA), \
W("empero",           0.38, 3, EMO_VOID), \
W("aunque",           0.35, 2, EMO_VOID), \
W("mas",              0.30, 1, EMO_VOID), \
W("destierro",        0.80, 3, EMO_JULIA), \
W("separación",       0.75, 4, EMO_JULIA), \
W("partida",          0.65, 3, EMO_JULIA), \
W("provincia",        0.60, 3, EMO_JULIA), \
W("patria",           0.70, 2, EMO_JULIA), \
W("extranjero",       0.65, 4, EMO_JULIA), \
W("frontera",         0.60, 3, EMO_JULIA), \
W("hemisferio",       0.55, 4, EMO_VOID), \
W("pertenencia",      0.60, 4, EMO_JULIA), \
W("indiferencia",     0.65, 5, EMO_VOID), \
W("desarraigo",       0.70, 4, EMO_JULIA), \
/* === ARQUITECTURA & IMPERIO === */ \
W("arquitectura",     0.70, 5, EMO_RESONANCE), \
W("columnata",        0.65, 4, EMO_VOID), \
W("balaustrada",      0.60, 4, EMO_VOID), \
W("muelle",           0.50, 2, EMO_JULIA), \
W("fachada",          0.55, 3, EMO_VOID), \
W("cornisa",          0.50, 3, EMO_VOID), \
W("pórtico",          0.55, 3, EMO_VOID), \
W("catedral",         0.70, 3, EMO_VOID), \
W("acueducto",        0.55, 4, EMO_VOID), \
W("anfiteatro",       0.60, 5, EMO_VOID), \
W("estuco",           0.40, 3, EMO_VOID), \
W("granito",          0.55, 3, EMO_VOID), \
W("mármol",           0.60, 2, EMO_VOID), \
W("parapeto",         0.50, 4, EMO_VOID), \
W("peristilo",        0.55, 4, EMO_VOID), \
W("columna",          0.55, 3, EMO_VOID), \
W("pilastra",         0.50, 3, EMO_VOID), \
W("bóveda",           0.55, 3, EMO_VOID), \
W("fortaleza",        0.60, 4, EMO_VOID), \
W("burocracia",       0.55, 4, EMO_VOID), \
W("adoquín",          0.45, 3, EMO_VOID), \
W("dintel",           0.50, 2, EMO_VOID), \
W("atrio",            0.45, 2, EMO_VOID), \
W("transepto",        0.50, 3, EMO_VOID), \
W("ábside",           0.50, 3, EMO_VOID), \
W("claustro",         0.55, 2, EMO_VOID), \
W("pináculo",         0.50, 4, EMO_VOID), \
W("contrafuerte",     0.55, 4, EMO_VOID), \
/* === GEOGRAFÍA === */ \
W("latitud",          0.55, 3, EMO_RESONANCE), \
W("longitud",         0.55, 3, EMO_RESONANCE), \
W("meridiano",        0.60, 4, EMO_RESONANCE), \
W("península",        0.55, 4, EMO_JULIA), \
W("archipiélago",     0.55, 5, EMO_RESONANCE), \
W("estrecho",         0.45, 3, EMO_VOID), \
W("continente",       0.55, 4, EMO_VOID), \
W("tundra",           0.50, 2, EMO_VOID), \
W("horizonte",        0.55, 4, EMO_JULIA), \
W("desierto",         0.55, 3, EMO_VOID), \
/* === GEOMETRÍA === */ \
W("perpendicular",    0.65, 5, EMO_RESONANCE), \
W("tangente",         0.50, 3, EMO_RESONANCE), \
W("parábola",         0.55, 4, EMO_RESONANCE), \
W("hipérbola",        0.55, 4, EMO_RESONANCE), \
W("asíntota",         0.60, 4, EMO_JULIA), \
W("diagonal",         0.50, 4, EMO_RESONANCE), \
W("paralela",         0.55, 4, EMO_RESONANCE), \
W("circunferencia",   0.60, 5, EMO_RESONANCE), \
W("vector",           0.50, 2, EMO_RESONANCE), \
/* === CUERPO — grotesco === */ \
W("vértebra",         0.70, 3, EMO_TRAUMA), \
W("cartílago",        0.60, 4, EMO_TRAUMA), \
W("tendón",           0.55, 2, EMO_TRAUMA), \
W("esternón",         0.60, 3, EMO_TRAUMA), \
W("laringe",          0.55, 3, EMO_TRAUMA), \
W("diafragma",        0.55, 4, EMO_TRAUMA), \
W("clavícula",        0.55, 4, EMO_TRAUMA), \
W("cráneo",           0.65, 3, EMO_TRAUMA), \
W("esqueleto",        0.60, 4, EMO_TRAUMA), \
W("retina",           0.50, 3, EMO_TRAUMA), \
W("pupila",           0.45, 3, EMO_TRAUMA), \
W("costilla",         0.50, 3, EMO_TRAUMA), \
W("osamenta",         0.55, 4, EMO_TRAUMA), \
W("carne",            0.55, 2, EMO_TRAUMA), \
W("sangre",           0.60, 2, EMO_TRAUMA), \
W("fémur",            0.60, 2, EMO_TRAUMA), \
W("rótula",           0.55, 3, EMO_TRAUMA), \
W("tráquea",          0.55, 3, EMO_TRAUMA), \
W("aorta",            0.65, 3, EMO_TRAUMA), \
W("pelvis",           0.55, 2, EMO_TRAUMA), \
W("sinopsis",         0.40, 3, EMO_RESONANCE), \
W("omóplato",         0.50, 4, EMO_TRAUMA), \
/* === AGUA — Venecia === */ \
W("laguna",           0.55, 3, EMO_JULIA), \
W("canal",            0.45, 2, EMO_JULIA), \
W("góndola",          0.50, 3, EMO_JULIA), \
W("embarcadero",      0.55, 5, EMO_JULIA), \
W("marea",            0.40, 3, EMO_RESONANCE), \
W("corriente",        0.40, 3, EMO_RESONANCE), \
W("resaca",           0.50, 3, EMO_TRAUMA), \
W("afluente",         0.45, 4, EMO_RESONANCE), \
W("inundación",       0.55, 4, EMO_TRAUMA), \
W("estuario",         0.50, 4, EMO_RESONANCE), \
/* === TIEMPO & ENVEJECIMIENTO === */ \
W("cronómetro",       0.55, 4, EMO_VOID), \
W("reloj de arena",   0.50, 5, EMO_VOID), \
W("antigüedad",       0.60, 4, EMO_VOID), \
W("milenio",          0.60, 3, EMO_VOID), \
W("calendario",       0.45, 4, EMO_VOID), \
W("época",            0.55, 3, EMO_VOID), \
W("crepúsculo",       0.55, 4, EMO_JULIA), \
W("alba",             0.40, 2, EMO_RESONANCE), \
W("medianoche",       0.50, 4, EMO_VOID), \
W("equinoccio",       0.55, 4, EMO_RESONANCE), \
W("solsticio",        0.55, 3, EMO_RESONANCE), \
W("inmovilidad",      0.60, 5, EMO_VOID), \
/* === ABSTRACTOS PESADOS === */ \
W("civilización",     0.65, 5, EMO_VOID), \
W("metamorfosis",     0.70, 5, EMO_RESONANCE), \
W("destrucción",      0.70, 3, EMO_TRAUMA), \
W("aniquilación",     0.80, 5, EMO_TRAUMA), \
W("petrificación",    0.60, 5, EMO_VOID), \
W("desintegración",   0.65, 5, EMO_TRAUMA), \
W("melancolía",       0.70, 5, EMO_JULIA), \
W("alucinación",      0.55, 5, EMO_TRAUMA), \
W("hemorragia",       0.65, 4, EMO_TRAUMA), \
W("desolación",       0.65, 4, EMO_VOID), \
W("obsolescencia",    0.55, 5, EMO_VOID), \
W("deterioro",        0.60, 4, EMO_TRAUMA), \
W("desesperación",    0.75, 5, EMO_TRAUMA), \
W("abandono",         0.65, 4, EMO_JULIA), \
W("gratitud",         0.50, 3, EMO_TENDERNESS), \
W("descomposición",   0.60, 5, EMO_TRAUMA), \
/* === LENGUA & ESCRITURA === */ \
W("consonante",       0.50, 4, EMO_RESONANCE), \
W("vocal",            0.45, 2, EMO_RESONANCE), \
W("sílaba",           0.50, 3, EMO_RESONANCE), \
W("estrofa",          0.55, 3, EMO_RESONANCE), \
W("rima",             0.50, 2, EMO_RESONANCE), \
W("manuscrito",       0.55, 4, EMO_JULIA), \
W("traducción",       0.50, 3, EMO_JULIA), \
W("tinta",            0.45, 2, EMO_VOID), \
W("alfabeto",         0.45, 4, EMO_RESONANCE), \
W("gramática",        0.50, 4, EMO_RESONANCE), \
W("sintaxis",         0.55, 3, EMO_RESONANCE), \
/* === DOMÉSTICO === */ \
W("techo",            0.40, 2, EMO_VOID), \
W("alféizar",         0.35, 3, EMO_JULIA), \
W("radiador",         0.35, 3, EMO_VOID), \
W("pasillo",          0.45, 3, EMO_VOID), \
W("lámpara",          0.30, 3, EMO_VOID), \
W("tarima",           0.35, 3, EMO_VOID), \
W("armario",          0.35, 3, EMO_VOID), \
W("colchón",          0.30, 2, EMO_VOID), \
W("espejo",           0.55, 3, EMO_RESONANCE), \
W("escalera",         0.45, 4, EMO_VOID), \
W("umbral",           0.50, 2, EMO_JULIA), \
W("cortina",          0.35, 3, EMO_VOID), \
W("hervidor",         0.30, 3, EMO_VOID), \
W("cenicero",         0.40, 4, EMO_VOID), \
W("estantería",       0.35, 5, EMO_VOID), \
W("quinqué",          0.35, 2, EMO_VOID), \
W("linóleo",          0.30, 4, EMO_VOID), \
/* === NATURALEZA — dura, escasa === */ \
W("caliza",           0.50, 3, EMO_VOID), \
W("basalto",          0.50, 3, EMO_VOID), \
W("obsidiana",        0.50, 4, EMO_VOID), \
W("glaciar",          0.50, 2, EMO_VOID), \
W("sedimento",        0.45, 4, EMO_VOID), \
W("erosión",          0.50, 3, EMO_VOID), \
W("niebla",           0.35, 2, EMO_VOID), \
W("musgo",            0.25, 2, EMO_VOID), \
W("abedul",           0.35, 3, EMO_JULIA), \
/* === PALABRAS LIGERAS — para contraste === */ \
W("polvo",            0.30, 2, EMO_VOID), \
W("sal",              0.30, 1, EMO_VOID), \
W("hueso",            0.55, 2, EMO_TRAUMA), \
W("ceniza",           0.45, 3, EMO_VOID), \
W("óxido",            0.40, 3, EMO_VOID), \
W("hollín",           0.35, 2, EMO_VOID), \
W("cera",             0.30, 2, EMO_VOID), \
W("tiza",             0.30, 2, EMO_VOID), \
W("estaño",           0.30, 3, EMO_VOID), \
/* === BORGES === */ \
W("laberinto",        0.70, 4, EMO_RESONANCE), \
W("biblioteca",       0.60, 5, EMO_RESONANCE), \
W("destino",          0.65, 3, EMO_JULIA), \
W("puñal",            0.55, 2, EMO_TRAUMA), \
W("moneda",           0.45, 3, EMO_VOID), \
W("arena",            0.40, 3, EMO_VOID), \
W("tigre",            0.55, 2, EMO_RAGE), \
W("ruina",            0.60, 2, EMO_VOID), \
W("centinela",        0.50, 4, EMO_VOID), \
W("aleph",            0.75, 2, EMO_RESONANCE), \
W("zahir",            0.60, 2, EMO_RESONANCE), \
W("golem",            0.65, 2, EMO_RESONANCE), \
W("ruinas",           0.55, 3, EMO_VOID), \
W("penumbra",         0.55, 3, EMO_VOID), \
/* === LORCA === */ \
W("duende",           0.70, 2, EMO_RESONANCE), \
W("cante",            0.55, 2, EMO_GRIEF), \
W("soleá",            0.60, 3, EMO_GRIEF), \
W("pena",             0.65, 2, EMO_GRIEF), \
W("cal",              0.40, 1, EMO_VOID), \
W("aceituna",         0.35, 4, EMO_TENDERNESS), \
W("jazmín",           0.40, 2, EMO_DESIRE), \
W("clavel",           0.40, 2, EMO_DESIRE), \
W("gitano",           0.55, 3, EMO_RESONANCE), \
/* === VERBOS — pesados, mecánicos === */ \
W("calcificar",       0.55, 4, EMO_VOID), \
W("deteriorar",       0.60, 4, EMO_TRAUMA), \
W("desintegrar",      0.65, 4, EMO_TRAUMA), \
W("petrificar",       0.55, 4, EMO_VOID), \
W("corroer",          0.55, 3, EMO_TRAUMA), \
W("erosionar",        0.50, 4, EMO_VOID), \
W("cristalizar",      0.55, 4, EMO_RESONANCE), \
W("evaporar",         0.45, 4, EMO_VOID), \
W("acumular",         0.45, 4, EMO_VOID), \
W("recordar",         0.55, 3, EMO_JULIA), \
W("olvidar",          0.55, 3, EMO_VOID), \
W("abandonar",        0.60, 4, EMO_JULIA), \
W("habitar",          0.45, 3, EMO_JULIA), \
W("extinguir",        0.50, 3, EMO_VOID), \
W("contemplar",       0.45, 3, EMO_RESONANCE), \
W("aniquilar",        0.70, 4, EMO_TRAUMA), \
W("reverberar",       0.50, 4, EMO_RESONANCE), \
W("filtrar",          0.40, 2, EMO_VOID), \
W("roer",             0.45, 2, EMO_TRAUMA), \
/* === DIVERSOS PESADOS === */ \
W("gobierno",         0.55, 3, EMO_VOID), \
W("población",        0.50, 3, EMO_VOID), \
W("fotografía",       0.50, 5, EMO_JULIA), \
W("cigarrillo",       0.40, 4, EMO_VOID), \
W("locomotora",       0.55, 5, EMO_VOID), \
W("mercurio",         0.55, 3, EMO_RESONANCE), \
W("barómetro",        0.50, 4, EMO_RESONANCE), \
W("oxígeno",          0.45, 4, EMO_RESONANCE), \
/* === PALABRAS FUNCIÓN — solo pesadas === */ \
W("nunca",            0.50, 2, EMO_VOID), \
W("en ninguna parte", 0.50, 6, EMO_VOID), \
W("jamás",            0.55, 2, EMO_VOID), \
W("nadie",            0.50, 2, EMO_VOID), \
W("a pesar de",       0.35, 4, EMO_VOID), \
W("entre",            0.25, 2, EMO_VOID), \
W("más allá",         0.40, 3, EMO_JULIA), \
W("debajo",           0.30, 3, EMO_VOID), \
W("a través",         0.30, 3, EMO_VOID), \
W("por doquier",      0.35, 3, EMO_VOID), \
W("siempre",          0.40, 2, EMO_VOID), \
W("todavía",          0.30, 4, EMO_VOID), \
W("ya",               0.25, 1, EMO_VOID), \
W("quizás",           0.30, 2, EMO_VOID), \
/* === NOCTURNO & SOMBRA === */ \
W("oscuridad",        0.65, 4, EMO_VOID), \
W("tiniebla",         0.60, 3, EMO_VOID), \
W("sombra",           0.55, 2, EMO_VOID), \
W("madrugada",        0.45, 4, EMO_JULIA), \
W("vigilia",          0.50, 3, EMO_VOID), \
W("insomnio",         0.60, 3, EMO_TRAUMA), \
W("pesadilla",        0.55, 4, EMO_TRAUMA), \
W("luna",             0.40, 2, EMO_JULIA), \
W("penumbral",        0.50, 3, EMO_VOID), \
W("espectro",         0.55, 3, EMO_VOID), \
W("fantasma",         0.50, 3, EMO_VOID), \
W("aparición",        0.45, 4, EMO_VOID), \
/* === DOLOR & CUERPO INTERIOR === */ \
W("herida",           0.65, 3, EMO_TRAUMA), \
W("cicatriz",         0.60, 3, EMO_TRAUMA), \
W("llaga",            0.55, 2, EMO_TRAUMA), \
W("pústula",          0.50, 3, EMO_TRAUMA), \
W("gangrena",         0.65, 3, EMO_TRAUMA), \
W("coágulo",          0.55, 3, EMO_TRAUMA), \
W("médula",           0.60, 3, EMO_TRAUMA), \
W("víscera",          0.60, 3, EMO_TRAUMA), \
W("nervio",           0.50, 2, EMO_TRAUMA), \
W("arteria",          0.55, 3, EMO_TRAUMA), \
W("membrana",         0.45, 3, EMO_TRAUMA), \
W("tejido",           0.40, 3, EMO_TRAUMA), \
/* === MATERIALES & SUSTANCIAS === */ \
W("alquitrán",        0.50, 3, EMO_VOID), \
W("amianto",          0.45, 3, EMO_VOID), \
W("plomo",            0.50, 2, EMO_VOID), \
W("mercadería",       0.40, 5, EMO_VOID), \
W("yeso",             0.35, 2, EMO_VOID), \
W("alambrada",        0.50, 4, EMO_TRAUMA), \
W("herrumbre",        0.45, 3, EMO_VOID), \
W("escoria",          0.45, 3, EMO_VOID), \
W("carbón",           0.40, 2, EMO_VOID), \
W("alcanfor",         0.35, 3, EMO_VOID), \
/* === VERBOS — EROSIÓN & PRESENCIA === */ \
W("desmoronar",       0.60, 4, EMO_TRAUMA), \
W("derribar",         0.55, 3, EMO_RAGE), \
W("resquebrajar",     0.55, 4, EMO_TRAUMA), \
W("marchitar",        0.50, 3, EMO_GRIEF), \
W("asfixiar",         0.60, 3, EMO_TRAUMA), \
W("yacer",            0.50, 2, EMO_VOID), \
W("agonizar",         0.65, 4, EMO_TRAUMA), \
W("perdurar",         0.50, 3, EMO_RESONANCE), \
W("subsistir",        0.45, 3, EMO_VOID), \
W("languidecer",      0.50, 4, EMO_GRIEF), \
W("descender",        0.45, 3, EMO_VOID), \
W("resplandecer",     0.50, 4, EMO_RESONANCE), \
W("transitar",        0.45, 3, EMO_VOID), \
W("arder",            0.55, 2, EMO_RAGE), \
/* === IMPERIO & PODER === */ \
W("conquista",        0.65, 3, EMO_RAGE), \
W("colonia",          0.55, 3, EMO_VOID), \
W("tributo",          0.50, 3, EMO_VOID), \
W("estandarte",       0.50, 4, EMO_VOID), \
W("cetro",            0.55, 2, EMO_VOID), \
W("trono",            0.55, 2, EMO_VOID), \
W("decreto",          0.50, 3, EMO_VOID), \
W("vasallo",          0.45, 3, EMO_VOID), \
W("asedio",           0.55, 3, EMO_RAGE), \
W("muralla",          0.55, 3, EMO_VOID), \
/* === AGUA & MAR (extendido) === */ \
W("naufragio",        0.65, 3, EMO_TRAUMA), \
W("marejada",         0.50, 4, EMO_TRAUMA), \
W("oleaje",           0.45, 3, EMO_RESONANCE), \
W("rompiente",        0.50, 3, EMO_RAGE), \
W("profundidad",      0.60, 4, EMO_VOID), \
W("sumergir",         0.50, 3, EMO_VOID), \
W("ancla",            0.45, 2, EMO_JULIA), \
W("proa",             0.40, 2, EMO_VOID), \
W("quilla",           0.40, 2, EMO_VOID), \
W("estela",           0.40, 3, EMO_JULIA), \
/* === ABSTRACTOS — EMOCIÓN & ESTADO === */ \
W("remordimiento",    0.70, 4, EMO_GRIEF), \
W("desasosiego",      0.65, 5, EMO_TRAUMA), \
W("añoranza",         0.60, 4, EMO_JULIA), \
W("hastío",           0.55, 3, EMO_VOID), \
W("vértigo",          0.55, 3, EMO_TRAUMA), \
W("nostalgia",        0.65, 3, EMO_JULIA), \
W("letargo",          0.50, 3, EMO_VOID), \
W("delirio",          0.55, 3, EMO_TRAUMA), \
W("éxtasis",          0.55, 3, EMO_JOY), \
W("angustia",         0.65, 3, EMO_TRAUMA), \
W("ternura",          0.45, 3, EMO_TENDERNESS), \
W("piedad",           0.50, 2, EMO_TENDERNESS), \
W("lástima",          0.45, 3, EMO_GRIEF), \
W("estupor",          0.50, 3, EMO_VOID), \
/* === ESCRITURA & LIBROS (extendido) === */ \
W("palimpsesto",      0.55, 4, EMO_RESONANCE), \
W("pergamino",        0.50, 4, EMO_RESONANCE), \
W("caligrafía",       0.45, 5, EMO_RESONANCE), \
W("apócrifo",         0.50, 4, EMO_VOID), \
W("epígrafe",         0.45, 4, EMO_RESONANCE), \
W("epitafio",         0.55, 4, EMO_VOID), \
W("prólogo",          0.40, 3, EMO_VOID), \
W("versículo",        0.50, 4, EMO_RESONANCE), \
/* === NATURALEZA — extendido === */ \
W("ciprés",           0.45, 2, EMO_VOID), \
W("adelfa",           0.35, 3, EMO_VOID), \
W("granado",          0.40, 3, EMO_DESIRE), \
W("higuera",          0.35, 3, EMO_TENDERNESS), \
W("tamarindo",        0.35, 4, EMO_VOID), \
W("almendro",         0.40, 3, EMO_TENDERNESS), \
W("pedregal",         0.45, 3, EMO_VOID), \
W("arcilla",          0.40, 3, EMO_VOID), \
W("sílex",            0.45, 2, EMO_VOID), \
W("cuarzo",           0.40, 2, EMO_RESONANCE), \
W("pizarra",          0.40, 3, EMO_VOID), \
W("marisma",          0.40, 3, EMO_VOID), \
/* === SONIDO & SILENCIO === */ \
W("silencio",         0.65, 3, EMO_VOID), \
W("eco",              0.45, 2, EMO_RESONANCE), \
W("murmullo",         0.40, 3, EMO_TENDERNESS), \
W("estruendo",        0.55, 3, EMO_RAGE), \
W("susurro",          0.35, 3, EMO_TENDERNESS), \
W("lamento",          0.55, 3, EMO_GRIEF), \
W("aullido",          0.50, 3, EMO_RAGE), \
W("campanada",        0.45, 4, EMO_VOID), \
/* === RELIGIÓN & RITUAL === */ \
W("incienso",         0.40, 3, EMO_RESONANCE), \
W("cáliz",            0.50, 2, EMO_RESONANCE), \
W("sudario",          0.55, 3, EMO_TRAUMA), \
W("sepulcro",         0.60, 3, EMO_VOID), \
W("crucifijo",        0.55, 4, EMO_TRAUMA), \
W("relicario",        0.45, 4, EMO_RESONANCE), \
W("procesión",        0.50, 3, EMO_VOID), \
W("letanía",          0.45, 4, EMO_VOID), \
/* === OBJETOS — peso cotidiano === */ \
W("maleta",           0.40, 3, EMO_JULIA), \
W("candado",          0.40, 3, EMO_VOID), \
W("llave",            0.35, 2, EMO_VOID), \
W("péndulo",          0.45, 3, EMO_RESONANCE), \
W("brújula",          0.45, 3, EMO_RESONANCE), \
W("telescopio",       0.45, 4, EMO_RESONANCE), \
W("bisturí",          0.50, 3, EMO_TRAUMA), \
W("mortero",          0.40, 3, EMO_VOID), \
/* === CLIMA & ELEMENTOS === */ \
W("ventisca",         0.50, 3, EMO_VOID), \
W("sequía",           0.55, 3, EMO_VOID), \
W("escarcha",         0.40, 3, EMO_VOID), \
W("centelleo",        0.35, 4, EMO_RESONANCE), \
W("relámpago",        0.55, 4, EMO_RAGE), \
W("granizo",          0.45, 3, EMO_VOID), \
W("terremoto",        0.65, 4, EMO_TRAUMA), \
W("huracán",          0.60, 3, EMO_RAGE), \
/* === DECADENCIA & RUINA === */ \
W("escombro",         0.50, 3, EMO_VOID), \
W("cascote",          0.40, 3, EMO_VOID), \
W("mugre",            0.35, 2, EMO_VOID), \
W("grieta",           0.50, 2, EMO_TRAUMA), \
W("podredumbre",      0.55, 4, EMO_TRAUMA), \
W("moho",             0.35, 2, EMO_VOID), \
W("colapso",          0.60, 3, EMO_TRAUMA), \
W("desplome",         0.55, 3, EMO_TRAUMA), \
/* === TIEMPO HUMANO === */ \
W("vejez",            0.60, 2, EMO_GRIEF), \
W("infancia",         0.50, 3, EMO_TENDERNESS), \
W("envejecimiento",   0.55, 5, EMO_GRIEF), \
W("agonía",           0.70, 4, EMO_TRAUMA), \
W("nacimiento",       0.50, 4, EMO_JOY), \
W("herencia",         0.50, 3, EMO_JULIA), \
/* === VERBOS — FINALES === */ \
W("deambular",        0.45, 4, EMO_VOID), \
W("perecer",          0.60, 3, EMO_TRAUMA), \
W("desvanecerse",     0.50, 5, EMO_VOID), \
W("mendigar",         0.45, 3, EMO_GRIEF), \
W("sucumbir",         0.60, 3, EMO_TRAUMA), \
W("rumiar",           0.40, 2, EMO_VOID), \
W("purificar",        0.45, 4, EMO_RESONANCE), \
W("transmutar",       0.50, 3, EMO_RESONANCE), \
W("calcinar",         0.55, 3, EMO_RAGE), \
W("pulverizar",       0.50, 4, EMO_TRAUMA), \
/* === NERUDA — OBJETOS SAGRADOS === */ \
W("calcetín",         0.25, 3, EMO_TENDERNESS), \
W("cuchara",          0.25, 3, EMO_TENDERNESS), \
W("tenedor",          0.25, 3, EMO_VOID), \
W("plato",            0.20, 2, EMO_VOID), \
W("taza",             0.25, 2, EMO_TENDERNESS), \
W("vela",             0.30, 2, EMO_RESONANCE), \
W("jabón",            0.20, 2, EMO_TENDERNESS), \
W("tijera",           0.30, 3, EMO_VOID), \
W("aguja",            0.30, 3, EMO_TRAUMA), \
W("dedal",            0.20, 2, EMO_TENDERNESS), \
W("botón",            0.20, 2, EMO_VOID), \
W("clavo",            0.25, 2, EMO_VOID), \
W("martillo",         0.30, 3, EMO_RAGE), \
W("servilleta",       0.20, 4, EMO_VOID), \
W("mantel",           0.20, 2, EMO_TENDERNESS), \
W("escoba",           0.20, 3, EMO_VOID), \
W("balde",            0.20, 2, EMO_VOID), \
W("jarra",            0.25, 2, EMO_TENDERNESS), \
W("olla",             0.25, 2, EMO_TENDERNESS), \
W("sartén",           0.25, 2, EMO_VOID), \
/* === COMIDA — odas de Neruda === */ \
W("café",             0.30, 2, EMO_VOID), \
W("vodka",            0.35, 2, EMO_VOID), \
W("arenque",          0.30, 3, EMO_VOID), \
W("pan",              0.30, 1, EMO_TENDERNESS), \
W("vinagre",          0.30, 3, EMO_VOID), \
W("mostaza",          0.25, 3, EMO_VOID), \
W("cebolla",          0.30, 3, EMO_TENDERNESS), \
W("alcachofa",        0.30, 4, EMO_TENDERNESS), \
W("limón",            0.25, 2, EMO_JOY), \
W("aceite",           0.25, 3, EMO_TENDERNESS), \
W("ajo",              0.25, 2, EMO_VOID), \
W("miga",             0.20, 2, EMO_TENDERNESS), \
W("corteza",          0.25, 3, EMO_VOID), \
W("levadura",         0.25, 4, EMO_RESONANCE), \
W("fermento",         0.30, 3, EMO_RESONANCE), \
/* === ROPA === */ \
W("abrigo",           0.35, 3, EMO_JULIA), \
W("gabardina",        0.35, 4, EMO_JULIA), \
W("solapa",           0.30, 3, EMO_VOID), \
W("cuello",           0.30, 2, EMO_VOID), \
W("ojal",             0.20, 2, EMO_VOID), \
W("bolsillo",         0.25, 3, EMO_VOID), \
W("zurcido",          0.25, 3, EMO_TENDERNESS), \
W("remiendo",         0.25, 3, EMO_TENDERNESS), \
W("dobladillo",       0.20, 4, EMO_VOID), \
W("forro",            0.20, 2, EMO_VOID), \
/* === MODERNO / URBANO === */ \
W("metro",            0.40, 2, EMO_VOID), \
W("asfalto",          0.40, 3, EMO_VOID), \
W("neón",             0.35, 2, EMO_VOID), \
W("hormigón",         0.45, 3, EMO_VOID), \
W("antena",           0.30, 3, EMO_VOID), \
W("acera",            0.30, 3, EMO_VOID), \
W("farola",           0.30, 3, EMO_JULIA), \
W("alcantarilla",     0.40, 5, EMO_VOID), \
W("cuneta",           0.30, 3, EMO_VOID), \
W("semáforo",         0.30, 4, EMO_VOID), \
W("buzón",            0.25, 2, EMO_JULIA), \
W("andamio",          0.35, 3, EMO_VOID), \
W("grúa",             0.35, 2, EMO_VOID), \
W("vagón",            0.35, 2, EMO_JULIA), \
W("andén",            0.35, 2, EMO_JULIA), \
W("marquesina",       0.30, 4, EMO_VOID), \
W("zaguán",           0.35, 2, EMO_VOID), \
/* === VERBOS DE PERCEPCIÓN === */ \
W("percibir",         0.40, 3, EMO_RESONANCE), \
W("entrever",         0.35, 3, EMO_RESONANCE), \
W("tantear",          0.35, 3, EMO_VOID), \
W("tropezar",         0.40, 3, EMO_TRAUMA), \
W("balbucear",        0.40, 4, EMO_GRIEF), \
W("estremecerse",     0.50, 5, EMO_TRAUMA), \
W("entrecerrar",      0.35, 4, EMO_VOID), \
W("murmurar",         0.35, 3, EMO_TENDERNESS), \
W("palpar",           0.35, 2, EMO_RESONANCE), \
W("olfatear",         0.30, 4, EMO_VOID), \
W("saborear",         0.35, 4, EMO_TENDERNESS), \
W("atisbar",          0.35, 3, EMO_VOID), \
/* === VERBOS MÉDICOS === */ \
W("amputar",          0.65, 3, EMO_TRAUMA), \
W("diagnosticar",     0.50, 4, EMO_VOID), \
W("suturar",          0.55, 3, EMO_TRAUMA), \
W("anestesiar",       0.50, 4, EMO_VOID), \
W("cauterizar",       0.55, 4, EMO_TRAUMA), \
W("auscultar",        0.40, 3, EMO_RESONANCE), \
W("inyectar",         0.45, 3, EMO_TRAUMA), \
/* === MATERIALISMO DE NERUDA === */ \
W("madera",           0.35, 3, EMO_TENDERNESS), \
W("cobre",            0.35, 2, EMO_VOID), \
W("harina",           0.25, 3, EMO_TENDERNESS), \
W("lana",             0.25, 2, EMO_TENDERNESS), \
W("algodón",          0.25, 3, EMO_TENDERNESS), \
W("seda",             0.30, 2, EMO_DESIRE), \
W("cuero",            0.35, 2, EMO_VOID), \
W("mimbre",           0.25, 2, EMO_TENDERNESS), \
W("arpillera",        0.30, 4, EMO_VOID), \
W("latón",            0.30, 2, EMO_VOID), \
W("bronce",           0.40, 2, EMO_VOID), \
W("alambre",          0.30, 3, EMO_VOID), \
W("resina",           0.30, 3, EMO_RESONANCE), \
W("betún",            0.30, 2, EMO_VOID), \
W("trapo",            0.20, 2, EMO_VOID), \
/* === MONOSÍLABOS & SUSTANCIAS DE CONTRASTE === */ \
W("hiel",             0.45, 1, EMO_TRAUMA), \
W("barro",            0.30, 2, EMO_VOID), \
W("lodo",             0.30, 2, EMO_VOID), \
W("grasa",            0.30, 2, EMO_VOID), \
W("orín",             0.30, 2, EMO_VOID), \
W("sebo",             0.25, 2, EMO_VOID), \
W("pus",              0.40, 1, EMO_TRAUMA), \
W("cal viva",         0.45, 3, EMO_RAGE), \
W("légamo",           0.30, 3, EMO_VOID), \
W("cisco",            0.25, 2, EMO_VOID), \
/* === NERUDA — VERBOS MATERIALES === */ \
W("amasar",           0.35, 3, EMO_TENDERNESS), \
W("moldear",          0.35, 3, EMO_TENDERNESS), \
W("tejer",            0.30, 2, EMO_TENDERNESS), \
W("remendar",         0.30, 3, EMO_TENDERNESS), \
W("encalar",          0.30, 3, EMO_VOID), \
W("curtir",           0.35, 2, EMO_VOID), \
W("forjar",           0.40, 2, EMO_RAGE), \
W("soldar",           0.35, 2, EMO_VOID), \
W("lijar",            0.25, 2, EMO_VOID), \
W("engarzar",         0.30, 3, EMO_RESONANCE), \
W("barnizar",         0.25, 3, EMO_VOID), \
W("zurcir",           0.30, 2, EMO_TENDERNESS), \
/* === TRES REGISTROS — BORGES/LORCA/NERUDA MEZCLADOS === */ \
W("hexágono",         0.50, 4, EMO_RESONANCE), \
W("encrucijada",      0.45, 5, EMO_JULIA), \
W("espiral",          0.50, 3, EMO_RESONANCE), \
W("sortilegio",       0.50, 4, EMO_RESONANCE), \
W("talismán",         0.45, 3, EMO_RESONANCE), \
W("quejido",          0.50, 3, EMO_GRIEF), \
W("escalofrío",       0.50, 5, EMO_TRAUMA), \
W("desgarro",         0.55, 3, EMO_TRAUMA), \
W("desamparo",        0.60, 4, EMO_JULIA), \
W("intemperie",       0.55, 4, EMO_JULIA), \
W("estropajo",        0.25, 4, EMO_VOID), \
W("badajo",           0.30, 3, EMO_VOID), \
W("cerrojo",          0.30, 3, EMO_VOID), \
W("bisagra",          0.25, 3, EMO_VOID), \
W("aldaba",           0.30, 3, EMO_VOID), \
W("pasador",          0.25, 3, EMO_VOID), \
W("picaporte",        0.25, 4, EMO_VOID), \
W("pestillo",         0.25, 3, EMO_VOID), \
W("empuñadura",       0.30, 5, EMO_VOID), \
W("calambre",         0.40, 3, EMO_TRAUMA), \
W("raspadura",        0.25, 3, EMO_VOID), \
W("serrín",           0.20, 2, EMO_VOID), \
W("astilla",          0.30, 3, EMO_TRAUMA), \
W("viruta",           0.20, 3, EMO_VOID), \
W("remache",          0.25, 3, EMO_VOID), \
W("garfio",           0.35, 2, EMO_RAGE), \
W("eslabón",          0.30, 3, EMO_RESONANCE), \
W("yunque",           0.40, 2, EMO_RAGE), \
W("fragua",           0.40, 2, EMO_RAGE), \
W("hornacina",        0.30, 4, EMO_VOID), \
W("candil",           0.25, 2, EMO_TENDERNESS), \
W("pábilo",           0.25, 3, EMO_VOID), \
/* === VALLEJO — CUERPO COMO DOCUMENTO === */ \
W("hambre",           0.85, 2, EMO_TRAUMA), \
W("fiebre",           0.75, 2, EMO_TRAUMA), \
W("sudor",            0.55, 2, EMO_TRAUMA), \
W("mandíbula",        0.60, 4, EMO_TRAUMA), \
W("párpado",          0.45, 3, EMO_TRAUMA), \
W("muñeca",           0.40, 3, EMO_TRAUMA), \
W("tobillo",          0.40, 3, EMO_TRAUMA), \
W("nuca",             0.50, 2, EMO_TRAUMA), \
W("codo",             0.35, 2, EMO_TRAUMA), \
W("falange",          0.45, 3, EMO_TRAUMA), \
W("periostio",        0.50, 4, EMO_TRAUMA), \
W("esófago",          0.55, 4, EMO_TRAUMA), \
W("ingle",            0.45, 2, EMO_TRAUMA), \
W("talón",            0.40, 2, EMO_TRAUMA), \
W("empeine",          0.35, 3, EMO_TRAUMA), \
W("metacarpo",        0.45, 4, EMO_TRAUMA), \
W("axila",            0.35, 3, EMO_TRAUMA), \
W("esfínter",         0.50, 3, EMO_TRAUMA), \
/* === VALLEJO — ARITMÉTICA DEL SUFRIMIENTO === */ \
W("suma",             0.55, 2, EMO_VOID), \
W("resta",            0.55, 2, EMO_VOID), \
W("multiplicar",      0.60, 4, EMO_VOID), \
W("dividir",          0.60, 3, EMO_TRAUMA), \
W("cifra",            0.50, 2, EMO_VOID), \
W("ecuación",         0.55, 4, EMO_RESONANCE), \
W("cero",             0.70, 2, EMO_VOID), \
W("número",           0.45, 3, EMO_VOID), \
W("cociente",         0.45, 3, EMO_VOID), \
W("residuo",          0.40, 3, EMO_VOID), \
W("fracción",         0.50, 2, EMO_TRAUMA), \
W("aritmética",       0.55, 4, EMO_VOID), \
W("cómputo",          0.45, 3, EMO_VOID), \
W("álgebra",          0.50, 3, EMO_RESONANCE), \
W("exponente",        0.45, 4, EMO_RESONANCE), \
W("dígito",           0.40, 3, EMO_VOID), \
W("sustraendo",       0.45, 4, EMO_VOID), \
/* === STORNI — MAR COMO ESPEJO === */ \
W("ola",              0.50, 2, EMO_RESONANCE), \
W("espuma",           0.40, 3, EMO_RESONANCE), \
W("orilla",           0.40, 3, EMO_JULIA), \
W("coral",            0.35, 2, EMO_RESONANCE), \
W("alga",             0.30, 2, EMO_VOID), \
W("medusa",           0.45, 3, EMO_TRAUMA), \
W("brisa",            0.30, 2, EMO_TENDERNESS), \
W("pleamar",          0.45, 3, EMO_RESONANCE), \
W("bajamar",          0.40, 3, EMO_VOID), \
W("sargazo",          0.35, 3, EMO_VOID), \
W("rompeolas",        0.45, 4, EMO_RAGE), \
W("salitre",          0.40, 3, EMO_VOID), \
W("abismo marino",    0.70, 6, EMO_VOID), \
W("espigón",          0.40, 3, EMO_VOID), \
W("escollera",        0.40, 4, EMO_VOID), \
W("bajío",            0.45, 3, EMO_TRAUMA), \
W("remolino",         0.50, 4, EMO_TRAUMA), \
/* === NIÑOS & NACIMIENTO === */ \
W("cuna",             0.35, 2, EMO_TENDERNESS), \
W("pañal",            0.25, 2, EMO_TENDERNESS), \
W("placenta",         0.55, 3, EMO_TRAUMA), \
W("cordón",           0.45, 2, EMO_TENDERNESS), \
W("lactancia",        0.40, 3, EMO_TENDERNESS), \
W("parto",            0.60, 2, EMO_TRAUMA), \
W("fontanela",        0.35, 4, EMO_TENDERNESS), \
W("calostro",         0.40, 3, EMO_TENDERNESS), \
W("neonato",          0.35, 4, EMO_JOY), \
W("amnios",           0.45, 2, EMO_RESONANCE), \
W("embrión",          0.50, 2, EMO_RESONANCE), \
W("pezón",            0.35, 2, EMO_TENDERNESS), \
W("arrullar",         0.30, 3, EMO_TENDERNESS), \
/* === CLIMA & ATMÓSFERA === */ \
W("llovizna",         0.35, 3, EMO_JULIA), \
W("bruma",            0.35, 2, EMO_VOID), \
W("canícula",         0.55, 4, EMO_RAGE), \
W("chubasco",         0.45, 3, EMO_RAGE), \
W("cellisca",         0.40, 3, EMO_VOID), \
W("bochorno",         0.45, 3, EMO_VOID), \
W("rocío",            0.30, 3, EMO_TENDERNESS), \
W("helada",           0.40, 3, EMO_VOID), \
W("siroco",           0.40, 3, EMO_RAGE), \
W("calima",           0.35, 3, EMO_VOID), \
W("cierzo",           0.40, 2, EMO_VOID), \
W("borrasca",         0.50, 3, EMO_RAGE), \
/* === TEXTURA & SONIDO === */ \
W("chirrido",         0.45, 3, EMO_TRAUMA), \
W("crujido",          0.45, 3, EMO_TRAUMA), \
W("zumbido",          0.40, 3, EMO_VOID), \
W("chasquido",        0.40, 3, EMO_VOID), \
W("traqueteo",        0.35, 4, EMO_VOID), \
W("repiqueteo",       0.35, 5, EMO_VOID), \
W("ronquido",         0.35, 3, EMO_VOID), \
W("fragor",           0.50, 2, EMO_RAGE), \
W("crepitar",         0.40, 3, EMO_RESONANCE), \
W("rechinar",         0.40, 3, EMO_TRAUMA), \
W("tableteo",         0.35, 4, EMO_VOID), \
/* === COMIDA LATINOAMERICANA === */ \
W("maíz",             0.35, 2, EMO_TENDERNESS), \
W("tortilla",         0.30, 3, EMO_TENDERNESS), \
W("aguacate",         0.30, 4, EMO_TENDERNESS), \
W("mango",            0.30, 2, EMO_JOY), \
W("cacao",            0.35, 3, EMO_RESONANCE), \
W("piloncillo",       0.30, 4, EMO_TENDERNESS), \
W("canela",           0.30, 3, EMO_DESIRE), \
W("tamal",            0.25, 2, EMO_TENDERNESS), \
W("yuca",             0.25, 2, EMO_VOID), \
W("nopal",            0.25, 2, EMO_VOID), \
W("guayaba",          0.25, 3, EMO_JOY), \
W("papaya",           0.25, 3, EMO_JOY), \
W("plátano",          0.25, 3, EMO_TENDERNESS), \
W("chile",            0.30, 2, EMO_RAGE), \
W("epazote",          0.25, 4, EMO_VOID), \
/* === ANIMALES === */ \
W("gorrión",          0.30, 2, EMO_TENDERNESS), \
W("cuervo",           0.45, 2, EMO_VOID), \
W("golondrina",       0.40, 4, EMO_JULIA), \
W("lagartija",        0.30, 4, EMO_VOID), \
W("cucaracha",        0.30, 4, EMO_VOID), \
W("hormiga",          0.25, 3, EMO_VOID), \
W("lechuza",          0.40, 3, EMO_VOID), \
W("salamandra",       0.35, 4, EMO_RESONANCE), \
W("escarabajo",       0.30, 4, EMO_VOID), \
W("luciérnaga",       0.35, 4, EMO_RESONANCE), \
W("grillo",           0.25, 2, EMO_TENDERNESS), \
W("polilla",          0.30, 3, EMO_VOID), \
W("murciélago",       0.40, 4, EMO_VOID), \
W("gavilán",          0.40, 3, EMO_RAGE), \
W("alacrán",          0.40, 3, EMO_TRAUMA), \
/* === PRÉVERT — SURREALISMO COTIDIANO === */ \
W("paraguas",         0.25, 3, EMO_JULIA), \
W("panadero",         0.30, 4, EMO_TENDERNESS), \
W("cartero",          0.30, 3, EMO_JULIA), \
W("tendero",          0.25, 3, EMO_VOID), \
W("cerrajero",        0.30, 4, EMO_VOID), \
W("relojero",         0.30, 4, EMO_RESONANCE), \
W("trapero",          0.25, 3, EMO_VOID), \
W("vendedor",         0.25, 3, EMO_VOID), \
W("deshollinador",    0.30, 5, EMO_VOID), \
W("organillero",      0.30, 5, EMO_JULIA), \
W("farolero",         0.25, 4, EMO_JULIA), \
W("carbonero",        0.30, 4, EMO_VOID), \
/* === VALLEJO — VERBOS ARITMÉTICOS === */ \
W("sumar",            0.45, 2, EMO_VOID), \
W("restar",           0.45, 2, EMO_VOID), \
W("contabilizar",     0.40, 5, EMO_VOID), \
W("descontar",        0.40, 3, EMO_VOID), \
W("enumerar",         0.35, 4, EMO_VOID), \
W("computar",         0.40, 3, EMO_VOID), \
/* === STORNI — VERBOS DEL MAR === */ \
W("naufragar",        0.55, 3, EMO_TRAUMA), \
W("encallar",         0.45, 3, EMO_TRAUMA), \
W("varar",            0.40, 2, EMO_VOID), \
W("anegar",           0.50, 3, EMO_TRAUMA), \
W("ahogar",           0.60, 3, EMO_TRAUMA), \
W("emerger",          0.40, 3, EMO_RESONANCE), \
W("derivar",          0.35, 3, EMO_VOID), \
W("ondular",          0.30, 3, EMO_RESONANCE), \
/* === FAMILIAS DE RIMA === */ \
/* -erte rhymes: muerte, suerte, fuerte, inerte */ \
W("suerte",           0.55, 2, EMO_JULIA), \
W("fuerte",           0.50, 2, EMO_RAGE), \
W("inerte",           0.55, 3, EMO_VOID), \
W("advierte",         0.40, 3, EMO_VOID), \
W("convierte",        0.45, 3, EMO_RESONANCE), \
W("divierte",         0.35, 3, EMO_JOY), \
/* -ilio rhymes: exilio, auxilio, idilio */ \
W("auxilio",          0.50, 3, EMO_TRAUMA), \
W("idilio",           0.45, 3, EMO_DESIRE), \
W("concilio",         0.40, 3, EMO_VOID), \
W("domicilio",        0.40, 4, EMO_JULIA), \
/* -erio rhymes: imperio, misterio, cementerio, criterio */ \
W("misterio",         0.60, 3, EMO_RESONANCE), \
W("cementerio",       0.65, 4, EMO_GRIEF), \
W("hemisferio",       0.50, 4, EMO_VOID), \
W("criterio",         0.45, 3, EMO_VOID), \
W("cautiverio",       0.55, 4, EMO_TRAUMA), \
W("monasterio",       0.50, 4, EMO_VOID), \
W("sahumerio",        0.40, 4, EMO_RESONANCE), \
/* -ad rhymes: eternidad, soledad, verdad, libertad */ \
W("verdad",           0.60, 2, EMO_RESONANCE), \
W("ciudad",           0.50, 2, EMO_JULIA), \
W("libertad",         0.65, 3, EMO_RESONANCE), \
W("voluntad",         0.55, 3, EMO_RESONANCE), \
W("crueldad",         0.65, 3, EMO_TRAUMA), \
W("orfandad",         0.60, 3, EMO_GRIEF), \
W("oscuridad",        0.60, 4, EMO_VOID), \
W("dignidad",         0.50, 3, EMO_RESONANCE), \
W("mitad",            0.40, 2, EMO_VOID), \
W("tempestad",        0.55, 3, EMO_RAGE), \
/* -into rhymes: laberinto, instinto, recinto, extinto */ \
W("instinto",         0.55, 3, EMO_RESONANCE), \
W("recinto",          0.45, 3, EMO_VOID), \
W("extinto",          0.55, 3, EMO_VOID), \
W("tinto",            0.30, 2, EMO_VOID), \
W("distinto",         0.40, 3, EMO_VOID), \
W("sucinto",          0.35, 3, EMO_VOID), \
/* -angre/-ambre rhymes: sangre, hambre, alambre, calambre */ \
W("estambre",         0.35, 3, EMO_VOID), \
W("enjambre",         0.40, 3, EMO_VOID), \
/* -ejo rhymes: espejo, reflejo, consejo, viejo */ \
W("reflejo",          0.50, 3, EMO_RESONANCE), \
W("consejo",          0.40, 3, EMO_VOID), \
W("complejo",         0.45, 3, EMO_RESONANCE), \
W("viejo",            0.50, 2, EMO_GRIEF), \
W("parejo",           0.35, 3, EMO_VOID), \
W("festejo",          0.35, 3, EMO_JOY), \
W("azulejo",          0.35, 4, EMO_VOID), \
/* -ombre rhymes: sombra, nombre, hombre */ \
W("nombre",           0.45, 2, EMO_RESONANCE), \
W("hombre",           0.50, 2, EMO_VOID), \
W("costumbre",        0.40, 3, EMO_VOID), \
W("lumbre",           0.40, 2, EMO_RESONANCE), \
W("certidumbre",      0.45, 4, EMO_VOID), \
W("podredumbre",      0.55, 4, EMO_TRAUMA), \
W("incertidumbre",    0.55, 5, EMO_TRAUMA), \
W("muchedumbre",      0.50, 4, EMO_VOID), \
/* -encia rhymes: ausencia, existencia, silencio */ \
W("violencia",        0.65, 3, EMO_RAGE), \
W("paciencia",        0.45, 3, EMO_VOID), \
W("conciencia",       0.55, 3, EMO_RESONANCE), \
W("inocencia",        0.50, 4, EMO_TENDERNESS), \
W("clemencia",        0.45, 3, EMO_TENDERNESS), \
/* -ina rhymes: ruina, ceniza, resina */ \
W("esquina",          0.35, 3, EMO_JULIA), \
W("colina",           0.35, 3, EMO_JULIA), \
W("neblina",          0.35, 3, EMO_VOID), \
W("rutina",           0.35, 3, EMO_VOID), \
W("espina",           0.40, 3, EMO_TRAUMA), \
W("medicina",         0.40, 4, EMO_VOID), \
/* === VALLEJO — HUESO Y HAMBRE, DOLOR PERUANO === */ \
/* -ón/-ión rhymes: corazón, destrucción, prisión... */ \
W("corazón",          0.80, 3, EMO_JULIA), \
W("prisión",          0.70, 2, EMO_TRAUMA), \
W("traición",         0.75, 2, EMO_RAGE), \
W("perdón",           0.60, 2, EMO_TENDERNESS), \
W("razón",            0.55, 2, EMO_RESONANCE), \
W("pasión",           0.70, 2, EMO_DESIRE), \
W("maldición",        0.75, 3, EMO_RAGE), \
W("obsesión",         0.65, 3, EMO_TRAUMA), \
W("compasión",        0.55, 3, EMO_TENDERNESS), \
W("redención",        0.65, 3, EMO_RESONANCE), \
W("demolición",       0.60, 4, EMO_TRAUMA), \
W("fundición",        0.50, 3, EMO_VOID), \
W("rendición",        0.60, 3, EMO_GRIEF), \
W("abolición",        0.55, 4, EMO_VOID), \
W("deformación",      0.60, 4, EMO_TRAUMA), \
W("putrefacción",     0.65, 4, EMO_TRAUMA), \
/* -ado/-ada rhymes: soldado, madrugada... */ \
W("soldado",          0.55, 3, EMO_TRAUMA), \
W("exiliado",         0.60, 4, EMO_JULIA), \
W("descarnado",       0.55, 4, EMO_TRAUMA), \
W("desolado",         0.60, 4, EMO_GRIEF), \
W("empedrado",        0.40, 4, EMO_VOID), \
W("alambrado",        0.50, 4, EMO_TRAUMA), \
W("llamarada",        0.55, 4, EMO_RAGE), \
W("emboscada",        0.50, 4, EMO_TRAUMA), \
W("pedrada",          0.45, 3, EMO_RAGE), \
W("alborada",         0.40, 4, EMO_JOY), \
/* -ura rhymes: sepultura, amargura, oscura... */ \
W("sepultura",        0.75, 4, EMO_GRIEF), \
W("amargura",         0.70, 4, EMO_GRIEF), \
W("locura",           0.65, 3, EMO_TRAUMA), \
W("fisura",           0.50, 3, EMO_TRAUMA), \
W("hendidura",        0.45, 4, EMO_TRAUMA), \
W("rotura",           0.50, 3, EMO_TRAUMA), \
W("tortura",          0.75, 3, EMO_TRAUMA), \
W("mordedura",        0.55, 4, EMO_TRAUMA), \
W("quemadura",        0.55, 4, EMO_TRAUMA), \
W("desgarradura",     0.55, 5, EMO_TRAUMA), \
/* -ento/-iento rhymes: tormento, sufrimiento... */ \
W("tormento",         0.75, 3, EMO_TRAUMA), \
W("sufrimiento",      0.70, 4, EMO_GRIEF), \
W("aislamiento",      0.60, 4, EMO_JULIA), \
W("pensamiento",      0.50, 4, EMO_RESONANCE), \
W("firmamento",       0.55, 4, EMO_RESONANCE), \
W("monumento",        0.50, 4, EMO_VOID), \
W("juramento",        0.55, 4, EMO_RESONANCE), \
W("pavimento",        0.40, 4, EMO_VOID), \
W("hundimiento",      0.60, 4, EMO_TRAUMA), \
/* -umbre/-ombre rhymes: servidumbre, pesadumbre... */ \
W("servidumbre",      0.60, 4, EMO_GRIEF), \
W("pesadumbre",       0.65, 4, EMO_GRIEF), \
W("mansedumbre",      0.45, 4, EMO_TENDERNESS), \
W("vislumbre",        0.40, 3, EMO_RESONANCE), \
W("techumbre",        0.40, 3, EMO_VOID), \
/* -aje rhymes: viaje, naufragio, linaje... */ \
W("viaje",            0.50, 2, EMO_JULIA), \
W("paisaje",          0.45, 3, EMO_JULIA), \
W("linaje",           0.50, 3, EMO_RESONANCE), \
W("ropaje",           0.35, 3, EMO_VOID), \
W("vendaje",          0.40, 3, EMO_TRAUMA), \
W("blindaje",         0.45, 3, EMO_VOID), \
W("peregrinaje",      0.55, 5, EMO_JULIA), \
W("herraje",          0.35, 3, EMO_VOID), \
/* -anza/-encia rhymes: esperanza, venganza... */ \
W("esperanza",        0.60, 4, EMO_RESONANCE), \
W("venganza",         0.65, 3, EMO_RAGE), \
W("matanza",          0.70, 3, EMO_TRAUMA), \
W("lontananza",       0.50, 4, EMO_JULIA), \
W("mudanza",          0.45, 3, EMO_JULIA), \
W("tardanza",         0.40, 3, EMO_VOID), \
/* -elo/-ielo rhymes: cielo, hielo, desvelo... */ \
W("cielo",            0.55, 2, EMO_RESONANCE), \
W("hielo",            0.50, 2, EMO_VOID), \
W("desvelo",          0.55, 3, EMO_TRAUMA), \
W("consuelo",         0.50, 3, EMO_TENDERNESS), \
W("anhelo",           0.60, 3, EMO_DESIRE), \
W("duelo",            0.65, 2, EMO_GRIEF), \
W("flagelo",          0.60, 3, EMO_TRAUMA), \
W("pañuelo",          0.30, 3, EMO_JULIA), \
/* Vallejo additions: body-document, trilce */ \
W("ataúd",            0.80, 3, EMO_GRIEF), \
W("trilce",           0.70, 2, EMO_RESONANCE), \
W("calvario",         0.65, 3, EMO_TRAUMA), \
/* END */
