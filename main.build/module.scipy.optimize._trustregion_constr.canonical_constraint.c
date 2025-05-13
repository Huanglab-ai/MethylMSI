/* Generated code for Python module 'scipy$optimize$_trustregion_constr$canonical_constraint'
 * created by Nuitka version 2.6.9
 *
 * This code is in part copyright 2025 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_scipy$optimize$_trustregion_constr$canonical_constraint" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_trustregion_constr$canonical_constraint;
PyDictObject *moduledict_scipy$optimize$_trustregion_constr$canonical_constraint;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[175];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[175];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("scipy.optimize._trustregion_constr.canonical_constraint"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 175; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_trustregion_constr$canonical_constraint(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 175; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 3
#if PYTHON_VERSION >= 0x3c0
NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyInterpreterState *interp, PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = interp->dict_state.next_keys_version++;
    dk->dk_version = result;
    return result;
}
#elif PYTHON_VERSION >= 0x3b0
static uint32_t _Nuitka_next_dict_keys_version = 2;

NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = _Nuitka_next_dict_keys_version++;
    dk->dk_version = result;
    return result;
}
#endif
#endif

// Accessors to module variables.
static PyObject *module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$___spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_trustregion_constr$canonical_constraint->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_trustregion_constr$canonical_constraint->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)mod_consts[174]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_trustregion_constr$canonical_constraint->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[174])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[174], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[174])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[174], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)mod_consts[174]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)mod_consts[174]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[174]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_trustregion_constr$canonical_constraint->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_trustregion_constr$canonical_constraint->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)mod_consts[7]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_trustregion_constr$canonical_constraint->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[7])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[7], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[7])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[7], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)mod_consts[7]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)mod_consts[7]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[7]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_sps(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_trustregion_constr$canonical_constraint->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_trustregion_constr$canonical_constraint->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)mod_consts[18]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_trustregion_constr$canonical_constraint->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[18])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[18], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[18])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[18], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)mod_consts[18]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)mod_consts[18]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[18]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_15f7eff0fed32cfbcd0a93ddb0a8c184;
static PyCodeObject *code_objects_4b97ceacdfef528400afa3e04fd29b42;
static PyCodeObject *code_objects_dd9b283af26ef12c73354ee14c0730ad;
static PyCodeObject *code_objects_a98f1722833566f563d5bf3fb03406a5;
static PyCodeObject *code_objects_7caea3adfe566809f344a6038c4d0914;
static PyCodeObject *code_objects_b3872209a615de79ceafc884ba551f67;
static PyCodeObject *code_objects_f9414011e1931761ade5a837b16baef3;
static PyCodeObject *code_objects_a0212a6b9c1a8c86b28b78f57b3ee3cc;
static PyCodeObject *code_objects_46c308d38a8faf5e5564ed40b660593a;
static PyCodeObject *code_objects_303ad94cb2b0620f5b90b03d1d28d94b;
static PyCodeObject *code_objects_1736009d5c1e95464c0aacce5f3d6fbe;
static PyCodeObject *code_objects_f4e08dedf085cf48de95517d00a2ff45;
static PyCodeObject *code_objects_42f3ff34b814bbf924164cccf1eca905;
static PyCodeObject *code_objects_86597c8e1e06e65fd989bb3b78714f15;
static PyCodeObject *code_objects_23eb8ca7abd1b88d7dc4ddfa34d5d3db;
static PyCodeObject *code_objects_c1cef28d0f389bf9e51c9b142c48c8c4;
static PyCodeObject *code_objects_12c68fa3b4ce98b358fab408c4ab2146;
static PyCodeObject *code_objects_f8fdd089dc8b0ea12d50fb391f1c44b8;
static PyCodeObject *code_objects_2548042aaa713fafd78531d1687ad05e;
static PyCodeObject *code_objects_1cc325c709082f52a162449c09124185;
static PyCodeObject *code_objects_a891cccc0d38f665b406f044a2fc3b23;
static PyCodeObject *code_objects_efb7d3ad3e5a3a49533826b106b7c12d;
static PyCodeObject *code_objects_d364ccfe10b805bb22d590b5f4146f05;
static PyCodeObject *code_objects_0140448e44c3aba0ae1868f8351f3df8;
static PyCodeObject *code_objects_33cccdcce2e219d1aa529a9b5d44ab17;
static PyCodeObject *code_objects_baaa8a7860d8bad5c1497bbc9c30d1a9;
static PyCodeObject *code_objects_1d2b483f40795612b19cd1b5358becce;
static PyCodeObject *code_objects_433d384ad16f219b3837f5333736c9be;
static PyCodeObject *code_objects_32dfed504a0ec665fad6327674c06327;
static PyCodeObject *code_objects_08796eecfba1646893ca1bb0c2a7df79;
static PyCodeObject *code_objects_22b98d6746aa1dbe539f8d2d9850a8a4;
static PyCodeObject *code_objects_95f1c8401fb915f219e57db1b24f6db4;
static PyCodeObject *code_objects_998f065d919490ecf892ef0afb5af8ba;
static PyCodeObject *code_objects_8efd0d22ade82386288dd21f40fadddc;
static PyCodeObject *code_objects_61d324ab2bb22e21e2d203da09d47b3e;
static PyCodeObject *code_objects_69bc5b33747e941b645ea88442a31643;
static PyCodeObject *code_objects_77958f0e380697b2febc052dd7347321;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[119]); CHECK_OBJECT(module_filename_obj);
    code_objects_15f7eff0fed32cfbcd0a93ddb0a8c184 = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], mod_consts[53], mod_consts[120], NULL, 1, 0, 0);
    code_objects_4b97ceacdfef528400afa3e04fd29b42 = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], mod_consts[53], mod_consts[120], NULL, 1, 0, 0);
    code_objects_dd9b283af26ef12c73354ee14c0730ad = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[121], mod_consts[121], NULL, NULL, 0, 0, 0);
    code_objects_a98f1722833566f563d5bf3fb03406a5 = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[107], mod_consts[108], mod_consts[122], NULL, 7, 0, 0);
    code_objects_7caea3adfe566809f344a6038c4d0914 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[114], mod_consts[123], NULL, 3, 0, 0);
    code_objects_b3872209a615de79ceafc884ba551f67 = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[116], mod_consts[124], NULL, 4, 0, 0);
    code_objects_f9414011e1931761ade5a837b16baef3 = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[117], mod_consts[125], NULL, 5, 0, 0);
    code_objects_a0212a6b9c1a8c86b28b78f57b3ee3cc = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[115], mod_consts[126], NULL, 4, 0, 0);
    code_objects_46c308d38a8faf5e5564ed40b660593a = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[113], mod_consts[127], NULL, 3, 0, 0);
    code_objects_303ad94cb2b0620f5b90b03d1d28d94b = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[111], mod_consts[128], NULL, 2, 0, 0);
    code_objects_1736009d5c1e95464c0aacce5f3d6fbe = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[109], mod_consts[110], mod_consts[129], NULL, 2, 0, 0);
    code_objects_f4e08dedf085cf48de95517d00a2ff45 = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[56], mod_consts[130], mod_consts[131], 1, 0, 0);
    code_objects_42f3ff34b814bbf924164cccf1eca905 = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[70], mod_consts[132], mod_consts[133], 1, 0, 0);
    code_objects_86597c8e1e06e65fd989bb3b78714f15 = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[70], mod_consts[134], mod_consts[135], 1, 0, 0);
    code_objects_23eb8ca7abd1b88d7dc4ddfa34d5d3db = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[76], mod_consts[136], mod_consts[137], 1, 0, 0);
    code_objects_c1cef28d0f389bf9e51c9b142c48c8c4 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[62], mod_consts[138], mod_consts[139], 1, 0, 0);
    code_objects_12c68fa3b4ce98b358fab408c4ab2146 = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[62], mod_consts[140], mod_consts[141], 1, 0, 0);
    code_objects_f8fdd089dc8b0ea12d50fb391f1c44b8 = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[29], mod_consts[142], mod_consts[143], 1, 0, 0);
    code_objects_2548042aaa713fafd78531d1687ad05e = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[20], mod_consts[144], mod_consts[145], 1, 0, 0);
    code_objects_1cc325c709082f52a162449c09124185 = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[4], mod_consts[58], mod_consts[146], mod_consts[147], 3, 0, 0);
    code_objects_a891cccc0d38f665b406f044a2fc3b23 = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[4], mod_consts[72], mod_consts[146], mod_consts[147], 3, 0, 0);
    code_objects_efb7d3ad3e5a3a49533826b106b7c12d = MAKE_CODE_OBJECT(module_filename_obj, 256, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[4], mod_consts[72], mod_consts[148], mod_consts[149], 3, 0, 0);
    code_objects_d364ccfe10b805bb22d590b5f4146f05 = MAKE_CODE_OBJECT(module_filename_obj, 309, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[4], mod_consts[78], mod_consts[150], mod_consts[151], 3, 0, 0);
    code_objects_0140448e44c3aba0ae1868f8351f3df8 = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[4], mod_consts[64], mod_consts[146], mod_consts[147], 3, 0, 0);
    code_objects_33cccdcce2e219d1aa529a9b5d44ab17 = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[4], mod_consts[64], mod_consts[152], mod_consts[153], 3, 0, 0);
    code_objects_baaa8a7860d8bad5c1497bbc9c30d1a9 = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[4], mod_consts[32], mod_consts[154], mod_consts[143], 3, 0, 0);
    code_objects_1d2b483f40795612b19cd1b5358becce = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[4], mod_consts[22], mod_consts[155], mod_consts[156], 3, 0, 0);
    code_objects_433d384ad16f219b3837f5333736c9be = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[118], mod_consts[118], mod_consts[157], NULL, 3, 0, 0);
    code_objects_32dfed504a0ec665fad6327674c06327 = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3], mod_consts[57], mod_consts[158], mod_consts[159], 1, 0, 0);
    code_objects_08796eecfba1646893ca1bb0c2a7df79 = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3], mod_consts[71], mod_consts[160], mod_consts[159], 1, 0, 0);
    code_objects_22b98d6746aa1dbe539f8d2d9850a8a4 = MAKE_CODE_OBJECT(module_filename_obj, 253, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3], mod_consts[71], mod_consts[161], mod_consts[162], 1, 0, 0);
    code_objects_95f1c8401fb915f219e57db1b24f6db4 = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3], mod_consts[77], mod_consts[163], mod_consts[164], 1, 0, 0);
    code_objects_998f065d919490ecf892ef0afb5af8ba = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3], mod_consts[63], mod_consts[160], mod_consts[159], 1, 0, 0);
    code_objects_8efd0d22ade82386288dd21f40fadddc = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3], mod_consts[63], mod_consts[165], mod_consts[166], 1, 0, 0);
    code_objects_61d324ab2bb22e21e2d203da09d47b3e = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3], mod_consts[31], mod_consts[167], mod_consts[168], 1, 0, 0);
    code_objects_69bc5b33747e941b645ea88442a31643 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3], mod_consts[21], mod_consts[169], mod_consts[170], 1, 0, 0);
    code_objects_77958f0e380697b2febc052dd7347321 = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[42], mod_consts[43], mod_consts[171], mod_consts[172], 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_n_eq = python_pars[1];
    PyObject *par_n_ineq = python_pars[2];
    PyObject *par_fun = python_pars[3];
    PyObject *par_jac = python_pars[4];
    PyObject *par_hess = python_pars[5];
    PyObject *par_keep_feasible = python_pars[6];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__ = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__ == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a98f1722833566f563d5bf3fb03406a5, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__ = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_n_eq);
        tmp_assattr_value_1 = par_n_eq;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 43;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_n_ineq);
        tmp_assattr_value_2 = par_n_ineq;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 44;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_fun);
        tmp_assattr_value_3 = par_fun;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 45;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_jac);
        tmp_assattr_value_4 = par_jac;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[3], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_hess);
        tmp_assattr_value_5 = par_hess;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[4], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 47;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_keep_feasible);
        tmp_assattr_value_6 = par_keep_feasible;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[5], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__,
        type_description_1,
        par_self,
        par_n_eq,
        par_n_ineq,
        par_fun,
        par_jac,
        par_hess,
        par_keep_feasible
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__ == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__ = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_n_eq);
    Py_DECREF(par_n_eq);
    CHECK_OBJECT(par_n_ineq);
    Py_DECREF(par_n_ineq);
    CHECK_OBJECT(par_fun);
    Py_DECREF(par_fun);
    CHECK_OBJECT(par_jac);
    Py_DECREF(par_jac);
    CHECK_OBJECT(par_hess);
    Py_DECREF(par_hess);
    CHECK_OBJECT(par_keep_feasible);
    Py_DECREF(par_keep_feasible);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_n_eq);
    Py_DECREF(par_n_eq);
    CHECK_OBJECT(par_n_ineq);
    Py_DECREF(par_n_ineq);
    CHECK_OBJECT(par_fun);
    Py_DECREF(par_fun);
    CHECK_OBJECT(par_jac);
    Py_DECREF(par_jac);
    CHECK_OBJECT(par_hess);
    Py_DECREF(par_hess);
    CHECK_OBJECT(par_keep_feasible);
    Py_DECREF(par_keep_feasible);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_constraint = python_pars[1];
    PyObject *var_lb = NULL;
    PyObject *var_ub = NULL;
    PyObject *var_cfun = NULL;
    PyObject *var_keep_feasible = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint = MAKE_FUNCTION_FRAME(tstate, code_objects_1736009d5c1e95464c0aacce5f3d6fbe, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_1 = par_constraint;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 53;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 53;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 53;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 53;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 53;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_lb == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_lb = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_ub == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_ub = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_2 = par_constraint;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[2]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 54;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cfun == NULL);
        var_cfun = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_constraint);
        tmp_expression_value_3 = par_constraint;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[5]);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_keep_feasible == NULL);
        var_keep_feasible = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        int tmp_truth_name_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_7;
        int tmp_truth_name_2;
        tmp_expression_value_4 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lb);
        tmp_cmp_expr_left_1 = var_lb;
        tmp_expression_value_5 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_1);

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[9]);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint->m_frame.f_lineno = 57;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_expression_value_6 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[8]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ub);
        tmp_cmp_expr_left_2 = var_ub;
        tmp_expression_value_7 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_2);

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[9]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint->m_frame.f_lineno = 57;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_8 = par_cls;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[10]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 58;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cfun);
        tmp_expression_value_9 = var_cfun;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[11]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 58;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint->m_frame.f_lineno = 58;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 58;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_11;
        int tmp_truth_name_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_13;
        int tmp_truth_name_4;
        tmp_expression_value_10 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[8]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lb);
        tmp_cmp_expr_left_3 = var_lb;
        tmp_expression_value_11 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_4);

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[9]);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint->m_frame.f_lineno = 60;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        tmp_expression_value_12 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_12 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[8]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ub);
        tmp_cmp_expr_left_4 = var_ub;
        tmp_expression_value_13 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_5);

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[9]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint->m_frame.f_lineno = 60;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_14 = par_cls;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[10]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 61;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cfun);
        tmp_expression_value_15 = var_cfun;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[11]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 61;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint->m_frame.f_lineno = 61;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 61;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        int tmp_truth_name_5;
        tmp_expression_value_16 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 62;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[8]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 62;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lb);
        tmp_cmp_expr_left_5 = var_lb;
        CHECK_OBJECT(var_ub);
        tmp_cmp_expr_right_5 = var_ub;
        tmp_args_element_value_7 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 62;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint->m_frame.f_lineno = 62;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 62;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_5);

            exception_lineno = 62;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(par_cls);
        tmp_called_instance_1 = par_cls;
        CHECK_OBJECT(var_cfun);
        tmp_args_element_value_8 = var_cfun;
        CHECK_OBJECT(var_lb);
        tmp_args_element_value_9 = var_lb;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[12],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_18;
        int tmp_truth_name_6;
        tmp_expression_value_17 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[8]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lb);
        tmp_cmp_expr_left_6 = var_lb;
        tmp_expression_value_18 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_8);

            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[9]);
        if (tmp_operand_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_cmp_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint->m_frame.f_lineno = 64;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_6);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_6);

            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_6);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(par_cls);
        tmp_called_instance_2 = par_cls;
        CHECK_OBJECT(var_cfun);
        tmp_args_element_value_11 = var_cfun;
        CHECK_OBJECT(var_ub);
        tmp_args_element_value_12 = var_ub;
        CHECK_OBJECT(var_keep_feasible);
        tmp_args_element_value_13 = var_keep_feasible;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_2,
                mod_consts[13],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_20;
        int tmp_truth_name_7;
        tmp_expression_value_19 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 66;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[8]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 66;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ub);
        tmp_cmp_expr_left_7 = var_ub;
        tmp_expression_value_20 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_9);

            exception_lineno = 66;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[9]);
        if (tmp_cmp_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 66;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_right_7);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 66;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint->m_frame.f_lineno = 66;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 66;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_7);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_7);

            exception_lineno = 66;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_7);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        CHECK_OBJECT(par_cls);
        tmp_called_instance_3 = par_cls;
        CHECK_OBJECT(var_cfun);
        tmp_args_element_value_15 = var_cfun;
        CHECK_OBJECT(var_lb);
        tmp_args_element_value_16 = var_lb;
        CHECK_OBJECT(var_keep_feasible);
        tmp_args_element_value_17 = var_keep_feasible;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_3,
                mod_consts[14],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        CHECK_OBJECT(par_cls);
        tmp_called_instance_4 = par_cls;
        CHECK_OBJECT(var_cfun);
        tmp_args_element_value_18 = var_cfun;
        CHECK_OBJECT(var_lb);
        tmp_args_element_value_19 = var_lb;
        CHECK_OBJECT(var_ub);
        tmp_args_element_value_20 = var_ub;
        CHECK_OBJECT(var_keep_feasible);
        tmp_args_element_value_21 = var_keep_feasible;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_return_value = CALL_METHOD_WITH_ARGS4(
                tstate,
                tmp_called_instance_4,
                mod_consts[15],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint,
        type_description_1,
        par_cls,
        par_constraint,
        var_lb,
        var_ub,
        var_cfun,
        var_keep_feasible
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_lb);
    var_lb = NULL;
    Py_XDECREF(var_ub);
    var_ub = NULL;
    Py_XDECREF(var_cfun);
    var_cfun = NULL;
    Py_XDECREF(var_keep_feasible);
    var_keep_feasible = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_lb);
    var_lb = NULL;
    Py_XDECREF(var_ub);
    var_ub = NULL;
    Py_XDECREF(var_cfun);
    var_cfun = NULL;
    Py_XDECREF(var_keep_feasible);
    var_keep_feasible = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_constraint);
    Py_DECREF(par_constraint);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_n = python_pars[1];
    struct Nuitka_CellObject *var_empty_fun = Nuitka_Cell_NewEmpty();
    struct Nuitka_CellObject *var_empty_jac = Nuitka_Cell_NewEmpty();
    struct Nuitka_CellObject *var_empty_hess = Nuitka_Cell_NewEmpty();
    PyObject *var_fun = NULL;
    PyObject *var_jac = NULL;
    PyObject *var_hess = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty = MAKE_FUNCTION_FRAME(tstate, code_objects_303ad94cb2b0620f5b90b03d1d28d94b, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 78;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty->m_frame.f_lineno = 78;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[17], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 78;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_empty_fun) == NULL);
        Nuitka_Cell_SET(var_empty_fun, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_instance_2 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 79;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = const_int_0;
        tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_n);
        tmp_tuple_element_1 = par_n;
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 1, tmp_tuple_element_1);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty->m_frame.f_lineno = 79;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[10], tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 79;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_empty_jac) == NULL);
        Nuitka_Cell_SET(var_empty_jac, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_2;
        tmp_called_instance_3 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_sps(tstate);
        if (unlikely(tmp_called_instance_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[18]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 80;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_tuple_element_2 = par_n;
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_n);
        tmp_tuple_element_2 = par_n;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_2);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty->m_frame.f_lineno = 80;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[19], tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 80;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_empty_hess) == NULL);
        Nuitka_Cell_SET(var_empty_hess, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_empty_fun;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_4 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun(tstate, tmp_closure_1);

        assert(var_fun == NULL);
        var_fun = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        struct Nuitka_CellObject *tmp_closure_2[1];

        tmp_closure_2[0] = var_empty_jac;
        Py_INCREF(tmp_closure_2[0]);

        tmp_assign_source_5 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac(tstate, tmp_closure_2);

        assert(var_jac == NULL);
        var_jac = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        struct Nuitka_CellObject *tmp_closure_3[1];

        tmp_closure_3[0] = var_empty_hess;
        Py_INCREF(tmp_closure_3[0]);

        tmp_assign_source_6 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess(tstate, tmp_closure_3);

        assert(var_hess == NULL);
        var_hess = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_cls);
        tmp_called_value_1 = par_cls;
        tmp_args_element_value_3 = const_int_0;
        tmp_args_element_value_4 = const_int_0;
        CHECK_OBJECT(var_fun);
        tmp_args_element_value_5 = var_fun;
        CHECK_OBJECT(var_jac);
        tmp_args_element_value_6 = var_jac;
        CHECK_OBJECT(var_hess);
        tmp_args_element_value_7 = var_hess;
        tmp_expression_value_1 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 91;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[10]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 91;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_2);

            exception_lineno = 91;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[23]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 91;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty->m_frame.f_lineno = 91;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_args_element_value_8 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, mod_consts[17], kw_values, mod_consts[24]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 91;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_8);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 91;
            type_description_1 = "oocccooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty,
        type_description_1,
        par_cls,
        par_n,
        var_empty_fun,
        var_empty_jac,
        var_empty_hess,
        var_fun,
        var_jac,
        var_hess
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_empty_fun);
    Py_DECREF(var_empty_fun);
    var_empty_fun = NULL;
    CHECK_OBJECT(var_empty_jac);
    Py_DECREF(var_empty_jac);
    var_empty_jac = NULL;
    CHECK_OBJECT(var_empty_hess);
    Py_DECREF(var_empty_hess);
    var_empty_hess = NULL;
    CHECK_OBJECT(var_fun);
    Py_DECREF(var_fun);
    var_fun = NULL;
    CHECK_OBJECT(var_jac);
    Py_DECREF(var_jac);
    var_jac = NULL;
    CHECK_OBJECT(var_hess);
    Py_DECREF(var_hess);
    var_hess = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(var_empty_fun);
    Py_DECREF(var_empty_fun);
    var_empty_fun = NULL;
    CHECK_OBJECT(var_empty_jac);
    Py_DECREF(var_empty_jac);
    var_empty_jac = NULL;
    CHECK_OBJECT(var_empty_hess);
    Py_DECREF(var_empty_hess);
    var_empty_hess = NULL;
    Py_XDECREF(var_fun);
    var_fun = NULL;
    Py_XDECREF(var_jac);
    var_jac = NULL;
    Py_XDECREF(var_hess);
    var_hess = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun = MAKE_FUNCTION_FRAME(tstate, code_objects_2548042aaa713fafd78531d1687ad05e, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 83;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 83;
            type_description_1 = "oc";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[0]);
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun,
        type_description_1,
        par_x,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac = MAKE_FUNCTION_FRAME(tstate, code_objects_69bc5b33747e941b645ea88442a31643, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[27]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 86;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[27]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 86;
            type_description_1 = "oc";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[0]);
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac,
        type_description_1,
        par_x,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_v_eq = python_pars[1];
    PyObject *par_v_ineq = python_pars[2];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess = MAKE_FUNCTION_FRAME(tstate, code_objects_1d2b483f40795612b19cd1b5358becce, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess) == 2);

    // Framed code:
    if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

        FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[28]);
        NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
        CHAIN_EXCEPTION(tstate, exception_state.exception_value);

        exception_lineno = 89;
        type_description_1 = "oooc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = Nuitka_Cell_GET(self->m_closure[0]);
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess,
        type_description_1,
        par_x,
        par_v_eq,
        par_v_ineq,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v_eq);
    Py_DECREF(par_v_eq);
    CHECK_OBJECT(par_v_ineq);
    Py_DECREF(par_v_ineq);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v_eq);
    Py_DECREF(par_v_eq);
    CHECK_OBJECT(par_v_ineq);
    Py_DECREF(par_v_ineq);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_CellObject *par_canonical_constraints = Nuitka_Cell_New1(python_pars[1]);
    PyObject *par_sparse_jacobian = python_pars[2];
    PyObject *var_fun = NULL;
    struct Nuitka_CellObject *var_vstack = Nuitka_Cell_NewEmpty();
    PyObject *var_jac = NULL;
    PyObject *var_hess = NULL;
    PyObject *var_n_eq = NULL;
    PyObject *var_n_ineq = NULL;
    PyObject *var_keep_feasible = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_canonical_constraints;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun(tstate, tmp_closure_1);

        assert(var_fun == NULL);
        var_fun = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate = MAKE_FUNCTION_FRAME(tstate, code_objects_46c308d38a8faf5e5564ed40b660593a, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_sparse_jacobian);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_sparse_jacobian);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 110;
            type_description_1 = "ocoocooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_sps(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[18]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 111;
            type_description_1 = "ocoocooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[30]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 111;
            type_description_1 = "ocoocooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_vstack) == NULL);
        Nuitka_Cell_SET(var_vstack, tmp_assign_source_2);

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 113;
            type_description_1 = "ocoocooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[30]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 113;
            type_description_1 = "ocoocooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_vstack) == NULL);
        Nuitka_Cell_SET(var_vstack, tmp_assign_source_3);

    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_4;
        struct Nuitka_CellObject *tmp_closure_2[2];

        tmp_closure_2[0] = par_canonical_constraints;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = var_vstack;
        Py_INCREF(tmp_closure_2[1]);

        tmp_assign_source_4 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac(tstate, tmp_closure_2);

        assert(var_jac == NULL);
        var_jac = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        struct Nuitka_CellObject *tmp_closure_3[1];

        tmp_closure_3[0] = par_canonical_constraints;
        Py_INCREF(tmp_closure_3[0]);

        tmp_assign_source_5 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess(tstate, tmp_closure_3);

        assert(var_hess == NULL);
        var_hess = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_sum_sequence_1;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_1;
            if (Nuitka_Cell_GET(par_canonical_constraints) == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[33]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 144;
                type_description_1 = "ocoocooooo";
                goto frame_exception_exit_1;
            }

            tmp_iter_arg_1 = Nuitka_Cell_GET(par_canonical_constraints);
            tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 144;
                type_description_1 = "ocoocooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_7;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_4[1];

            tmp_closure_4[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_sum_sequence_1 = MAKE_GENERATOR_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$genexpr__1_genexpr(tstate, tmp_closure_4);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_assign_source_6 = BUILTIN_SUM1(tstate, tmp_sum_sequence_1);
        Py_DECREF(tmp_sum_sequence_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;
            type_description_1 = "ocoocooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n_eq == NULL);
        var_n_eq = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_sum_sequence_2;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_2;
            if (Nuitka_Cell_GET(par_canonical_constraints) == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[33]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 145;
                type_description_1 = "ocoocooooo";
                goto frame_exception_exit_1;
            }

            tmp_iter_arg_2 = Nuitka_Cell_GET(par_canonical_constraints);
            tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            if (tmp_assign_source_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 145;
                type_description_1 = "ocoocooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_2__$0 == NULL);
            tmp_genexpr_2__$0 = tmp_assign_source_9;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_5[1];

            tmp_closure_5[0] = Nuitka_Cell_New0(tmp_genexpr_2__$0);

            tmp_sum_sequence_2 = MAKE_GENERATOR_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$genexpr__2_genexpr(tstate, tmp_closure_5);

            goto try_return_handler_3;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_genexpr_2__$0);
        Py_DECREF(tmp_genexpr_2__$0);
        tmp_genexpr_2__$0 = NULL;
        goto outline_result_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        tmp_assign_source_8 = BUILTIN_SUM1(tstate, tmp_sum_sequence_2);
        Py_DECREF(tmp_sum_sequence_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 145;
            type_description_1 = "ocoocooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n_ineq == NULL);
        var_n_ineq = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_3 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 146;
            type_description_1 = "ocoocooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[34]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 146;
            type_description_1 = "ocoocooooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_3;
            if (Nuitka_Cell_GET(par_canonical_constraints) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[33]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 147;
                type_description_1 = "ocoocooooo";
                goto try_except_handler_4;
            }

            tmp_iter_arg_3 = Nuitka_Cell_GET(par_canonical_constraints);
            tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
            if (tmp_assign_source_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 146;
                type_description_1 = "ocoocooooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = MAKE_LIST_EMPTY(tstate, 0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_12;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_13 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "ocoocooooo";
                    exception_lineno = 146;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_14 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_14;
                Py_INCREF(outline_0_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_expression_value_4;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_c);
            tmp_expression_value_4 = outline_0_var_c;
            tmp_append_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[5]);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 146;
                type_description_1 = "ocoocooooo";
                goto try_except_handler_5;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 146;
                type_description_1 = "ocoocooooo";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 146;
            type_description_1 = "ocoocooooo";
            goto try_except_handler_5;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_lineno_1 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_1 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_lineno_2 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_2 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 146;
        goto frame_exception_exit_1;
        outline_result_3:;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate->m_frame.f_lineno = 146;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 146;
            type_description_1 = "ocoocooooo";
            goto frame_exception_exit_1;
        }
        assert(var_keep_feasible == NULL);
        var_keep_feasible = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_cls);
        tmp_called_value_2 = par_cls;
        CHECK_OBJECT(var_n_eq);
        tmp_args_element_value_2 = var_n_eq;
        CHECK_OBJECT(var_n_ineq);
        tmp_args_element_value_3 = var_n_ineq;
        CHECK_OBJECT(var_fun);
        tmp_args_element_value_4 = var_fun;
        CHECK_OBJECT(var_jac);
        tmp_args_element_value_5 = var_jac;
        CHECK_OBJECT(var_hess);
        tmp_args_element_value_6 = var_hess;
        CHECK_OBJECT(var_keep_feasible);
        tmp_args_element_value_7 = var_keep_feasible;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 149;
            type_description_1 = "ocoocooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate,
        type_description_1,
        par_cls,
        par_canonical_constraints,
        par_sparse_jacobian,
        var_fun,
        var_vstack,
        var_jac,
        var_hess,
        var_n_eq,
        var_n_ineq,
        var_keep_feasible
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_fun);
    Py_DECREF(var_fun);
    var_fun = NULL;
    CHECK_OBJECT(var_vstack);
    Py_DECREF(var_vstack);
    var_vstack = NULL;
    CHECK_OBJECT(var_jac);
    Py_DECREF(var_jac);
    var_jac = NULL;
    CHECK_OBJECT(var_hess);
    Py_DECREF(var_hess);
    var_hess = NULL;
    CHECK_OBJECT(var_n_eq);
    Py_DECREF(var_n_eq);
    var_n_eq = NULL;
    CHECK_OBJECT(var_n_ineq);
    Py_DECREF(var_n_ineq);
    var_n_ineq = NULL;
    CHECK_OBJECT(var_keep_feasible);
    Py_DECREF(var_keep_feasible);
    var_keep_feasible = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(var_fun);
    Py_DECREF(var_fun);
    var_fun = NULL;
    CHECK_OBJECT(var_vstack);
    Py_DECREF(var_vstack);
    var_vstack = NULL;
    Py_XDECREF(var_jac);
    var_jac = NULL;
    Py_XDECREF(var_hess);
    var_hess = NULL;
    Py_XDECREF(var_n_eq);
    var_n_eq = NULL;
    Py_XDECREF(var_n_ineq);
    var_n_ineq = NULL;
    Py_XDECREF(var_keep_feasible);
    var_keep_feasible = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_canonical_constraints);
    Py_DECREF(par_canonical_constraints);
    CHECK_OBJECT(par_sparse_jacobian);
    Py_DECREF(par_sparse_jacobian);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_canonical_constraints);
    Py_DECREF(par_canonical_constraints);
    CHECK_OBJECT(par_sparse_jacobian);
    Py_DECREF(par_sparse_jacobian);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *var_eq_all = NULL;
    PyObject *var_ineq_all = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun = MAKE_FUNCTION_FRAME(tstate, code_objects_f8fdd089dc8b0ea12d50fb391f1c44b8, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[33]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 102;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(self->m_closure[0]));
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 102;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_direct_call_arg1_1;
        PyObject *tmp_direct_call_arg2_1;
        tmp_direct_call_arg1_1 = (PyObject *)&PyZip_Type;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_2;
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[33]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 104;
                type_description_1 = "oooc";
                goto try_except_handler_3;
            }

            tmp_iter_arg_2 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            if (tmp_assign_source_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 104;
                type_description_1 = "oooc";
                goto try_except_handler_3;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "oooc";
                    exception_lineno = 104;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_5;
                Py_INCREF(outline_0_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_c);
            tmp_expression_value_1 = outline_0_var_c;
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 104;
                type_description_1 = "oooc";
                goto try_except_handler_4;
            }
            if (par_x == NULL) {
                Py_DECREF(tmp_called_value_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[36]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 104;
                type_description_1 = "oooc";
                goto try_except_handler_4;
            }

            tmp_args_element_value_1 = par_x;
            frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun->m_frame.f_lineno = 104;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_1);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 104;
                type_description_1 = "oooc";
                goto try_except_handler_4;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 104;
                type_description_1 = "oooc";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 104;
            type_description_1 = "oooc";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_direct_call_arg2_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_direct_call_arg2_1);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_lineno_1 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_1 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_lineno_2 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_2 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 104;
        goto try_except_handler_2;
        outline_result_1:;
        Py_INCREF(tmp_direct_call_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
            tmp_iter_arg_1 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 103;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 103;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 103;
            type_description_1 = "oooc";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 103;
            type_description_1 = "oooc";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 103;
            type_description_1 = "oooc";
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        assert(var_eq_all == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_eq_all = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert(var_ineq_all == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_ineq_all = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_3;
        tmp_iter_arg_3 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[37], "ll");
        tmp_assign_source_10 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        assert(!(tmp_assign_source_10 == NULL));
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 106;
            type_description_1 = "oooc";
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 106;
            type_description_1 = "oooc";
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 106;
            type_description_1 = "oooc";
            goto try_except_handler_7;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
        assert(var_eq_all == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_eq_all = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
        assert(var_ineq_all == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_ineq_all = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    branch_end_1:;
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 108;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_eq_all);
        tmp_args_element_value_2 = var_eq_all;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun->m_frame.f_lineno = 108;
        tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[34], tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 108;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_3;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            tmp_called_instance_2 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
            if (unlikely(tmp_called_instance_2 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 108;
                type_description_1 = "oooc";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_ineq_all);
            tmp_args_element_value_3 = var_ineq_all;
            frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun->m_frame.f_lineno = 108;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[34], tmp_args_element_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 108;
                type_description_1 = "oooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun,
        type_description_1,
        par_x,
        var_eq_all,
        var_ineq_all,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_eq_all);
    Py_DECREF(var_eq_all);
    var_eq_all = NULL;
    CHECK_OBJECT(var_ineq_all);
    Py_DECREF(var_ineq_all);
    var_ineq_all = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_7 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_7 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_eq_all);
    var_eq_all = NULL;
    Py_XDECREF(var_ineq_all);
    var_ineq_all = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *var_eq_all = NULL;
    PyObject *var_ineq_all = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac = MAKE_FUNCTION_FRAME(tstate, code_objects_61d324ab2bb22e21e2d203da09d47b3e, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[33]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 116;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(self->m_closure[0]));
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 116;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_direct_call_arg1_1;
        PyObject *tmp_direct_call_arg2_1;
        tmp_direct_call_arg1_1 = (PyObject *)&PyZip_Type;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_2;
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[33]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 118;
                type_description_1 = "ooocc";
                goto try_except_handler_3;
            }

            tmp_iter_arg_2 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            if (tmp_assign_source_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 118;
                type_description_1 = "ooocc";
                goto try_except_handler_3;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "ooocc";
                    exception_lineno = 118;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_5;
                Py_INCREF(outline_0_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_c);
            tmp_expression_value_1 = outline_0_var_c;
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 118;
                type_description_1 = "ooocc";
                goto try_except_handler_4;
            }
            if (par_x == NULL) {
                Py_DECREF(tmp_called_value_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[36]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 118;
                type_description_1 = "ooocc";
                goto try_except_handler_4;
            }

            tmp_args_element_value_1 = par_x;
            frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac->m_frame.f_lineno = 118;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_1);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 118;
                type_description_1 = "ooocc";
                goto try_except_handler_4;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 118;
                type_description_1 = "ooocc";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 118;
            type_description_1 = "ooocc";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_direct_call_arg2_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_direct_call_arg2_1);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_lineno_1 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_1 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_lineno_2 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_2 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 118;
        goto try_except_handler_2;
        outline_result_1:;
        Py_INCREF(tmp_direct_call_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
            tmp_iter_arg_1 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 117;
            type_description_1 = "ooocc";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 117;
            type_description_1 = "ooocc";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 117;
            type_description_1 = "ooocc";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 117;
            type_description_1 = "ooocc";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 117;
            type_description_1 = "ooocc";
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        assert(var_eq_all == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_eq_all = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert(var_ineq_all == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_ineq_all = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_3;
        tmp_iter_arg_3 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[37], "ll");
        tmp_assign_source_10 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        assert(!(tmp_assign_source_10 == NULL));
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 120;
            type_description_1 = "ooocc";
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 120;
            type_description_1 = "ooocc";
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 120;
            type_description_1 = "ooocc";
            goto try_except_handler_7;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
        assert(var_eq_all == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_eq_all = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
        assert(var_ineq_all == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_ineq_all = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    branch_end_1:;
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[30]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 122;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(var_eq_all);
        tmp_args_element_value_2 = var_eq_all;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac->m_frame.f_lineno = 122;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 122;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_3;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[30]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 122;
                type_description_1 = "ooocc";
                goto tuple_build_exception_1;
            }

            tmp_called_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
            CHECK_OBJECT(var_ineq_all);
            tmp_args_element_value_3 = var_ineq_all;
            frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac->m_frame.f_lineno = 122;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 122;
                type_description_1 = "ooocc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac,
        type_description_1,
        par_x,
        var_eq_all,
        var_ineq_all,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_eq_all);
    Py_DECREF(var_eq_all);
    var_eq_all = NULL;
    CHECK_OBJECT(var_ineq_all);
    Py_DECREF(var_ineq_all);
    var_ineq_all = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_7 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_7 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_eq_all);
    var_eq_all = NULL;
    Py_XDECREF(var_ineq_all);
    var_ineq_all = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_v_eq = python_pars[1];
    PyObject *par_v_ineq = python_pars[2];
    struct Nuitka_CellObject *var_hess_all = Nuitka_Cell_NewEmpty();
    PyObject *var_index_eq = NULL;
    PyObject *var_index_ineq = NULL;
    PyObject *var_c = NULL;
    PyObject *var_vc_eq = NULL;
    PyObject *var_vc_ineq = NULL;
    PyObject *var_matvec = NULL;
    PyObject *var_n = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
        assert(Nuitka_Cell_GET(var_hess_all) == NULL);
        Nuitka_Cell_SET(var_hess_all, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_int_0;
        assert(var_index_eq == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_index_eq = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_int_0;
        assert(var_index_ineq == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_index_ineq = tmp_assign_source_3;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess = MAKE_FUNCTION_FRAME(tstate, code_objects_baaa8a7860d8bad5c1497bbc9c30d1a9, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[33]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 128;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 128;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooocoooooooc";
                exception_lineno = 128;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_6;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_v_eq);
        tmp_expression_value_1 = par_v_eq;
        if (var_index_eq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[38]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 129;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }

        tmp_start_value_1 = var_index_eq;
        if (var_index_eq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[38]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 129;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_1 = var_index_eq;
        CHECK_OBJECT(var_c);
        tmp_expression_value_2 = var_c;
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 129;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_stop_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 129;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 129;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_vc_eq;
            var_vc_eq = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_start_value_2;
        PyObject *tmp_stop_value_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_v_ineq);
        tmp_expression_value_3 = par_v_ineq;
        if (var_index_ineq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[39]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 130;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }

        tmp_start_value_2 = var_index_ineq;
        if (var_index_ineq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[39]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 130;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_2 = var_index_ineq;
        CHECK_OBJECT(var_c);
        tmp_expression_value_4 = var_c;
        tmp_add_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[1]);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 130;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        tmp_stop_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_stop_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 130;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
        Py_DECREF(tmp_stop_value_2);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 130;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_vc_ineq;
            var_vc_ineq = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        if (Nuitka_Cell_GET(var_hess_all) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[40]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 131;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(var_hess_all);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[41]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 131;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c);
        tmp_expression_value_6 = var_c;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 131;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        if (par_x == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[36]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 131;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = par_x;
        CHECK_OBJECT(var_vc_eq);
        tmp_args_element_value_3 = var_vc_eq;
        CHECK_OBJECT(var_vc_ineq);
        tmp_args_element_value_4 = var_vc_ineq;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 131;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess->m_frame.f_lineno = 131;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 131;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_expression_value_7;
        if (var_index_eq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[38]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 132;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var_index_eq;
        CHECK_OBJECT(var_c);
        tmp_expression_value_7 = var_c;
        tmp_iadd_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[0]);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 132;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 132;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = tmp_iadd_expr_left_1;
        var_index_eq = tmp_assign_source_9;

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_expression_value_8;
        if (var_index_ineq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[39]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 133;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_2 = var_index_ineq;
        CHECK_OBJECT(var_c);
        tmp_expression_value_8 = var_c;
        tmp_iadd_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[1]);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 133;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 133;
            type_description_1 = "ooocoooooooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = tmp_iadd_expr_left_2;
        var_index_ineq = tmp_assign_source_10;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 128;
        type_description_1 = "ooocoooooooc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_11;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_hess_all;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_11 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec(tstate, tmp_closure_1);

        assert(var_matvec == NULL);
        var_matvec = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        if (par_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[36]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 141;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = par_x;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[44]);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 141;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = const_int_0;
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_3, 0);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 141;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_n == NULL);
        var_n = tmp_assign_source_12;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_12 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_sps(tstate);
        if (unlikely(tmp_expression_value_12 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[18]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 142;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[45]);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 142;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[46]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 142;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n);
        tmp_tuple_element_2 = var_n;
        tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_n);
        tmp_tuple_element_2 = var_n;
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_matvec);
        tmp_tuple_element_1 = var_matvec;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[47]);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess->m_frame.f_lineno = 142;
        tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 142;
            type_description_1 = "ooocoooooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess,
        type_description_1,
        par_x,
        par_v_eq,
        par_v_ineq,
        var_hess_all,
        var_index_eq,
        var_index_ineq,
        var_c,
        var_vc_eq,
        var_vc_ineq,
        var_matvec,
        var_n,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_hess_all);
    Py_DECREF(var_hess_all);
    var_hess_all = NULL;
    Py_XDECREF(var_index_eq);
    var_index_eq = NULL;
    Py_XDECREF(var_index_ineq);
    var_index_ineq = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_vc_eq);
    var_vc_eq = NULL;
    Py_XDECREF(var_vc_ineq);
    var_vc_ineq = NULL;
    CHECK_OBJECT(var_matvec);
    Py_DECREF(var_matvec);
    var_matvec = NULL;
    CHECK_OBJECT(var_n);
    Py_DECREF(var_n);
    var_n = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(var_hess_all);
    Py_DECREF(var_hess_all);
    var_hess_all = NULL;
    Py_XDECREF(var_index_eq);
    var_index_eq = NULL;
    Py_XDECREF(var_index_ineq);
    var_index_ineq = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_vc_eq);
    var_vc_eq = NULL;
    Py_XDECREF(var_vc_ineq);
    var_vc_ineq = NULL;
    Py_XDECREF(var_matvec);
    var_matvec = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v_eq);
    Py_DECREF(par_v_eq);
    CHECK_OBJECT(par_v_ineq);
    Py_DECREF(par_v_ineq);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v_eq);
    Py_DECREF(par_v_eq);
    CHECK_OBJECT(par_v_ineq);
    Py_DECREF(par_v_ineq);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[0];
    PyObject *var_result = NULL;
    PyObject *var_h = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec = MAKE_FUNCTION_FRAME(tstate, code_objects_77958f0e380697b2febc052dd7347321, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 136;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_p);
        tmp_args_element_value_1 = par_p;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec->m_frame.f_lineno = 136;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[48], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 136;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[40]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 137;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 137;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "oooc";
                exception_lineno = 137;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_h;
            var_h = tmp_assign_source_4;
            Py_INCREF(var_h);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[49]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 138;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var_result;
        CHECK_OBJECT(var_h);
        tmp_expression_value_1 = var_h;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[50]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 138;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        if (par_p == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[51]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 138;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = par_p;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec->m_frame.f_lineno = 138;
        tmp_iadd_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 138;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 138;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = tmp_iadd_expr_left_1;
        var_result = tmp_assign_source_5;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 137;
        type_description_1 = "oooc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_result == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[49]);
        NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
        CHAIN_EXCEPTION(tstate, exception_state.exception_value);

        exception_lineno = 139;
        type_description_1 = "oooc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec,
        type_description_1,
        par_p,
        var_result,
        var_h,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$genexpr__1_genexpr_locals {
    PyObject *var_c;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    struct Nuitka_ExceptionPreservationItem exception_state;
    int exception_lineno;
    char yield_tmps[1024];
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$genexpr__1_genexpr_locals *generator_heap = (struct scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_c = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_15f7eff0fed32cfbcd0a93ddb0a8c184, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 144;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_c;
            generator_heap->var_c = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_c);
        tmp_expression_value_2 = generator_heap->var_c;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


            generator_heap->exception_lineno = 144;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


            generator_heap->exception_lineno = 144;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


        generator_heap->exception_lineno = 144;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_lineno = 0;
    generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_state = generator_heap->exception_keeper_name_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &generator_heap->exception_state)) {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
        } else if ((generator_heap->exception_lineno != 0) && (exception_tb->tb_frame != &generator->m_frame->m_frame)) {
            exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_c
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);


    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_lineno = 0;
    generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

    Py_XDECREF(generator_heap->var_c);
    generator_heap->var_c = NULL;
    // Re-raise.
    generator_heap->exception_state = generator_heap->exception_keeper_name_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_c);
    generator_heap->var_c = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$genexpr__1_genexpr_context,
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        mod_consts[52],
#if PYTHON_VERSION >= 0x350
        mod_consts[53],
#endif
        code_objects_15f7eff0fed32cfbcd0a93ddb0a8c184,
        closure,
        1,
#if 1
        sizeof(struct scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



#if 1
struct scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$genexpr__2_genexpr_locals {
    PyObject *var_c;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    struct Nuitka_ExceptionPreservationItem exception_state;
    int exception_lineno;
    char yield_tmps[1024];
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$genexpr__2_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$genexpr__2_genexpr_locals *generator_heap = (struct scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$genexpr__2_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_c = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_4b97ceacdfef528400afa3e04fd29b42, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 145;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_c;
            generator_heap->var_c = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_c);
        tmp_expression_value_2 = generator_heap->var_c;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


            generator_heap->exception_lineno = 145;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


            generator_heap->exception_lineno = 145;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


        generator_heap->exception_lineno = 145;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_lineno = 0;
    generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_state = generator_heap->exception_keeper_name_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &generator_heap->exception_state)) {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
        } else if ((generator_heap->exception_lineno != 0) && (exception_tb->tb_frame != &generator->m_frame->m_frame)) {
            exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_c
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);


    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_lineno = 0;
    generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

    Py_XDECREF(generator_heap->var_c);
    generator_heap->var_c = NULL;
    // Re-raise.
    generator_heap->exception_state = generator_heap->exception_keeper_name_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_c);
    generator_heap->var_c = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$genexpr__2_genexpr_context,
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        mod_consts[52],
#if PYTHON_VERSION >= 0x350
        mod_consts[53],
#endif
        code_objects_4b97ceacdfef528400afa3e04fd29b42,
        closure,
        1,
#if 1
        sizeof(struct scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$genexpr__2_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_CellObject *par_cfun = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_value = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *var_empty_fun = Nuitka_Cell_NewEmpty();
    PyObject *var_n = NULL;
    PyObject *var_n_eq = NULL;
    PyObject *var_keep_feasible = NULL;
    struct Nuitka_CellObject *var_empty_jac = Nuitka_Cell_NewEmpty();
    PyObject *var_fun = NULL;
    PyObject *var_jac = NULL;
    PyObject *var_hess = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical = MAKE_FUNCTION_FRAME(tstate, code_objects_7caea3adfe566809f344a6038c4d0914, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 153;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical->m_frame.f_lineno = 153;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[17], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 153;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_empty_fun) == NULL);
        Nuitka_Cell_SET(var_empty_fun, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_cfun));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_cfun);
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[11]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 154;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        assert(var_n == NULL);
        var_n = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_value));
        tmp_expression_value_3 = Nuitka_Cell_GET(par_value);
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[44]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 156;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = const_int_0;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 156;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        assert(var_n_eq == NULL);
        var_n_eq = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 158;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[10]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 158;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical->m_frame.f_lineno = 158;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[54], 0), mod_consts[24]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 158;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        assert(var_keep_feasible == NULL);
        var_keep_feasible = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_cfun));
        tmp_expression_value_5 = Nuitka_Cell_GET(par_cfun);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[55]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 160;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_instance_2 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_sps(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[18]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 161;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = const_int_0;
        tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_n);
        tmp_tuple_element_1 = var_n;
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 1, tmp_tuple_element_1);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical->m_frame.f_lineno = 161;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[19], tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 161;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_empty_jac) == NULL);
        Nuitka_Cell_SET(var_empty_jac, tmp_assign_source_5);

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_2;
        tmp_called_instance_3 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 163;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = const_int_0;
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_n);
        tmp_tuple_element_2 = var_n;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_2);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical->m_frame.f_lineno = 163;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[10], tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 163;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_empty_jac) == NULL);
        Nuitka_Cell_SET(var_empty_jac, tmp_assign_source_6);

    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_7;
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_cfun;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_empty_fun;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_value;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_7 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun(tstate, tmp_closure_1);

        assert(var_fun == NULL);
        var_fun = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        struct Nuitka_CellObject *tmp_closure_2[2];

        tmp_closure_2[0] = par_cfun;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = var_empty_jac;
        Py_INCREF(tmp_closure_2[1]);

        tmp_assign_source_8 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac(tstate, tmp_closure_2);

        assert(var_jac == NULL);
        var_jac = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        struct Nuitka_CellObject *tmp_closure_3[1];

        tmp_closure_3[0] = par_cfun;
        Py_INCREF(tmp_closure_3[0]);

        tmp_assign_source_9 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess(tstate, tmp_closure_3);

        assert(var_hess == NULL);
        var_hess = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 174;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical->m_frame.f_lineno = 174;
        tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_4,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[17], 0)
        );

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 174;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_empty_fun);
            Nuitka_Cell_SET(var_empty_fun, tmp_assign_source_10);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(Nuitka_Cell_GET(par_cfun));
        tmp_expression_value_6 = Nuitka_Cell_GET(par_cfun);
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[11]);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 175;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_n;
            var_n = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_cfun));
        tmp_expression_value_7 = Nuitka_Cell_GET(par_cfun);
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[55]);
        if (tmp_attribute_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 176;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 176;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_tuple_element_3;
        tmp_called_instance_5 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_sps(tstate);
        if (unlikely(tmp_called_instance_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[18]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 177;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = const_int_0;
        tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_n);
        tmp_tuple_element_3 = var_n;
        PyTuple_SET_ITEM0(tmp_args_element_value_3, 1, tmp_tuple_element_3);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical->m_frame.f_lineno = 177;
        tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[19], tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 177;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_empty_jac);
            Nuitka_Cell_SET(var_empty_jac, tmp_assign_source_12);
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_tuple_element_4;
        tmp_called_instance_6 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 179;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = const_int_0;
        tmp_args_element_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_4, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_n);
        tmp_tuple_element_4 = var_n;
        PyTuple_SET_ITEM0(tmp_args_element_value_4, 1, tmp_tuple_element_4);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical->m_frame.f_lineno = 179;
        tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts[10], tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 179;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_empty_jac);
            Nuitka_Cell_SET(var_empty_jac, tmp_assign_source_13);
            Py_XDECREF(old);
        }

    }
    branch_end_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_cls);
        tmp_called_value_2 = par_cls;
        CHECK_OBJECT(var_n_eq);
        tmp_args_element_value_5 = var_n_eq;
        tmp_args_element_value_6 = const_int_0;
        CHECK_OBJECT(var_fun);
        tmp_args_element_value_7 = var_fun;
        CHECK_OBJECT(var_jac);
        tmp_args_element_value_8 = var_jac;
        CHECK_OBJECT(var_hess);
        tmp_args_element_value_9 = var_hess;
        CHECK_OBJECT(var_keep_feasible);
        tmp_args_element_value_10 = var_keep_feasible;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 181;
            type_description_1 = "occcooNocooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical,
        type_description_1,
        par_cls,
        par_cfun,
        par_value,
        var_empty_fun,
        var_n,
        var_n_eq,
        NULL,
        var_keep_feasible,
        var_empty_jac,
        var_fun,
        var_jac,
        var_hess
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_empty_fun);
    Py_DECREF(var_empty_fun);
    var_empty_fun = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    CHECK_OBJECT(var_n_eq);
    Py_DECREF(var_n_eq);
    var_n_eq = NULL;
    CHECK_OBJECT(var_keep_feasible);
    Py_DECREF(var_keep_feasible);
    var_keep_feasible = NULL;
    CHECK_OBJECT(var_empty_jac);
    Py_DECREF(var_empty_jac);
    var_empty_jac = NULL;
    CHECK_OBJECT(var_fun);
    Py_DECREF(var_fun);
    var_fun = NULL;
    CHECK_OBJECT(var_jac);
    Py_DECREF(var_jac);
    var_jac = NULL;
    CHECK_OBJECT(var_hess);
    Py_DECREF(var_hess);
    var_hess = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(var_empty_fun);
    Py_DECREF(var_empty_fun);
    var_empty_fun = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_n_eq);
    var_n_eq = NULL;
    Py_XDECREF(var_keep_feasible);
    var_keep_feasible = NULL;
    CHECK_OBJECT(var_empty_jac);
    Py_DECREF(var_empty_jac);
    var_empty_jac = NULL;
    Py_XDECREF(var_fun);
    var_fun = NULL;
    Py_XDECREF(var_jac);
    var_jac = NULL;
    Py_XDECREF(var_hess);
    var_hess = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_cfun);
    Py_DECREF(par_cfun);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_cfun);
    Py_DECREF(par_cfun);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun = MAKE_FUNCTION_FRAME(tstate, code_objects_f4e08dedf085cf48de95517d00a2ff45, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 166;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun->m_frame.f_lineno = 166;
        tmp_sub_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[2], tmp_args_element_value_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 166;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[60]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 166;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_right_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 166;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 166;
            type_description_1 = "occc";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun,
        type_description_1,
        par_x,
        self->m_closure[0],
        self->m_closure[2],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac = MAKE_FUNCTION_FRAME(tstate, code_objects_32dfed504a0ec665fad6327674c06327, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 169;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac->m_frame.f_lineno = 169;
        tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 169;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[27]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 169;
            type_description_1 = "occ";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac,
        type_description_1,
        par_x,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_v_eq = python_pars[1];
    PyObject *par_v_ineq = python_pars[2];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess = MAKE_FUNCTION_FRAME(tstate, code_objects_1cc325c709082f52a162449c09124185, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 172;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_v_eq);
        tmp_args_element_value_2 = par_v_eq;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[4],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 172;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess,
        type_description_1,
        par_x,
        par_v_eq,
        par_v_ineq,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v_eq);
    Py_DECREF(par_v_eq);
    CHECK_OBJECT(par_v_ineq);
    Py_DECREF(par_v_ineq);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v_eq);
    Py_DECREF(par_v_eq);
    CHECK_OBJECT(par_v_ineq);
    Py_DECREF(par_v_ineq);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_CellObject *par_cfun = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_ub = Nuitka_Cell_New1(python_pars[2]);
    PyObject *par_keep_feasible = python_pars[3];
    struct Nuitka_CellObject *var_empty_fun = Nuitka_Cell_NewEmpty();
    PyObject *var_n = NULL;
    struct Nuitka_CellObject *var_empty_jac = Nuitka_Cell_NewEmpty();
    struct Nuitka_CellObject *var_finite_ub = Nuitka_Cell_NewEmpty();
    PyObject *var_n_ineq = NULL;
    PyObject *var_fun = NULL;
    PyObject *var_jac = NULL;
    PyObject *var_hess = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical = MAKE_FUNCTION_FRAME(tstate, code_objects_a0212a6b9c1a8c86b28b78f57b3ee3cc, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 185;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical->m_frame.f_lineno = 185;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[17], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 185;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_empty_fun) == NULL);
        Nuitka_Cell_SET(var_empty_fun, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_cfun));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_cfun);
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[11]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 186;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert(var_n == NULL);
        var_n = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_cfun));
        tmp_expression_value_2 = Nuitka_Cell_GET(par_cfun);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[55]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 187;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 187;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_instance_2 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_sps(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[18]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 188;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = const_int_0;
        tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_n);
        tmp_tuple_element_1 = var_n;
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 1, tmp_tuple_element_1);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical->m_frame.f_lineno = 188;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[19], tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 188;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_empty_jac) == NULL);
        Nuitka_Cell_SET(var_empty_jac, tmp_assign_source_3);

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_2;
        tmp_called_instance_3 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 190;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = const_int_0;
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_n);
        tmp_tuple_element_2 = var_n;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_2);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical->m_frame.f_lineno = 190;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[10], tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 190;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_empty_jac) == NULL);
        Nuitka_Cell_SET(var_empty_jac, tmp_assign_source_4);

    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(Nuitka_Cell_GET(par_ub));
        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(par_ub);
        tmp_expression_value_3 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 192;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[9]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 192;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 192;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_finite_ub) == NULL);
        Nuitka_Cell_SET(var_finite_ub, tmp_assign_source_5);

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_4 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 194;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_finite_ub));
        tmp_args_element_value_3 = Nuitka_Cell_GET(var_finite_ub);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical->m_frame.f_lineno = 194;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[61], tmp_args_element_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 194;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert(var_n_ineq == NULL);
        var_n_ineq = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        int tmp_truth_name_2;
        tmp_called_instance_5 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 196;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_finite_ub));
        tmp_args_element_value_4 = Nuitka_Cell_GET(var_finite_ub);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical->m_frame.f_lineno = 196;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[8], tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 196;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 196;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_7;
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_cfun;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_empty_fun;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_ub;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_7 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun(tstate, tmp_closure_1);

        assert(var_fun == NULL);
        var_fun = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        struct Nuitka_CellObject *tmp_closure_2[2];

        tmp_closure_2[0] = par_cfun;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = var_empty_jac;
        Py_INCREF(tmp_closure_2[1]);

        tmp_assign_source_8 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac(tstate, tmp_closure_2);

        assert(var_jac == NULL);
        var_jac = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        struct Nuitka_CellObject *tmp_closure_3[1];

        tmp_closure_3[0] = par_cfun;
        Py_INCREF(tmp_closure_3[0]);

        tmp_assign_source_9 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess(tstate, tmp_closure_3);

        assert(var_hess == NULL);
        var_hess = tmp_assign_source_9;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_subscript_value_1;
        tmp_called_instance_6 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 206;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_finite_ub));
        tmp_args_element_value_5 = Nuitka_Cell_GET(var_finite_ub);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical->m_frame.f_lineno = 206;
        tmp_expression_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts[65], tmp_args_element_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 206;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = const_int_0;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 206;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_finite_ub);
            Nuitka_Cell_SET(var_finite_ub, tmp_assign_source_10);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_keep_feasible);
        tmp_expression_value_5 = par_keep_feasible;
        CHECK_OBJECT(Nuitka_Cell_GET(var_finite_ub));
        tmp_subscript_value_2 = Nuitka_Cell_GET(var_finite_ub);
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 207;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_keep_feasible;
            assert(old != NULL);
            par_keep_feasible = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(Nuitka_Cell_GET(par_ub));
        tmp_expression_value_6 = Nuitka_Cell_GET(par_ub);
        CHECK_OBJECT(Nuitka_Cell_GET(var_finite_ub));
        tmp_subscript_value_3 = Nuitka_Cell_GET(var_finite_ub);
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 208;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_ub);
            Nuitka_Cell_SET(par_ub, tmp_assign_source_12);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        struct Nuitka_CellObject *tmp_closure_4[4];

        tmp_closure_4[0] = par_cfun;
        Py_INCREF(tmp_closure_4[0]);
        tmp_closure_4[1] = var_empty_fun;
        Py_INCREF(tmp_closure_4[1]);
        tmp_closure_4[2] = var_finite_ub;
        Py_INCREF(tmp_closure_4[2]);
        tmp_closure_4[3] = par_ub;
        Py_INCREF(tmp_closure_4[3]);

        tmp_assign_source_13 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun(tstate, tmp_closure_4);

        assert(var_fun == NULL);
        var_fun = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        struct Nuitka_CellObject *tmp_closure_5[3];

        tmp_closure_5[0] = par_cfun;
        Py_INCREF(tmp_closure_5[0]);
        tmp_closure_5[1] = var_empty_jac;
        Py_INCREF(tmp_closure_5[1]);
        tmp_closure_5[2] = var_finite_ub;
        Py_INCREF(tmp_closure_5[2]);

        tmp_assign_source_14 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac(tstate, tmp_closure_5);

        assert(var_jac == NULL);
        var_jac = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        struct Nuitka_CellObject *tmp_closure_6[2];

        tmp_closure_6[0] = par_cfun;
        Py_INCREF(tmp_closure_6[0]);
        tmp_closure_6[1] = var_finite_ub;
        Py_INCREF(tmp_closure_6[1]);

        tmp_assign_source_15 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess(tstate, tmp_closure_6);

        assert(var_hess == NULL);
        var_hess = tmp_assign_source_15;
    }
    branch_end_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(par_cls);
        tmp_called_value_1 = par_cls;
        tmp_args_element_value_6 = const_int_0;
        CHECK_OBJECT(var_n_ineq);
        tmp_args_element_value_7 = var_n_ineq;
        CHECK_OBJECT(var_fun);
        tmp_args_element_value_8 = var_fun;
        CHECK_OBJECT(var_jac);
        tmp_args_element_value_9 = var_jac;
        CHECK_OBJECT(var_hess);
        tmp_args_element_value_10 = var_hess;
        CHECK_OBJECT(par_keep_feasible);
        tmp_args_element_value_11 = par_keep_feasible;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 221;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical,
        type_description_1,
        par_cls,
        par_cfun,
        par_ub,
        par_keep_feasible,
        var_empty_fun,
        var_n,
        var_empty_jac,
        var_finite_ub,
        NULL,
        var_n_ineq,
        var_fun,
        var_jac,
        var_hess
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_ub);
    Py_DECREF(par_ub);
    par_ub = NULL;
    CHECK_OBJECT(par_keep_feasible);
    Py_DECREF(par_keep_feasible);
    par_keep_feasible = NULL;
    CHECK_OBJECT(var_empty_fun);
    Py_DECREF(var_empty_fun);
    var_empty_fun = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    CHECK_OBJECT(var_empty_jac);
    Py_DECREF(var_empty_jac);
    var_empty_jac = NULL;
    CHECK_OBJECT(var_finite_ub);
    Py_DECREF(var_finite_ub);
    var_finite_ub = NULL;
    CHECK_OBJECT(var_n_ineq);
    Py_DECREF(var_n_ineq);
    var_n_ineq = NULL;
    CHECK_OBJECT(var_fun);
    Py_DECREF(var_fun);
    var_fun = NULL;
    CHECK_OBJECT(var_jac);
    Py_DECREF(var_jac);
    var_jac = NULL;
    CHECK_OBJECT(var_hess);
    Py_DECREF(var_hess);
    var_hess = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(par_ub);
    Py_DECREF(par_ub);
    par_ub = NULL;
    Py_XDECREF(par_keep_feasible);
    par_keep_feasible = NULL;
    CHECK_OBJECT(var_empty_fun);
    Py_DECREF(var_empty_fun);
    var_empty_fun = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    CHECK_OBJECT(var_empty_jac);
    Py_DECREF(var_empty_jac);
    var_empty_jac = NULL;
    CHECK_OBJECT(var_finite_ub);
    Py_DECREF(var_finite_ub);
    var_finite_ub = NULL;
    Py_XDECREF(var_n_ineq);
    var_n_ineq = NULL;
    Py_XDECREF(var_fun);
    var_fun = NULL;
    Py_XDECREF(var_jac);
    var_jac = NULL;
    Py_XDECREF(var_hess);
    var_hess = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_cfun);
    Py_DECREF(par_cfun);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_cfun);
    Py_DECREF(par_cfun);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun = MAKE_FUNCTION_FRAME(tstate, code_objects_12c68fa3b4ce98b358fab408c4ab2146, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 198;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 198;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
            CHECK_OBJECT(par_x);
            tmp_args_element_value_1 = par_x;
            frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun->m_frame.f_lineno = 198;
            tmp_sub_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[2], tmp_args_element_value_1);
            if (tmp_sub_expr_left_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 198;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
                Py_DECREF(tmp_sub_expr_left_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[66]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 198;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }

            tmp_sub_expr_right_1 = Nuitka_Cell_GET(self->m_closure[2]);
            tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            Py_DECREF(tmp_sub_expr_left_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 198;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac = MAKE_FUNCTION_FRAME(tstate, code_objects_998f065d919490ecf892ef0afb5af8ba, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[27]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 201;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 201;
                type_description_1 = "occ";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
            CHECK_OBJECT(par_x);
            tmp_args_element_value_1 = par_x;
            frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac->m_frame.f_lineno = 201;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 201;
                type_description_1 = "occ";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_v_eq = python_pars[1];
    PyObject *par_v_ineq = python_pars[2];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess = MAKE_FUNCTION_FRAME(tstate, code_objects_0140448e44c3aba0ae1868f8351f3df8, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 204;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_v_ineq);
        tmp_args_element_value_2 = par_v_ineq;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[4],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess,
        type_description_1,
        par_x,
        par_v_eq,
        par_v_ineq,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v_eq);
    Py_DECREF(par_v_eq);
    CHECK_OBJECT(par_v_ineq);
    Py_DECREF(par_v_ineq);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v_eq);
    Py_DECREF(par_v_eq);
    CHECK_OBJECT(par_v_ineq);
    Py_DECREF(par_v_ineq);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun = MAKE_FUNCTION_FRAME(tstate, code_objects_c1cef28d0f389bf9e51c9b142c48c8c4, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 211;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_subscript_value_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 211;
                type_description_1 = "occcc";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
            CHECK_OBJECT(par_x);
            tmp_args_element_value_1 = par_x;
            frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun->m_frame.f_lineno = 211;
            tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[2], tmp_args_element_value_1);
            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 211;
                type_description_1 = "occcc";
                goto tuple_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
                Py_DECREF(tmp_expression_value_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[67]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 211;
                type_description_1 = "occcc";
                goto tuple_build_exception_1;
            }

            tmp_subscript_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
            tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_sub_expr_left_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 211;
                type_description_1 = "occcc";
                goto tuple_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
                Py_DECREF(tmp_sub_expr_left_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[66]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 211;
                type_description_1 = "occcc";
                goto tuple_build_exception_1;
            }

            tmp_sub_expr_right_1 = Nuitka_Cell_GET(self->m_closure[3]);
            tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            Py_DECREF(tmp_sub_expr_left_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 211;
                type_description_1 = "occcc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2],
        self->m_closure[3]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac = MAKE_FUNCTION_FRAME(tstate, code_objects_8efd0d22ade82386288dd21f40fadddc, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[27]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 214;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_subscript_value_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 214;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
            CHECK_OBJECT(par_x);
            tmp_args_element_value_1 = par_x;
            frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac->m_frame.f_lineno = 214;
            tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 214;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
                Py_DECREF(tmp_expression_value_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[67]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 214;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }

            tmp_subscript_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 214;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_v_eq = python_pars[1];
    PyObject *par_v_ineq = python_pars[2];
    PyObject *var_v = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess = MAKE_FUNCTION_FRAME(tstate, code_objects_33cccdcce2e219d1aa529a9b5d44ab17, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 217;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[68]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 217;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[69]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 217;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess->m_frame.f_lineno = 217;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        assert(var_v == NULL);
        var_v = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_v_ineq);
        tmp_ass_subvalue_1 = par_v_ineq;
        CHECK_OBJECT(var_v);
        tmp_ass_subscribed_1 = var_v;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[67]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 218;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 218;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 219;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        CHECK_OBJECT(var_v);
        tmp_args_element_value_3 = var_v;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[4],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 219;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess,
        type_description_1,
        par_x,
        par_v_eq,
        par_v_ineq,
        var_v,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_v);
    Py_DECREF(var_v);
    var_v = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_v);
    var_v = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v_eq);
    Py_DECREF(par_v_eq);
    CHECK_OBJECT(par_v_ineq);
    Py_DECREF(par_v_ineq);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v_eq);
    Py_DECREF(par_v_eq);
    CHECK_OBJECT(par_v_ineq);
    Py_DECREF(par_v_ineq);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_CellObject *par_cfun = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_lb = Nuitka_Cell_New1(python_pars[2]);
    PyObject *par_keep_feasible = python_pars[3];
    struct Nuitka_CellObject *var_empty_fun = Nuitka_Cell_NewEmpty();
    PyObject *var_n = NULL;
    struct Nuitka_CellObject *var_empty_jac = Nuitka_Cell_NewEmpty();
    struct Nuitka_CellObject *var_finite_lb = Nuitka_Cell_NewEmpty();
    PyObject *var_n_ineq = NULL;
    PyObject *var_fun = NULL;
    PyObject *var_jac = NULL;
    PyObject *var_hess = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical = MAKE_FUNCTION_FRAME(tstate, code_objects_b3872209a615de79ceafc884ba551f67, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 225;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical->m_frame.f_lineno = 225;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[17], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 225;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_empty_fun) == NULL);
        Nuitka_Cell_SET(var_empty_fun, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_cfun));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_cfun);
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[11]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 226;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert(var_n == NULL);
        var_n = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_cfun));
        tmp_expression_value_2 = Nuitka_Cell_GET(par_cfun);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[55]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 227;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 227;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_instance_2 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_sps(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[18]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 228;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = const_int_0;
        tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_n);
        tmp_tuple_element_1 = var_n;
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 1, tmp_tuple_element_1);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical->m_frame.f_lineno = 228;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[19], tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 228;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_empty_jac) == NULL);
        Nuitka_Cell_SET(var_empty_jac, tmp_assign_source_3);

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_2;
        tmp_called_instance_3 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 230;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = const_int_0;
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_n);
        tmp_tuple_element_2 = var_n;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_2);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical->m_frame.f_lineno = 230;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[10], tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 230;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_empty_jac) == NULL);
        Nuitka_Cell_SET(var_empty_jac, tmp_assign_source_4);

    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(Nuitka_Cell_GET(par_lb));
        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(par_lb);
        tmp_expression_value_3 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 232;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[9]);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 232;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 232;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 232;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_finite_lb) == NULL);
        Nuitka_Cell_SET(var_finite_lb, tmp_assign_source_5);

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_4 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 234;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_finite_lb));
        tmp_args_element_value_3 = Nuitka_Cell_GET(var_finite_lb);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical->m_frame.f_lineno = 234;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[61], tmp_args_element_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 234;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        assert(var_n_ineq == NULL);
        var_n_ineq = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        int tmp_truth_name_2;
        tmp_called_instance_5 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 236;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_finite_lb));
        tmp_args_element_value_4 = Nuitka_Cell_GET(var_finite_lb);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical->m_frame.f_lineno = 236;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[8], tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 236;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 236;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_7;
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_cfun;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_empty_fun;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_lb;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_7 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun(tstate, tmp_closure_1);

        assert(var_fun == NULL);
        var_fun = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        struct Nuitka_CellObject *tmp_closure_2[2];

        tmp_closure_2[0] = par_cfun;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = var_empty_jac;
        Py_INCREF(tmp_closure_2[1]);

        tmp_assign_source_8 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac(tstate, tmp_closure_2);

        assert(var_jac == NULL);
        var_jac = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        struct Nuitka_CellObject *tmp_closure_3[1];

        tmp_closure_3[0] = par_cfun;
        Py_INCREF(tmp_closure_3[0]);

        tmp_assign_source_9 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess(tstate, tmp_closure_3);

        assert(var_hess == NULL);
        var_hess = tmp_assign_source_9;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_subscript_value_1;
        tmp_called_instance_6 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 246;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_finite_lb));
        tmp_args_element_value_5 = Nuitka_Cell_GET(var_finite_lb);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical->m_frame.f_lineno = 246;
        tmp_expression_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts[65], tmp_args_element_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 246;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = const_int_0;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 246;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_finite_lb);
            Nuitka_Cell_SET(var_finite_lb, tmp_assign_source_10);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_keep_feasible);
        tmp_expression_value_5 = par_keep_feasible;
        CHECK_OBJECT(Nuitka_Cell_GET(var_finite_lb));
        tmp_subscript_value_2 = Nuitka_Cell_GET(var_finite_lb);
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 247;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_keep_feasible;
            assert(old != NULL);
            par_keep_feasible = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(Nuitka_Cell_GET(par_lb));
        tmp_expression_value_6 = Nuitka_Cell_GET(par_lb);
        CHECK_OBJECT(Nuitka_Cell_GET(var_finite_lb));
        tmp_subscript_value_3 = Nuitka_Cell_GET(var_finite_lb);
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 248;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_lb);
            Nuitka_Cell_SET(par_lb, tmp_assign_source_12);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        struct Nuitka_CellObject *tmp_closure_4[4];

        tmp_closure_4[0] = par_cfun;
        Py_INCREF(tmp_closure_4[0]);
        tmp_closure_4[1] = var_empty_fun;
        Py_INCREF(tmp_closure_4[1]);
        tmp_closure_4[2] = var_finite_lb;
        Py_INCREF(tmp_closure_4[2]);
        tmp_closure_4[3] = par_lb;
        Py_INCREF(tmp_closure_4[3]);

        tmp_assign_source_13 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun(tstate, tmp_closure_4);

        assert(var_fun == NULL);
        var_fun = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        struct Nuitka_CellObject *tmp_closure_5[3];

        tmp_closure_5[0] = par_cfun;
        Py_INCREF(tmp_closure_5[0]);
        tmp_closure_5[1] = var_empty_jac;
        Py_INCREF(tmp_closure_5[1]);
        tmp_closure_5[2] = var_finite_lb;
        Py_INCREF(tmp_closure_5[2]);

        tmp_assign_source_14 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac(tstate, tmp_closure_5);

        assert(var_jac == NULL);
        var_jac = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        struct Nuitka_CellObject *tmp_closure_6[2];

        tmp_closure_6[0] = par_cfun;
        Py_INCREF(tmp_closure_6[0]);
        tmp_closure_6[1] = var_finite_lb;
        Py_INCREF(tmp_closure_6[1]);

        tmp_assign_source_15 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess(tstate, tmp_closure_6);

        assert(var_hess == NULL);
        var_hess = tmp_assign_source_15;
    }
    branch_end_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(par_cls);
        tmp_called_value_1 = par_cls;
        tmp_args_element_value_6 = const_int_0;
        CHECK_OBJECT(var_n_ineq);
        tmp_args_element_value_7 = var_n_ineq;
        CHECK_OBJECT(var_fun);
        tmp_args_element_value_8 = var_fun;
        CHECK_OBJECT(var_jac);
        tmp_args_element_value_9 = var_jac;
        CHECK_OBJECT(var_hess);
        tmp_args_element_value_10 = var_hess;
        CHECK_OBJECT(par_keep_feasible);
        tmp_args_element_value_11 = par_keep_feasible;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical->m_frame.f_lineno = 261;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 261;
            type_description_1 = "occococcNoooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical,
        type_description_1,
        par_cls,
        par_cfun,
        par_lb,
        par_keep_feasible,
        var_empty_fun,
        var_n,
        var_empty_jac,
        var_finite_lb,
        NULL,
        var_n_ineq,
        var_fun,
        var_jac,
        var_hess
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_lb);
    Py_DECREF(par_lb);
    par_lb = NULL;
    CHECK_OBJECT(par_keep_feasible);
    Py_DECREF(par_keep_feasible);
    par_keep_feasible = NULL;
    CHECK_OBJECT(var_empty_fun);
    Py_DECREF(var_empty_fun);
    var_empty_fun = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    CHECK_OBJECT(var_empty_jac);
    Py_DECREF(var_empty_jac);
    var_empty_jac = NULL;
    CHECK_OBJECT(var_finite_lb);
    Py_DECREF(var_finite_lb);
    var_finite_lb = NULL;
    CHECK_OBJECT(var_n_ineq);
    Py_DECREF(var_n_ineq);
    var_n_ineq = NULL;
    CHECK_OBJECT(var_fun);
    Py_DECREF(var_fun);
    var_fun = NULL;
    CHECK_OBJECT(var_jac);
    Py_DECREF(var_jac);
    var_jac = NULL;
    CHECK_OBJECT(var_hess);
    Py_DECREF(var_hess);
    var_hess = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(par_lb);
    Py_DECREF(par_lb);
    par_lb = NULL;
    Py_XDECREF(par_keep_feasible);
    par_keep_feasible = NULL;
    CHECK_OBJECT(var_empty_fun);
    Py_DECREF(var_empty_fun);
    var_empty_fun = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    CHECK_OBJECT(var_empty_jac);
    Py_DECREF(var_empty_jac);
    var_empty_jac = NULL;
    CHECK_OBJECT(var_finite_lb);
    Py_DECREF(var_finite_lb);
    var_finite_lb = NULL;
    Py_XDECREF(var_n_ineq);
    var_n_ineq = NULL;
    Py_XDECREF(var_fun);
    var_fun = NULL;
    Py_XDECREF(var_jac);
    var_jac = NULL;
    Py_XDECREF(var_hess);
    var_hess = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_cfun);
    Py_DECREF(par_cfun);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_cfun);
    Py_DECREF(par_cfun);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun = MAKE_FUNCTION_FRAME(tstate, code_objects_42f3ff34b814bbf924164cccf1eca905, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 238;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[73]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 238;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }

            tmp_sub_expr_left_1 = Nuitka_Cell_GET(self->m_closure[2]);
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 238;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
            CHECK_OBJECT(par_x);
            tmp_args_element_value_1 = par_x;
            frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun->m_frame.f_lineno = 238;
            tmp_sub_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[2], tmp_args_element_value_1);
            if (tmp_sub_expr_right_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 238;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            Py_DECREF(tmp_sub_expr_right_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 238;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac = MAKE_FUNCTION_FRAME(tstate, code_objects_08796eecfba1646893ca1bb0c2a7df79, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[27]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 241;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_operand_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 241;
                type_description_1 = "occ";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
            CHECK_OBJECT(par_x);
            tmp_args_element_value_1 = par_x;
            frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac->m_frame.f_lineno = 241;
            tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
            if (tmp_operand_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 241;
                type_description_1 = "occ";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
            Py_DECREF(tmp_operand_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 241;
                type_description_1 = "occ";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_v_eq = python_pars[1];
    PyObject *par_v_ineq = python_pars[2];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess = MAKE_FUNCTION_FRAME(tstate, code_objects_a891cccc0d38f665b406f044a2fc3b23, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_operand_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 244;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 244;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_v_ineq);
        tmp_operand_value_1 = par_v_ineq;
        tmp_args_element_value_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 244;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 244;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess,
        type_description_1,
        par_x,
        par_v_eq,
        par_v_ineq,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v_eq);
    Py_DECREF(par_v_eq);
    CHECK_OBJECT(par_v_ineq);
    Py_DECREF(par_v_ineq);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v_eq);
    Py_DECREF(par_v_eq);
    CHECK_OBJECT(par_v_ineq);
    Py_DECREF(par_v_ineq);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun = MAKE_FUNCTION_FRAME(tstate, code_objects_86597c8e1e06e65fd989bb3b78714f15, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 251;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_subscript_value_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[73]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 251;
                type_description_1 = "occcc";
                goto tuple_build_exception_1;
            }

            tmp_sub_expr_left_1 = Nuitka_Cell_GET(self->m_closure[3]);
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 251;
                type_description_1 = "occcc";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
            CHECK_OBJECT(par_x);
            tmp_args_element_value_1 = par_x;
            frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun->m_frame.f_lineno = 251;
            tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[2], tmp_args_element_value_1);
            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 251;
                type_description_1 = "occcc";
                goto tuple_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
                Py_DECREF(tmp_expression_value_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[74]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 251;
                type_description_1 = "occcc";
                goto tuple_build_exception_1;
            }

            tmp_subscript_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
            tmp_sub_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_sub_expr_right_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 251;
                type_description_1 = "occcc";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            Py_DECREF(tmp_sub_expr_right_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 251;
                type_description_1 = "occcc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[3],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac = MAKE_FUNCTION_FRAME(tstate, code_objects_22b98d6746aa1dbe539f8d2d9850a8a4, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[27]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 254;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_operand_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_subscript_value_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 254;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
            CHECK_OBJECT(par_x);
            tmp_args_element_value_1 = par_x;
            frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac->m_frame.f_lineno = 254;
            tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 254;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
                Py_DECREF(tmp_expression_value_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[74]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 254;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }

            tmp_subscript_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
            tmp_operand_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_operand_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 254;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
            Py_DECREF(tmp_operand_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 254;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_v_eq = python_pars[1];
    PyObject *par_v_ineq = python_pars[2];
    PyObject *var_v = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess = MAKE_FUNCTION_FRAME(tstate, code_objects_efb7d3ad3e5a3a49533826b106b7c12d, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 257;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[68]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 257;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 257;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[69]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 257;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess->m_frame.f_lineno = 257;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 257;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        assert(var_v == NULL);
        var_v = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_v_ineq);
        tmp_operand_value_1 = par_v_ineq;
        tmp_ass_subvalue_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 258;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_v);
        tmp_ass_subscribed_1 = var_v;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[74]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 258;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 258;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 259;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        CHECK_OBJECT(var_v);
        tmp_args_element_value_3 = var_v;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess->m_frame.f_lineno = 259;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[4],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 259;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess,
        type_description_1,
        par_x,
        par_v_eq,
        par_v_ineq,
        var_v,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_v);
    Py_DECREF(var_v);
    var_v = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_v);
    var_v = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v_eq);
    Py_DECREF(par_v_eq);
    CHECK_OBJECT(par_v_ineq);
    Py_DECREF(par_v_ineq);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v_eq);
    Py_DECREF(par_v_eq);
    CHECK_OBJECT(par_v_ineq);
    Py_DECREF(par_v_ineq);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_CellObject *par_cfun = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_lb = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_ub = Nuitka_Cell_New1(python_pars[3]);
    PyObject *par_keep_feasible = python_pars[4];
    PyObject *var_lb_inf = NULL;
    PyObject *var_ub_inf = NULL;
    struct Nuitka_CellObject *var_equal = Nuitka_Cell_NewEmpty();
    struct Nuitka_CellObject *var_less = Nuitka_Cell_NewEmpty();
    struct Nuitka_CellObject *var_greater = Nuitka_Cell_NewEmpty();
    struct Nuitka_CellObject *var_interval = Nuitka_Cell_NewEmpty();
    struct Nuitka_CellObject *var_n_less = Nuitka_Cell_NewEmpty();
    struct Nuitka_CellObject *var_n_greater = Nuitka_Cell_NewEmpty();
    struct Nuitka_CellObject *var_n_interval = Nuitka_Cell_NewEmpty();
    PyObject *var_n_ineq = NULL;
    PyObject *var_n_eq = NULL;
    PyObject *var_fun = NULL;
    PyObject *var_jac = NULL;
    PyObject *var_hess = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical = MAKE_FUNCTION_FRAME(tstate, code_objects_f9414011e1931761ade5a837b16baef3, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_lb));
        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(par_lb);
        tmp_expression_value_1 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 265;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[9]);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 265;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 265;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 265;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert(var_lb_inf == NULL);
        var_lb_inf = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_ub));
        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(par_ub);
        tmp_expression_value_2 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 266;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[9]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 266;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 266;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ub_inf == NULL);
        var_ub_inf = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(Nuitka_Cell_GET(par_lb));
        tmp_cmp_expr_left_3 = Nuitka_Cell_GET(par_lb);
        CHECK_OBJECT(Nuitka_Cell_GET(par_ub));
        tmp_cmp_expr_right_3 = Nuitka_Cell_GET(par_ub);
        tmp_assign_source_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 267;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_equal) == NULL);
        Nuitka_Cell_SET(var_equal, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(var_lb_inf);
        tmp_bitand_expr_left_1 = var_lb_inf;
        CHECK_OBJECT(var_ub_inf);
        tmp_operand_value_2 = var_ub_inf;
        tmp_bitand_expr_right_1 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_2);
        if (tmp_bitand_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 268;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_right_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 268;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_less) == NULL);
        Nuitka_Cell_SET(var_less, tmp_assign_source_4);

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        PyObject *tmp_operand_value_3;
        CHECK_OBJECT(var_ub_inf);
        tmp_bitand_expr_left_2 = var_ub_inf;
        CHECK_OBJECT(var_lb_inf);
        tmp_operand_value_3 = var_lb_inf;
        tmp_bitand_expr_right_2 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_3);
        if (tmp_bitand_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 269;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        Py_DECREF(tmp_bitand_expr_right_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 269;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_greater) == NULL);
        Nuitka_Cell_SET(var_greater, tmp_assign_source_5);

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_bitand_expr_left_3;
        PyObject *tmp_bitand_expr_right_3;
        PyObject *tmp_bitand_expr_left_4;
        PyObject *tmp_bitand_expr_right_4;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_operand_value_6;
        CHECK_OBJECT(Nuitka_Cell_GET(var_equal));
        tmp_operand_value_4 = Nuitka_Cell_GET(var_equal);
        tmp_bitand_expr_left_4 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_4);
        if (tmp_bitand_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 270;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lb_inf);
        tmp_operand_value_5 = var_lb_inf;
        tmp_bitand_expr_right_4 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_5);
        if (tmp_bitand_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitand_expr_left_4);

            exception_lineno = 270;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_left_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_4, tmp_bitand_expr_right_4);
        Py_DECREF(tmp_bitand_expr_left_4);
        Py_DECREF(tmp_bitand_expr_right_4);
        if (tmp_bitand_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 270;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ub_inf);
        tmp_operand_value_6 = var_ub_inf;
        tmp_bitand_expr_right_3 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_6);
        if (tmp_bitand_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitand_expr_left_3);

            exception_lineno = 270;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
        Py_DECREF(tmp_bitand_expr_left_3);
        Py_DECREF(tmp_bitand_expr_right_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 270;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_interval) == NULL);
        Nuitka_Cell_SET(var_interval, tmp_assign_source_6);

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_called_instance_1 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 272;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_equal));
        tmp_args_element_value_1 = Nuitka_Cell_GET(var_equal);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical->m_frame.f_lineno = 272;
        tmp_expression_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[65], tmp_args_element_value_1);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 272;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = const_int_0;
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 272;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_equal);
            Nuitka_Cell_SET(var_equal, tmp_assign_source_7);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_called_instance_2 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 273;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_less));
        tmp_args_element_value_2 = Nuitka_Cell_GET(var_less);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical->m_frame.f_lineno = 273;
        tmp_expression_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[65], tmp_args_element_value_2);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 273;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = const_int_0;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 273;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_less);
            Nuitka_Cell_SET(var_less, tmp_assign_source_8);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_subscript_value_3;
        tmp_called_instance_3 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 274;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_greater));
        tmp_args_element_value_3 = Nuitka_Cell_GET(var_greater);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical->m_frame.f_lineno = 274;
        tmp_expression_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[65], tmp_args_element_value_3);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 274;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = const_int_0;
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 0);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 274;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_greater);
            Nuitka_Cell_SET(var_greater, tmp_assign_source_9);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_subscript_value_4;
        tmp_called_instance_4 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 275;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_interval));
        tmp_args_element_value_4 = Nuitka_Cell_GET(var_interval);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical->m_frame.f_lineno = 275;
        tmp_expression_value_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[65], tmp_args_element_value_4);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 275;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = const_int_0;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_4, 0);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 275;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_interval);
            Nuitka_Cell_SET(var_interval, tmp_assign_source_10);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(Nuitka_Cell_GET(var_less));
        tmp_expression_value_8 = Nuitka_Cell_GET(var_less);
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[44]);
        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 276;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = const_int_0;
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_5, 0);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 276;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_n_less) == NULL);
        Nuitka_Cell_SET(var_n_less, tmp_assign_source_11);

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(Nuitka_Cell_GET(var_greater));
        tmp_expression_value_10 = Nuitka_Cell_GET(var_greater);
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[44]);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 277;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = const_int_0;
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_6, 0);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 277;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_n_greater) == NULL);
        Nuitka_Cell_SET(var_n_greater, tmp_assign_source_12);

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(Nuitka_Cell_GET(var_interval));
        tmp_expression_value_12 = Nuitka_Cell_GET(var_interval);
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[44]);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 278;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = const_int_0;
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_7, 0);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 278;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_n_interval) == NULL);
        Nuitka_Cell_SET(var_n_interval, tmp_assign_source_13);

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_n_less));
        tmp_add_expr_left_2 = Nuitka_Cell_GET(var_n_less);
        CHECK_OBJECT(Nuitka_Cell_GET(var_n_greater));
        tmp_add_expr_right_2 = Nuitka_Cell_GET(var_n_greater);
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 279;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = mod_consts[75];
        CHECK_OBJECT(Nuitka_Cell_GET(var_n_interval));
        tmp_mult_expr_right_1 = Nuitka_Cell_GET(var_n_interval);
        tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 279;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 279;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n_ineq == NULL);
        var_n_ineq = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(Nuitka_Cell_GET(var_equal));
        tmp_expression_value_14 = Nuitka_Cell_GET(var_equal);
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[44]);
        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 280;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = const_int_0;
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_8, 0);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 280;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n_eq == NULL);
        var_n_eq = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_9;
        tmp_expression_value_15 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 282;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[34]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 282;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_keep_feasible);
        tmp_expression_value_16 = par_keep_feasible;
        CHECK_OBJECT(Nuitka_Cell_GET(var_less));
        tmp_subscript_value_9 = Nuitka_Cell_GET(var_less);
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_9);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 282;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = MAKE_TUPLE_EMPTY(tstate, 4);
        {
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_12;
            PyTuple_SET_ITEM(tmp_args_element_value_5, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_keep_feasible);
            tmp_expression_value_17 = par_keep_feasible;
            CHECK_OBJECT(Nuitka_Cell_GET(var_greater));
            tmp_subscript_value_10 = Nuitka_Cell_GET(var_greater);
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_10);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 283;
                type_description_1 = "occcooocccccccooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_5, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_keep_feasible);
            tmp_expression_value_18 = par_keep_feasible;
            CHECK_OBJECT(Nuitka_Cell_GET(var_interval));
            tmp_subscript_value_11 = Nuitka_Cell_GET(var_interval);
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_11);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 284;
                type_description_1 = "occcooocccccccooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_5, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_keep_feasible);
            tmp_expression_value_19 = par_keep_feasible;
            CHECK_OBJECT(Nuitka_Cell_GET(var_interval));
            tmp_subscript_value_12 = Nuitka_Cell_GET(var_interval);
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_12);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 285;
                type_description_1 = "occcooocccccccooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_5, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical->m_frame.f_lineno = 282;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 282;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_keep_feasible;
            assert(old != NULL);
            par_keep_feasible = tmp_assign_source_16;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        struct Nuitka_CellObject *tmp_closure_1[7];

        tmp_closure_1[0] = par_cfun;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_equal;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = var_greater;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = var_interval;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_lb;
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = var_less;
        Py_INCREF(tmp_closure_1[5]);
        tmp_closure_1[6] = par_ub;
        Py_INCREF(tmp_closure_1[6]);

        tmp_assign_source_17 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun(tstate, tmp_closure_1);

        assert(var_fun == NULL);
        var_fun = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        struct Nuitka_CellObject *tmp_closure_2[5];

        tmp_closure_2[0] = par_cfun;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = var_equal;
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = var_greater;
        Py_INCREF(tmp_closure_2[2]);
        tmp_closure_2[3] = var_interval;
        Py_INCREF(tmp_closure_2[3]);
        tmp_closure_2[4] = var_less;
        Py_INCREF(tmp_closure_2[4]);

        tmp_assign_source_18 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac(tstate, tmp_closure_2);

        assert(var_jac == NULL);
        var_jac = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        struct Nuitka_CellObject *tmp_closure_3[9];

        tmp_closure_3[0] = par_cfun;
        Py_INCREF(tmp_closure_3[0]);
        tmp_closure_3[1] = var_equal;
        Py_INCREF(tmp_closure_3[1]);
        tmp_closure_3[2] = var_greater;
        Py_INCREF(tmp_closure_3[2]);
        tmp_closure_3[3] = var_interval;
        Py_INCREF(tmp_closure_3[3]);
        tmp_closure_3[4] = par_lb;
        Py_INCREF(tmp_closure_3[4]);
        tmp_closure_3[5] = var_less;
        Py_INCREF(tmp_closure_3[5]);
        tmp_closure_3[6] = var_n_greater;
        Py_INCREF(tmp_closure_3[6]);
        tmp_closure_3[7] = var_n_interval;
        Py_INCREF(tmp_closure_3[7]);
        tmp_closure_3[8] = var_n_less;
        Py_INCREF(tmp_closure_3[8]);

        tmp_assign_source_19 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess(tstate, tmp_closure_3);

        assert(var_hess == NULL);
        var_hess = tmp_assign_source_19;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(par_cls);
        tmp_called_value_2 = par_cls;
        CHECK_OBJECT(var_n_eq);
        tmp_args_element_value_6 = var_n_eq;
        CHECK_OBJECT(var_n_ineq);
        tmp_args_element_value_7 = var_n_ineq;
        CHECK_OBJECT(var_fun);
        tmp_args_element_value_8 = var_fun;
        CHECK_OBJECT(var_jac);
        tmp_args_element_value_9 = var_jac;
        CHECK_OBJECT(var_hess);
        tmp_args_element_value_10 = var_hess;
        CHECK_OBJECT(par_keep_feasible);
        tmp_args_element_value_11 = par_keep_feasible;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical->m_frame.f_lineno = 327;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 327;
            type_description_1 = "occcooocccccccooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical,
        type_description_1,
        par_cls,
        par_cfun,
        par_lb,
        par_ub,
        par_keep_feasible,
        var_lb_inf,
        var_ub_inf,
        var_equal,
        var_less,
        var_greater,
        var_interval,
        var_n_less,
        var_n_greater,
        var_n_interval,
        var_n_ineq,
        var_n_eq,
        var_fun,
        var_jac,
        var_hess
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_keep_feasible);
    Py_DECREF(par_keep_feasible);
    par_keep_feasible = NULL;
    CHECK_OBJECT(var_lb_inf);
    Py_DECREF(var_lb_inf);
    var_lb_inf = NULL;
    CHECK_OBJECT(var_ub_inf);
    Py_DECREF(var_ub_inf);
    var_ub_inf = NULL;
    CHECK_OBJECT(var_equal);
    Py_DECREF(var_equal);
    var_equal = NULL;
    CHECK_OBJECT(var_less);
    Py_DECREF(var_less);
    var_less = NULL;
    CHECK_OBJECT(var_greater);
    Py_DECREF(var_greater);
    var_greater = NULL;
    CHECK_OBJECT(var_interval);
    Py_DECREF(var_interval);
    var_interval = NULL;
    CHECK_OBJECT(var_n_less);
    Py_DECREF(var_n_less);
    var_n_less = NULL;
    CHECK_OBJECT(var_n_greater);
    Py_DECREF(var_n_greater);
    var_n_greater = NULL;
    CHECK_OBJECT(var_n_interval);
    Py_DECREF(var_n_interval);
    var_n_interval = NULL;
    CHECK_OBJECT(var_n_ineq);
    Py_DECREF(var_n_ineq);
    var_n_ineq = NULL;
    CHECK_OBJECT(var_n_eq);
    Py_DECREF(var_n_eq);
    var_n_eq = NULL;
    CHECK_OBJECT(var_fun);
    Py_DECREF(var_fun);
    var_fun = NULL;
    CHECK_OBJECT(var_jac);
    Py_DECREF(var_jac);
    var_jac = NULL;
    CHECK_OBJECT(var_hess);
    Py_DECREF(var_hess);
    var_hess = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(par_keep_feasible);
    par_keep_feasible = NULL;
    Py_XDECREF(var_lb_inf);
    var_lb_inf = NULL;
    Py_XDECREF(var_ub_inf);
    var_ub_inf = NULL;
    CHECK_OBJECT(var_equal);
    Py_DECREF(var_equal);
    var_equal = NULL;
    CHECK_OBJECT(var_less);
    Py_DECREF(var_less);
    var_less = NULL;
    CHECK_OBJECT(var_greater);
    Py_DECREF(var_greater);
    var_greater = NULL;
    CHECK_OBJECT(var_interval);
    Py_DECREF(var_interval);
    var_interval = NULL;
    CHECK_OBJECT(var_n_less);
    Py_DECREF(var_n_less);
    var_n_less = NULL;
    CHECK_OBJECT(var_n_greater);
    Py_DECREF(var_n_greater);
    var_n_greater = NULL;
    CHECK_OBJECT(var_n_interval);
    Py_DECREF(var_n_interval);
    var_n_interval = NULL;
    Py_XDECREF(var_n_ineq);
    var_n_ineq = NULL;
    Py_XDECREF(var_n_eq);
    var_n_eq = NULL;
    Py_XDECREF(var_fun);
    var_fun = NULL;
    Py_XDECREF(var_jac);
    var_jac = NULL;
    Py_XDECREF(var_hess);
    var_hess = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_cfun);
    Py_DECREF(par_cfun);
    CHECK_OBJECT(par_lb);
    Py_DECREF(par_lb);
    CHECK_OBJECT(par_ub);
    Py_DECREF(par_ub);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_cfun);
    Py_DECREF(par_cfun);
    CHECK_OBJECT(par_lb);
    Py_DECREF(par_lb);
    CHECK_OBJECT(par_ub);
    Py_DECREF(par_ub);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *var_f = NULL;
    PyObject *var_eq = NULL;
    PyObject *var_le = NULL;
    PyObject *var_ge = NULL;
    PyObject *var_il = NULL;
    PyObject *var_ig = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun = MAKE_FUNCTION_FRAME(tstate, code_objects_23eb8ca7abd1b88d7dc4ddfa34d5d3db, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 288;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun->m_frame.f_lineno = 288;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[2], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 288;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        assert(var_f == NULL);
        var_f = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_f);
        tmp_expression_value_1 = var_f;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 289;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 289;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[73]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 289;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[4]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 289;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_sub_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 289;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 289;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        assert(var_eq == NULL);
        var_eq = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_f);
        tmp_expression_value_3 = var_f;
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[80]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 290;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_3 = Nuitka_Cell_GET(self->m_closure[5]);
        tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 290;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[66]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 290;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[6]);
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[80]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 290;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_4 = Nuitka_Cell_GET(self->m_closure[5]);
        tmp_sub_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 290;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 290;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        assert(var_le == NULL);
        var_le = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_6;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[73]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 291;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[4]);
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 291;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_5 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_sub_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 291;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_f);
        tmp_expression_value_6 = var_f;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 291;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_6 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_sub_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
        if (tmp_sub_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_3);

            exception_lineno = 291;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        Py_DECREF(tmp_sub_expr_right_3);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 291;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        assert(var_ge == NULL);
        var_ge = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(var_f);
        tmp_expression_value_7 = var_f;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[82]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 292;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_7 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_sub_expr_left_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_7);
        if (tmp_sub_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 292;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[66]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 292;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(self->m_closure[6]);
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[82]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 292;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_8 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_sub_expr_right_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_8);
        if (tmp_sub_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);

            exception_lineno = 292;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        Py_DECREF(tmp_sub_expr_left_4);
        Py_DECREF(tmp_sub_expr_right_4);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 292;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        assert(var_il == NULL);
        var_il = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_10;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[73]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 293;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(self->m_closure[4]);
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[82]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 293;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_9 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_sub_expr_left_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_9);
        if (tmp_sub_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 293;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_f);
        tmp_expression_value_10 = var_f;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_5);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[82]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 293;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_10 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_sub_expr_right_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_10);
        if (tmp_sub_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_5);

            exception_lineno = 293;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        Py_DECREF(tmp_sub_expr_left_5);
        Py_DECREF(tmp_sub_expr_right_5);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 293;
            type_description_1 = "oooooooccccccc";
            goto frame_exception_exit_1;
        }
        assert(var_ig == NULL);
        var_ig = tmp_assign_source_6;
    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_eq);
        tmp_tuple_element_1 = var_eq;
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_tuple_element_2;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            tmp_called_instance_2 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
            if (unlikely(tmp_called_instance_2 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 294;
                type_description_1 = "oooooooccccccc";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_le);
            tmp_tuple_element_2 = var_le;
            tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 4);
            PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_ge);
            tmp_tuple_element_2 = var_ge;
            PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_2);
            CHECK_OBJECT(var_il);
            tmp_tuple_element_2 = var_il;
            PyTuple_SET_ITEM0(tmp_args_element_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(var_ig);
            tmp_tuple_element_2 = var_ig;
            PyTuple_SET_ITEM0(tmp_args_element_value_2, 3, tmp_tuple_element_2);
            frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun->m_frame.f_lineno = 294;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[34], tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 294;
                type_description_1 = "oooooooccccccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun,
        type_description_1,
        par_x,
        var_f,
        var_eq,
        var_le,
        var_ge,
        var_il,
        var_ig,
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[4],
        self->m_closure[5],
        self->m_closure[6],
        self->m_closure[2],
        self->m_closure[3]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_f);
    Py_DECREF(var_f);
    var_f = NULL;
    CHECK_OBJECT(var_eq);
    Py_DECREF(var_eq);
    var_eq = NULL;
    CHECK_OBJECT(var_le);
    Py_DECREF(var_le);
    var_le = NULL;
    CHECK_OBJECT(var_ge);
    Py_DECREF(var_ge);
    var_ge = NULL;
    CHECK_OBJECT(var_il);
    Py_DECREF(var_il);
    var_il = NULL;
    CHECK_OBJECT(var_ig);
    Py_DECREF(var_ig);
    var_ig = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_eq);
    var_eq = NULL;
    Py_XDECREF(var_le);
    var_le = NULL;
    Py_XDECREF(var_ge);
    var_ge = NULL;
    Py_XDECREF(var_il);
    var_il = NULL;
    Py_XDECREF(var_ig);
    var_ig = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *var_J = NULL;
    PyObject *var_eq = NULL;
    PyObject *var_le = NULL;
    PyObject *var_ge = NULL;
    PyObject *var_il = NULL;
    PyObject *var_ig = NULL;
    PyObject *var_ineq = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac = MAKE_FUNCTION_FRAME(tstate, code_objects_95f1c8401fb915f219e57db1b24f6db4, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 297;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac->m_frame.f_lineno = 297;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 297;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        assert(var_J == NULL);
        var_J = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_J);
        tmp_expression_value_1 = var_J;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 298;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 298;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        assert(var_eq == NULL);
        var_eq = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_J);
        tmp_expression_value_2 = var_J;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[80]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 299;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_2 = Nuitka_Cell_GET(self->m_closure[4]);
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 299;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        assert(var_le == NULL);
        var_le = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_J);
        tmp_expression_value_3 = var_J;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 300;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_3 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_operand_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 300;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 300;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        assert(var_ge == NULL);
        var_ge = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_J);
        tmp_expression_value_4 = var_J;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[82]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 301;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_4 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 301;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        assert(var_il == NULL);
        var_il = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(var_il);
        tmp_operand_value_2 = var_il;
        tmp_assign_source_6 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 302;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        assert(var_ig == NULL);
        var_ig = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        tmp_called_instance_2 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_sps(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[18]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 303;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_J);
        tmp_args_element_value_2 = var_J;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac->m_frame.f_lineno = 303;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[83], tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 303;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 303;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_tuple_element_1;
        tmp_called_instance_3 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_sps(tstate);
        if (unlikely(tmp_called_instance_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[18]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 304;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_le);
        tmp_tuple_element_1 = var_le;
        tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(tstate, 4);
        PyTuple_SET_ITEM0(tmp_args_element_value_3, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_ge);
        tmp_tuple_element_1 = var_ge;
        PyTuple_SET_ITEM0(tmp_args_element_value_3, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_il);
        tmp_tuple_element_1 = var_il;
        PyTuple_SET_ITEM0(tmp_args_element_value_3, 2, tmp_tuple_element_1);
        CHECK_OBJECT(var_ig);
        tmp_tuple_element_1 = var_ig;
        PyTuple_SET_ITEM0(tmp_args_element_value_3, 3, tmp_tuple_element_1);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac->m_frame.f_lineno = 304;
        tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[30], tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 304;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        assert(var_ineq == NULL);
        var_ineq = tmp_assign_source_7;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_tuple_element_2;
        tmp_called_instance_4 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 306;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_le);
        tmp_tuple_element_2 = var_le;
        tmp_args_element_value_4 = MAKE_TUPLE_EMPTY(tstate, 4);
        PyTuple_SET_ITEM0(tmp_args_element_value_4, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_ge);
        tmp_tuple_element_2 = var_ge;
        PyTuple_SET_ITEM0(tmp_args_element_value_4, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_il);
        tmp_tuple_element_2 = var_il;
        PyTuple_SET_ITEM0(tmp_args_element_value_4, 2, tmp_tuple_element_2);
        CHECK_OBJECT(var_ig);
        tmp_tuple_element_2 = var_ig;
        PyTuple_SET_ITEM0(tmp_args_element_value_4, 3, tmp_tuple_element_2);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac->m_frame.f_lineno = 306;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[30], tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 306;
            type_description_1 = "ooooooooccccc";
            goto frame_exception_exit_1;
        }
        assert(var_ineq == NULL);
        var_ineq = tmp_assign_source_8;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac,
        type_description_1,
        par_x,
        var_J,
        var_eq,
        var_le,
        var_ge,
        var_il,
        var_ig,
        var_ineq,
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[4],
        self->m_closure[2],
        self->m_closure[3]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(var_eq);
        tmp_tuple_element_3 = var_eq;
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_ineq);
        tmp_tuple_element_3 = var_ineq;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_J);
    Py_DECREF(var_J);
    var_J = NULL;
    CHECK_OBJECT(var_eq);
    Py_DECREF(var_eq);
    var_eq = NULL;
    Py_XDECREF(var_le);
    var_le = NULL;
    Py_XDECREF(var_ge);
    var_ge = NULL;
    CHECK_OBJECT(var_il);
    Py_DECREF(var_il);
    var_il = NULL;
    Py_XDECREF(var_ig);
    var_ig = NULL;
    CHECK_OBJECT(var_ineq);
    Py_DECREF(var_ineq);
    var_ineq = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_J);
    var_J = NULL;
    Py_XDECREF(var_eq);
    var_eq = NULL;
    Py_XDECREF(var_le);
    var_le = NULL;
    Py_XDECREF(var_ge);
    var_ge = NULL;
    Py_XDECREF(var_il);
    var_il = NULL;
    Py_XDECREF(var_ig);
    var_ig = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_v_eq = python_pars[1];
    PyObject *par_v_ineq = python_pars[2];
    PyObject *var_n_start = NULL;
    PyObject *var_v_l = NULL;
    PyObject *var_v_g = NULL;
    PyObject *var_v_il = NULL;
    PyObject *var_v_ig = NULL;
    PyObject *var_v = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_0;
        assert(var_n_start == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_n_start = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess = MAKE_FUNCTION_FRAME(tstate, code_objects_d364ccfe10b805bb22d590b5f4146f05, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_v_ineq);
        tmp_expression_value_1 = par_v_ineq;
        CHECK_OBJECT(var_n_start);
        tmp_start_value_1 = var_n_start;
        CHECK_OBJECT(var_n_start);
        tmp_add_expr_left_1 = var_n_start;
        if (Nuitka_Cell_GET(self->m_closure[8]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[84]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 311;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_1 = Nuitka_Cell_GET(self->m_closure[8]);
        tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_stop_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 311;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 311;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        assert(var_v_l == NULL);
        var_v_l = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(var_n_start);
        tmp_iadd_expr_left_1 = var_n_start;
        if (Nuitka_Cell_GET(self->m_closure[8]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[84]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 312;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_right_1 = Nuitka_Cell_GET(self->m_closure[8]);
        tmp_result = INPLACE_OPERATION_ADD_LONG_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 312;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_iadd_expr_left_1;
        var_n_start = tmp_assign_source_3;

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_start_value_2;
        PyObject *tmp_stop_value_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(par_v_ineq);
        tmp_expression_value_2 = par_v_ineq;
        CHECK_OBJECT(var_n_start);
        tmp_start_value_2 = var_n_start;
        CHECK_OBJECT(var_n_start);
        tmp_add_expr_left_2 = var_n_start;
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[85]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 313;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_2 = Nuitka_Cell_GET(self->m_closure[6]);
        tmp_stop_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_stop_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 313;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
        Py_DECREF(tmp_stop_value_2);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 313;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        assert(var_v_g == NULL);
        var_v_g = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        CHECK_OBJECT(var_n_start);
        tmp_iadd_expr_left_2 = var_n_start;
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[85]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 314;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_right_2 = Nuitka_Cell_GET(self->m_closure[6]);
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 314;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = tmp_iadd_expr_left_2;
        var_n_start = tmp_assign_source_5;

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_start_value_3;
        PyObject *tmp_stop_value_3;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        CHECK_OBJECT(par_v_ineq);
        tmp_expression_value_3 = par_v_ineq;
        CHECK_OBJECT(var_n_start);
        tmp_start_value_3 = var_n_start;
        CHECK_OBJECT(var_n_start);
        tmp_add_expr_left_3 = var_n_start;
        if (Nuitka_Cell_GET(self->m_closure[7]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[86]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 315;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_3 = Nuitka_Cell_GET(self->m_closure[7]);
        tmp_stop_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_stop_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 315;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_3, tmp_stop_value_3);
        Py_DECREF(tmp_stop_value_3);
        assert(!(tmp_subscript_value_3 == NULL));
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 315;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        assert(var_v_il == NULL);
        var_v_il = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        CHECK_OBJECT(var_n_start);
        tmp_iadd_expr_left_3 = var_n_start;
        if (Nuitka_Cell_GET(self->m_closure[7]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[86]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 316;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_right_3 = Nuitka_Cell_GET(self->m_closure[7]);
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 316;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = tmp_iadd_expr_left_3;
        var_n_start = tmp_assign_source_7;

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_start_value_4;
        PyObject *tmp_stop_value_4;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        CHECK_OBJECT(par_v_ineq);
        tmp_expression_value_4 = par_v_ineq;
        CHECK_OBJECT(var_n_start);
        tmp_start_value_4 = var_n_start;
        CHECK_OBJECT(var_n_start);
        tmp_add_expr_left_4 = var_n_start;
        if (Nuitka_Cell_GET(self->m_closure[7]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[86]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 317;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_4 = Nuitka_Cell_GET(self->m_closure[7]);
        tmp_stop_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_stop_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 317;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_4, tmp_stop_value_4);
        Py_DECREF(tmp_stop_value_4);
        assert(!(tmp_subscript_value_4 == NULL));
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 317;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        assert(var_v_ig == NULL);
        var_v_ig = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_5 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 319;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[48]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 319;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[73]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 319;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[4]);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess->m_frame.f_lineno = 319;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 319;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        assert(var_v == NULL);
        var_v = tmp_assign_source_9;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_v_eq);
        tmp_ass_subvalue_1 = par_v_eq;
        CHECK_OBJECT(var_v);
        tmp_ass_subscribed_1 = var_v;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 320;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 320;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_v_l);
        tmp_ass_subvalue_2 = var_v_l;
        CHECK_OBJECT(var_v);
        tmp_ass_subscribed_2 = var_v;
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[80]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 321;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_2 = Nuitka_Cell_GET(self->m_closure[5]);
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 321;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(var_v_g);
        tmp_operand_value_1 = var_v_g;
        tmp_ass_subvalue_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 322;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_v);
        tmp_ass_subscribed_3 = var_v;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 322;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_3 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 322;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT(var_v_il);
        tmp_sub_expr_left_1 = var_v_il;
        CHECK_OBJECT(var_v_ig);
        tmp_sub_expr_right_1 = var_v_ig;
        tmp_ass_subvalue_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 323;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_v);
        tmp_ass_subscribed_4 = var_v;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[82]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 323;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_4 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 323;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[59]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 325;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        CHECK_OBJECT(var_v);
        tmp_args_element_value_3 = var_v;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess->m_frame.f_lineno = 325;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[4],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 325;
            type_description_1 = "oooooooooccccccccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess,
        type_description_1,
        par_x,
        par_v_eq,
        par_v_ineq,
        var_n_start,
        var_v_l,
        var_v_g,
        var_v_il,
        var_v_ig,
        var_v,
        self->m_closure[8],
        self->m_closure[6],
        self->m_closure[7],
        self->m_closure[4],
        self->m_closure[1],
        self->m_closure[5],
        self->m_closure[2],
        self->m_closure[3],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_n_start);
    Py_DECREF(var_n_start);
    var_n_start = NULL;
    CHECK_OBJECT(var_v_l);
    Py_DECREF(var_v_l);
    var_v_l = NULL;
    CHECK_OBJECT(var_v_g);
    Py_DECREF(var_v_g);
    var_v_g = NULL;
    CHECK_OBJECT(var_v_il);
    Py_DECREF(var_v_il);
    var_v_il = NULL;
    CHECK_OBJECT(var_v_ig);
    Py_DECREF(var_v_ig);
    var_v_ig = NULL;
    CHECK_OBJECT(var_v);
    Py_DECREF(var_v);
    var_v = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_n_start);
    var_n_start = NULL;
    Py_XDECREF(var_v_l);
    var_v_l = NULL;
    Py_XDECREF(var_v_g);
    var_v_g = NULL;
    Py_XDECREF(var_v_il);
    var_v_il = NULL;
    Py_XDECREF(var_v_ig);
    var_v_ig = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v_eq);
    Py_DECREF(par_v_eq);
    CHECK_OBJECT(par_v_ineq);
    Py_DECREF(par_v_ineq);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v_eq);
    Py_DECREF(par_v_eq);
    CHECK_OBJECT(par_v_ineq);
    Py_DECREF(par_v_ineq);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    PyObject *par_prepared_constraints = python_pars[1];
    PyObject *par_sparse_jacobian = python_pars[2];
    PyObject *var_c_eq = NULL;
    PyObject *var_c_ineq = NULL;
    PyObject *var_J_eq = NULL;
    PyObject *var_J_ineq = NULL;
    PyObject *var_c = NULL;
    PyObject *var_f = NULL;
    PyObject *var_J = NULL;
    PyObject *var_lb = NULL;
    PyObject *var_ub = NULL;
    PyObject *var_finite_ub = NULL;
    PyObject *var_finite_lb = NULL;
    PyObject *var_lb_inf = NULL;
    PyObject *var_ub_inf = NULL;
    PyObject *var_equal = NULL;
    PyObject *var_less = NULL;
    PyObject *var_greater = NULL;
    PyObject *var_interval = NULL;
    PyObject *var_vstack = NULL;
    PyObject *var_empty = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
        assert(var_c_eq == NULL);
        var_c_eq = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
        assert(var_c_ineq == NULL);
        var_c_ineq = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
        assert(var_J_eq == NULL);
        var_J_eq = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
        assert(var_J_ineq == NULL);
        var_J_ineq = tmp_assign_source_4;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical = MAKE_FUNCTION_FRAME(tstate, code_objects_433d384ad16f219b3837f5333736c9be, module_scipy$optimize$_trustregion_constr$canonical_constraint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical->m_type_description == NULL);
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical = cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_prepared_constraints);
        tmp_iter_arg_1 = par_prepared_constraints;
        tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 342;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "oooooooooooooooooooooo";
                exception_lineno = 342;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_7;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_c);
        tmp_expression_value_2 = var_c;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[2]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 343;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[87]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 343;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_f;
            var_f = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_c);
        tmp_expression_value_4 = var_c;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[2]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 344;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[88]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 344;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_J;
            var_J = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_c);
        tmp_expression_value_5 = var_c;
        tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[6]);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_lb;
            var_lb = tmp_assign_source_13;
            Py_INCREF(var_lb);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_ub;
            var_ub = tmp_assign_source_14;
            Py_INCREF(var_ub);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        int tmp_truth_name_1;
        tmp_expression_value_6 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_lb);
        tmp_cmp_expr_left_1 = var_lb;
        CHECK_OBJECT(var_ub);
        tmp_cmp_expr_right_1 = var_ub;
        tmp_args_element_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical->m_frame.f_lineno = 346;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        if (var_c_eq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[89]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 347;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_list_arg_value_1 = var_c_eq;
        CHECK_OBJECT(var_f);
        tmp_sub_expr_left_1 = var_f;
        CHECK_OBJECT(var_lb);
        tmp_sub_expr_right_1 = var_lb;
        tmp_item_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_item_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 347;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        if (var_J_eq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[90]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 348;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_list_arg_value_2 = var_J_eq;
        CHECK_OBJECT(var_J);
        tmp_item_value_2 = var_J;
        tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_8;
        int tmp_truth_name_2;
        tmp_expression_value_7 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 349;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[8]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 349;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_lb);
        tmp_cmp_expr_left_2 = var_lb;
        tmp_expression_value_8 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_2);

            exception_lineno = 349;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[9]);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 349;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 349;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 349;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical->m_frame.f_lineno = 349;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 349;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 349;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_ub);
        tmp_cmp_expr_left_3 = var_ub;
        tmp_expression_value_9 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 350;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[9]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 350;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_15 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 350;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_finite_ub;
            var_finite_ub = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_list_arg_value_3;
        PyObject *tmp_item_value_3;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_2;
        if (var_c_ineq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[91]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 351;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_list_arg_value_3 = var_c_ineq;
        CHECK_OBJECT(var_f);
        tmp_expression_value_10 = var_f;
        CHECK_OBJECT(var_finite_ub);
        tmp_subscript_value_1 = var_finite_ub;
        tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_1);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 351;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ub);
        tmp_expression_value_11 = var_ub;
        CHECK_OBJECT(var_finite_ub);
        tmp_subscript_value_2 = var_finite_ub;
        tmp_sub_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_2);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 351;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_item_value_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_item_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 351;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_3);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_list_arg_value_4;
        PyObject *tmp_item_value_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_3;
        if (var_J_ineq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[92]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 352;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_list_arg_value_4 = var_J_ineq;
        CHECK_OBJECT(var_J);
        tmp_expression_value_12 = var_J;
        CHECK_OBJECT(var_finite_ub);
        tmp_subscript_value_3 = var_finite_ub;
        tmp_item_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_3);
        if (tmp_item_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 352;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_4, tmp_item_value_4);
        assert(!(tmp_result == false));
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_14;
        int tmp_truth_name_3;
        tmp_expression_value_13 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 353;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[8]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 353;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ub);
        tmp_cmp_expr_left_4 = var_ub;
        tmp_expression_value_14 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_3);

            exception_lineno = 353;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[9]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 353;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 353;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical->m_frame.f_lineno = 353;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 353;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 353;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(var_lb);
        tmp_cmp_expr_left_5 = var_lb;
        tmp_expression_value_15 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[9]);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_5 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_16 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_finite_lb;
            var_finite_lb = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_list_arg_value_5;
        PyObject *tmp_item_value_5;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_5;
        if (var_c_ineq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[91]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 355;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_list_arg_value_5 = var_c_ineq;
        CHECK_OBJECT(var_lb);
        tmp_expression_value_16 = var_lb;
        CHECK_OBJECT(var_finite_lb);
        tmp_subscript_value_4 = var_finite_lb;
        tmp_sub_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_4);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 355;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_f);
        tmp_expression_value_17 = var_f;
        CHECK_OBJECT(var_finite_lb);
        tmp_subscript_value_5 = var_finite_lb;
        tmp_sub_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_5);
        if (tmp_sub_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_3);

            exception_lineno = 355;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_item_value_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        Py_DECREF(tmp_sub_expr_right_3);
        if (tmp_item_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 355;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_5, tmp_item_value_5);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_list_arg_value_6;
        PyObject *tmp_item_value_6;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_6;
        if (var_J_ineq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[92]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_list_arg_value_6 = var_J_ineq;
        CHECK_OBJECT(var_J);
        tmp_expression_value_18 = var_J;
        CHECK_OBJECT(var_finite_lb);
        tmp_subscript_value_6 = var_finite_lb;
        tmp_operand_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_6);
        if (tmp_operand_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_item_value_6 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_item_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 356;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_6, tmp_item_value_6);
        assert(!(tmp_result == false));
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(var_lb);
        tmp_cmp_expr_left_6 = var_lb;
        tmp_expression_value_19 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[9]);
        if (tmp_operand_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_6 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_cmp_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_17 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_lb_inf;
            var_lb_inf = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(var_ub);
        tmp_cmp_expr_left_7 = var_ub;
        tmp_expression_value_20 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 359;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[9]);
        if (tmp_cmp_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 359;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_18 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_right_7);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 359;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_ub_inf;
            var_ub_inf = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_lb);
        tmp_cmp_expr_left_8 = var_lb;
        CHECK_OBJECT(var_ub);
        tmp_cmp_expr_right_8 = var_ub;
        tmp_assign_source_19 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 360;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_equal;
            var_equal = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_operand_value_5;
        CHECK_OBJECT(var_lb_inf);
        tmp_bitand_expr_left_1 = var_lb_inf;
        CHECK_OBJECT(var_ub_inf);
        tmp_operand_value_5 = var_ub_inf;
        tmp_bitand_expr_right_1 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_5);
        if (tmp_bitand_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 361;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_20 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_right_1);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 361;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_less;
            var_less = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        PyObject *tmp_operand_value_6;
        CHECK_OBJECT(var_ub_inf);
        tmp_bitand_expr_left_2 = var_ub_inf;
        CHECK_OBJECT(var_lb_inf);
        tmp_operand_value_6 = var_lb_inf;
        tmp_bitand_expr_right_2 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_6);
        if (tmp_bitand_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_21 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        Py_DECREF(tmp_bitand_expr_right_2);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_greater;
            var_greater = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_bitand_expr_left_3;
        PyObject *tmp_bitand_expr_right_3;
        PyObject *tmp_bitand_expr_left_4;
        PyObject *tmp_bitand_expr_right_4;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_operand_value_9;
        CHECK_OBJECT(var_equal);
        tmp_operand_value_7 = var_equal;
        tmp_bitand_expr_left_4 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_7);
        if (tmp_bitand_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 363;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_lb_inf);
        tmp_operand_value_8 = var_lb_inf;
        tmp_bitand_expr_right_4 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_8);
        if (tmp_bitand_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitand_expr_left_4);

            exception_lineno = 363;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_bitand_expr_left_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_4, tmp_bitand_expr_right_4);
        Py_DECREF(tmp_bitand_expr_left_4);
        Py_DECREF(tmp_bitand_expr_right_4);
        if (tmp_bitand_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 363;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ub_inf);
        tmp_operand_value_9 = var_ub_inf;
        tmp_bitand_expr_right_3 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_9);
        if (tmp_bitand_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_bitand_expr_left_3);

            exception_lineno = 363;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_22 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
        Py_DECREF(tmp_bitand_expr_left_3);
        Py_DECREF(tmp_bitand_expr_right_3);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 363;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_interval;
            var_interval = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_list_arg_value_7;
        PyObject *tmp_item_value_7;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_8;
        if (var_c_eq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[89]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 365;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_list_arg_value_7 = var_c_eq;
        CHECK_OBJECT(var_f);
        tmp_expression_value_21 = var_f;
        CHECK_OBJECT(var_equal);
        tmp_subscript_value_7 = var_equal;
        tmp_sub_expr_left_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_7);
        if (tmp_sub_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 365;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_lb);
        tmp_expression_value_22 = var_lb;
        CHECK_OBJECT(var_equal);
        tmp_subscript_value_8 = var_equal;
        tmp_sub_expr_right_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_8);
        if (tmp_sub_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);

            exception_lineno = 365;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_item_value_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        Py_DECREF(tmp_sub_expr_left_4);
        Py_DECREF(tmp_sub_expr_right_4);
        if (tmp_item_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 365;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_7, tmp_item_value_7);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_list_arg_value_8;
        PyObject *tmp_item_value_8;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_10;
        if (var_c_ineq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[91]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_list_arg_value_8 = var_c_ineq;
        CHECK_OBJECT(var_f);
        tmp_expression_value_23 = var_f;
        CHECK_OBJECT(var_less);
        tmp_subscript_value_9 = var_less;
        tmp_sub_expr_left_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_9);
        if (tmp_sub_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ub);
        tmp_expression_value_24 = var_ub;
        CHECK_OBJECT(var_less);
        tmp_subscript_value_10 = var_less;
        tmp_sub_expr_right_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_10);
        if (tmp_sub_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_5);

            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_item_value_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        Py_DECREF(tmp_sub_expr_left_5);
        Py_DECREF(tmp_sub_expr_right_5);
        if (tmp_item_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_8, tmp_item_value_8);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_sub_expr_left_6;
        PyObject *tmp_sub_expr_right_6;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_12;
        if (var_c_ineq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[91]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 367;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_25 = var_c_ineq;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[41]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 367;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_lb);
        tmp_expression_value_26 = var_lb;
        CHECK_OBJECT(var_greater);
        tmp_subscript_value_11 = var_greater;
        tmp_sub_expr_left_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_11);
        if (tmp_sub_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 367;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_f);
        tmp_expression_value_27 = var_f;
        CHECK_OBJECT(var_greater);
        tmp_subscript_value_12 = var_greater;
        tmp_sub_expr_right_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_12);
        if (tmp_sub_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_sub_expr_left_6);

            exception_lineno = 367;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
        Py_DECREF(tmp_sub_expr_left_6);
        Py_DECREF(tmp_sub_expr_right_6);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 367;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical->m_frame.f_lineno = 367;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 367;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_sub_expr_left_7;
        PyObject *tmp_sub_expr_right_7;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_14;
        if (var_c_ineq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[91]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 368;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_28 = var_c_ineq;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[41]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 368;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_f);
        tmp_expression_value_29 = var_f;
        CHECK_OBJECT(var_interval);
        tmp_subscript_value_13 = var_interval;
        tmp_sub_expr_left_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_13);
        if (tmp_sub_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 368;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ub);
        tmp_expression_value_30 = var_ub;
        CHECK_OBJECT(var_interval);
        tmp_subscript_value_14 = var_interval;
        tmp_sub_expr_right_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_14);
        if (tmp_sub_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_sub_expr_left_7);

            exception_lineno = 368;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
        Py_DECREF(tmp_sub_expr_left_7);
        Py_DECREF(tmp_sub_expr_right_7);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 368;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical->m_frame.f_lineno = 368;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 368;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_sub_expr_left_8;
        PyObject *tmp_sub_expr_right_8;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_16;
        if (var_c_ineq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[91]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 369;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_31 = var_c_ineq;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[41]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 369;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_lb);
        tmp_expression_value_32 = var_lb;
        CHECK_OBJECT(var_interval);
        tmp_subscript_value_15 = var_interval;
        tmp_sub_expr_left_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_15);
        if (tmp_sub_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 369;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_f);
        tmp_expression_value_33 = var_f;
        CHECK_OBJECT(var_interval);
        tmp_subscript_value_16 = var_interval;
        tmp_sub_expr_right_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_16);
        if (tmp_sub_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_sub_expr_left_8);

            exception_lineno = 369;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
        Py_DECREF(tmp_sub_expr_left_8);
        Py_DECREF(tmp_sub_expr_right_8);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 369;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical->m_frame.f_lineno = 369;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 369;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_list_arg_value_9;
        PyObject *tmp_item_value_9;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_17;
        if (var_J_eq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[90]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 371;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_list_arg_value_9 = var_J_eq;
        CHECK_OBJECT(var_J);
        tmp_expression_value_34 = var_J;
        CHECK_OBJECT(var_equal);
        tmp_subscript_value_17 = var_equal;
        tmp_item_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_17);
        if (tmp_item_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 371;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_9, tmp_item_value_9);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_list_arg_value_10;
        PyObject *tmp_item_value_10;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_18;
        if (var_J_ineq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[92]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 372;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_list_arg_value_10 = var_J_ineq;
        CHECK_OBJECT(var_J);
        tmp_expression_value_35 = var_J;
        CHECK_OBJECT(var_less);
        tmp_subscript_value_18 = var_less;
        tmp_item_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_18);
        if (tmp_item_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 372;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_10, tmp_item_value_10);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_19;
        if (var_J_ineq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[92]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_36 = var_J_ineq;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[41]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_J);
        tmp_expression_value_37 = var_J;
        CHECK_OBJECT(var_greater);
        tmp_subscript_value_19 = var_greater;
        tmp_operand_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_19);
        if (tmp_operand_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_7 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_10);
        Py_DECREF(tmp_operand_value_10);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical->m_frame.f_lineno = 373;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_20;
        if (var_J_ineq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[92]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 374;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_38 = var_J_ineq;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[41]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 374;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_J);
        tmp_expression_value_39 = var_J;
        CHECK_OBJECT(var_interval);
        tmp_subscript_value_20 = var_interval;
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_20);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 374;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical->m_frame.f_lineno = 374;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 374;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_21;
        if (var_J_ineq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[92]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_40 = var_J_ineq;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[41]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_J);
        tmp_expression_value_41 = var_J;
        CHECK_OBJECT(var_interval);
        tmp_subscript_value_21 = var_interval;
        tmp_operand_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_21);
        if (tmp_operand_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_9 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_11);
        Py_DECREF(tmp_operand_value_11);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical->m_frame.f_lineno = 375;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 342;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_23;
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_4;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_instance_1;
        if (var_c_eq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[89]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_4 = CHECK_IF_TRUE(var_c_eq);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_expression_value_42 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_42 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[34]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_c_eq == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[89]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = var_c_eq;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical->m_frame.f_lineno = 377;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_10);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_called_instance_1 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical->m_frame.f_lineno = 377;
        tmp_assign_source_23 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[17], 0)
        );

        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        {
            PyObject *old = var_c_eq;
            var_c_eq = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_5;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_instance_2;
        if (var_c_ineq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[91]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_5 = CHECK_IF_TRUE(var_c_ineq);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_expression_value_43 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_43 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[34]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_c_ineq == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[91]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_11 = var_c_ineq;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical->m_frame.f_lineno = 378;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_11);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_called_instance_2 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical->m_frame.f_lineno = 378;
        tmp_assign_source_24 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[17], 0)
        );

        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_2:;
        {
            PyObject *old = var_c_ineq;
            var_c_ineq = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_6;
        CHECK_OBJECT(par_sparse_jacobian);
        tmp_truth_name_6 = CHECK_IF_TRUE(par_sparse_jacobian);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_expression_value_44;
        tmp_expression_value_44 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_sps(tstate);
        if (unlikely(tmp_expression_value_44 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[18]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 381;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[30]);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 381;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vstack == NULL);
        var_vstack = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_tuple_element_1;
        tmp_called_instance_3 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_sps(tstate);
        if (unlikely(tmp_called_instance_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[18]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 382;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = const_int_0;
        tmp_args_element_value_12 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_12, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_n);
        tmp_tuple_element_1 = par_n;
        PyTuple_SET_ITEM0(tmp_args_element_value_12, 1, tmp_tuple_element_1);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical->m_frame.f_lineno = 382;
        tmp_assign_source_26 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[19], tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 382;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_empty == NULL);
        var_empty = tmp_assign_source_26;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_expression_value_45;
        tmp_expression_value_45 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_expression_value_45 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 384;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[30]);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 384;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vstack == NULL);
        var_vstack = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_tuple_element_2;
        tmp_called_instance_4 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$_np(tstate);
        if (unlikely(tmp_called_instance_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = const_int_0;
        tmp_args_element_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_13, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_n);
        tmp_tuple_element_2 = par_n;
        PyTuple_SET_ITEM0(tmp_args_element_value_13, 1, tmp_tuple_element_2);
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical->m_frame.f_lineno = 385;
        tmp_assign_source_28 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[10], tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_empty == NULL);
        var_empty = tmp_assign_source_28;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_29;
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_7;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_14;
        if (var_J_eq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[90]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 387;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_7 = CHECK_IF_TRUE(var_J_eq);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 387;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(var_vstack);
        tmp_called_value_12 = var_vstack;
        if (var_J_eq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[90]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 387;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_14 = var_J_eq;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical->m_frame.f_lineno = 387;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_14);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 387;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(var_empty);
        tmp_assign_source_29 = var_empty;
        Py_INCREF(tmp_assign_source_29);
        condexpr_end_3:;
        {
            PyObject *old = var_J_eq;
            var_J_eq = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_8;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_15;
        if (var_J_ineq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[92]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 388;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_8 = CHECK_IF_TRUE(var_J_ineq);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 388;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(var_vstack);
        tmp_called_value_13 = var_vstack;
        if (var_J_ineq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[92]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 388;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_15 = var_J_ineq;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical->m_frame.f_lineno = 388;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_15);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 388;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        CHECK_OBJECT(var_empty);
        tmp_assign_source_30 = var_empty;
        Py_INCREF(tmp_assign_source_30);
        condexpr_end_4:;
        {
            PyObject *old = var_J_ineq;
            var_J_ineq = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical,
        type_description_1,
        par_n,
        par_prepared_constraints,
        par_sparse_jacobian,
        var_c_eq,
        var_c_ineq,
        var_J_eq,
        var_J_ineq,
        var_c,
        var_f,
        var_J,
        var_lb,
        var_ub,
        var_finite_ub,
        var_finite_lb,
        var_lb_inf,
        var_ub_inf,
        var_equal,
        var_less,
        var_greater,
        var_interval,
        var_vstack,
        var_empty
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical == cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical);
        cache_frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(var_c_eq);
        tmp_tuple_element_3 = var_c_eq;
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 4);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_c_ineq);
        tmp_tuple_element_3 = var_c_ineq;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
        CHECK_OBJECT(var_J_eq);
        tmp_tuple_element_3 = var_J_eq;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_3);
        CHECK_OBJECT(var_J_ineq);
        tmp_tuple_element_3 = var_J_ineq;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_3);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_c_eq);
    Py_DECREF(var_c_eq);
    var_c_eq = NULL;
    CHECK_OBJECT(var_c_ineq);
    Py_DECREF(var_c_ineq);
    var_c_ineq = NULL;
    CHECK_OBJECT(var_J_eq);
    Py_DECREF(var_J_eq);
    var_J_eq = NULL;
    CHECK_OBJECT(var_J_ineq);
    Py_DECREF(var_J_ineq);
    var_J_ineq = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_J);
    var_J = NULL;
    Py_XDECREF(var_lb);
    var_lb = NULL;
    Py_XDECREF(var_ub);
    var_ub = NULL;
    Py_XDECREF(var_finite_ub);
    var_finite_ub = NULL;
    Py_XDECREF(var_finite_lb);
    var_finite_lb = NULL;
    Py_XDECREF(var_lb_inf);
    var_lb_inf = NULL;
    Py_XDECREF(var_ub_inf);
    var_ub_inf = NULL;
    Py_XDECREF(var_equal);
    var_equal = NULL;
    Py_XDECREF(var_less);
    var_less = NULL;
    Py_XDECREF(var_greater);
    var_greater = NULL;
    Py_XDECREF(var_interval);
    var_interval = NULL;
    CHECK_OBJECT(var_vstack);
    Py_DECREF(var_vstack);
    var_vstack = NULL;
    CHECK_OBJECT(var_empty);
    Py_DECREF(var_empty);
    var_empty = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_c_eq);
    var_c_eq = NULL;
    Py_XDECREF(var_c_ineq);
    var_c_ineq = NULL;
    Py_XDECREF(var_J_eq);
    var_J_eq = NULL;
    Py_XDECREF(var_J_ineq);
    var_J_ineq = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_J);
    var_J = NULL;
    Py_XDECREF(var_lb);
    var_lb = NULL;
    Py_XDECREF(var_ub);
    var_ub = NULL;
    Py_XDECREF(var_finite_ub);
    var_finite_ub = NULL;
    Py_XDECREF(var_finite_lb);
    var_finite_lb = NULL;
    Py_XDECREF(var_lb_inf);
    var_lb_inf = NULL;
    Py_XDECREF(var_ub_inf);
    var_ub_inf = NULL;
    Py_XDECREF(var_equal);
    var_equal = NULL;
    Py_XDECREF(var_less);
    var_less = NULL;
    Py_XDECREF(var_greater);
    var_greater = NULL;
    Py_XDECREF(var_interval);
    var_interval = NULL;
    Py_XDECREF(var_vstack);
    var_vstack = NULL;
    Py_XDECREF(var_empty);
    var_empty = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_prepared_constraints);
    Py_DECREF(par_prepared_constraints);
    CHECK_OBJECT(par_sparse_jacobian);
    Py_DECREF(par_sparse_jacobian);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_prepared_constraints);
    Py_DECREF(par_prepared_constraints);
    CHECK_OBJECT(par_sparse_jacobian);
    Py_DECREF(par_sparse_jacobian);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        code_objects_a98f1722833566f563d5bf3fb03406a5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        code_objects_1736009d5c1e95464c0aacce5f3d6fbe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        code_objects_303ad94cb2b0620f5b90b03d1d28d94b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[20],
#endif
        code_objects_2548042aaa713fafd78531d1687ad05e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[21],
#endif
        code_objects_69bc5b33747e941b645ea88442a31643,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[22],
#endif
        code_objects_1d2b483f40795612b19cd1b5358becce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        code_objects_46c308d38a8faf5e5564ed40b660593a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[29],
#endif
        code_objects_f8fdd089dc8b0ea12d50fb391f1c44b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[31],
#endif
        code_objects_61d324ab2bb22e21e2d203da09d47b3e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[32],
#endif
        code_objects_baaa8a7860d8bad5c1497bbc9c30d1a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        mod_consts[43],
#endif
        code_objects_77958f0e380697b2febc052dd7347321,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        code_objects_7caea3adfe566809f344a6038c4d0914,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[56],
#endif
        code_objects_f4e08dedf085cf48de95517d00a2ff45,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[57],
#endif
        code_objects_32dfed504a0ec665fad6327674c06327,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[58],
#endif
        code_objects_1cc325c709082f52a162449c09124185,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        code_objects_a0212a6b9c1a8c86b28b78f57b3ee3cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[62],
#endif
        code_objects_12c68fa3b4ce98b358fab408c4ab2146,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[63],
#endif
        code_objects_998f065d919490ecf892ef0afb5af8ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[64],
#endif
        code_objects_0140448e44c3aba0ae1868f8351f3df8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[62],
#endif
        code_objects_c1cef28d0f389bf9e51c9b142c48c8c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[63],
#endif
        code_objects_8efd0d22ade82386288dd21f40fadddc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[64],
#endif
        code_objects_33cccdcce2e219d1aa529a9b5d44ab17,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        code_objects_b3872209a615de79ceafc884ba551f67,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        code_objects_42f3ff34b814bbf924164cccf1eca905,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        code_objects_08796eecfba1646893ca1bb0c2a7df79,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[72],
#endif
        code_objects_a891cccc0d38f665b406f044a2fc3b23,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        code_objects_86597c8e1e06e65fd989bb3b78714f15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        code_objects_22b98d6746aa1dbe539f8d2d9850a8a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[72],
#endif
        code_objects_efb7d3ad3e5a3a49533826b106b7c12d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        code_objects_f9414011e1931761ade5a837b16baef3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[76],
#endif
        code_objects_23eb8ca7abd1b88d7dc4ddfa34d5d3db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        7
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        code_objects_95f1c8401fb915f219e57db1b24f6db4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        5
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        code_objects_d364ccfe10b805bb22d590b5f4146f05,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        NULL,
        closure,
        9
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_433d384ad16f219b3837f5333736c9be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        mod_consts[93],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_scipy$optimize$_trustregion_constr$canonical_constraint[] = {
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__1_fun,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__2_jac,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty$$$function__3_hess,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__1_fun,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__2_jac,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate$$$function__3_hess$$$function__1_matvec,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__1_fun,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__2_jac,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical$$$function__3_hess,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__1_fun,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__2_jac,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__3_hess,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__4_fun,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__5_jac,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical$$$function__6_hess,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__1_fun,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__2_jac,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__3_hess,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__4_fun,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__5_jac,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical$$$function__6_hess,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__1_fun,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__2_jac,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical$$$function__3_hess,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical,
    impl_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    PyThreadState *tstate = PyThreadState_GET();

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_scipy$optimize$_trustregion_constr$canonical_constraint);

    if (unlikely(offset == -1)) {
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = Nuitka_Function_ExtractCodeObjectDescription(tstate, function);

    PyObject *result = MAKE_TUPLE_EMPTY(tstate, 8);
    PyTuple_SET_ITEM(result, 0, Nuitka_PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM_IMMORTAL(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM_IMMORTAL(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 6, Py_None);
#endif

    PyObject *closure = PyObject_GetAttr(
        (PyObject *)function,
        const_str_plain___closure__
    );

    if (closure != Py_None) {
        for (Py_ssize_t i=0; i < PyTuple_GET_SIZE(closure); i++) {
            struct Nuitka_CellObject *cell = (struct Nuitka_CellObject *)PyTuple_GET_ITEM(closure, i);

            assert(Nuitka_Cell_Check((PyObject *)cell));

            PyTuple_SET_ITEM0(
                closure,
                i,
                cell->ob_ref
            );
        }
    }

    PyTuple_SET_ITEM(result, 7, closure);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;

    if (!PyArg_ParseTuple(args, "OOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_scipy$optimize$_trustregion_constr$canonical_constraint,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_scipy$optimize$_trustregion_constr$canonical_constraint,
        sizeof(function_table_scipy$optimize$_trustregion_constr$canonical_constraint) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Actual name might be different when loaded as a package.
#if defined(_NUITKA_MODULE) && 0
static char const *module_full_name = "scipy.optimize._trustregion_constr.canonical_constraint";
#endif

// Internal entry point for module code.
PyObject *modulecode_scipy$optimize$_trustregion_constr$canonical_constraint(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy$optimize$_trustregion_constr$canonical_constraint");

    // Store the module for future use.
    module_scipy$optimize$_trustregion_constr$canonical_constraint = module;

    moduledict_scipy$optimize$_trustregion_constr$canonical_constraint = MODULE_DICT(module_scipy$optimize$_trustregion_constr$canonical_constraint);

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.
#if PYTHON_VERSION > 0x350 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_ALLOCATORS)
        initNuitkaAllocators();
#endif
        // Initialize the constant values used.
        _initBuiltinModule();

#if PYTHON_VERSION >= 0x3c0
        PyObject *real_module_name = PyObject_GetAttrString(module, "__name__");
        CHECK_OBJECT(real_module_name);
        module_full_name = strdup(Nuitka_String_AsString(real_module_name));
#endif

#if PYTHON_VERSION >= 0x3c0
        createGlobalConstants(tstate, real_module_name);
#else
        createGlobalConstants(tstate);
#endif
        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy$optimize$_trustregion_constr$canonical_constraint: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy$optimize$_trustregion_constr$canonical_constraint: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("scipy$optimize$_trustregion_constr$canonical_constraint: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "scipy.optimize._trustregion_constr.canonical_constraint" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initscipy$optimize$_trustregion_constr$canonical_constraint\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$optimize$_trustregion_constr$canonical_constraint,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$optimize$_trustregion_constr$canonical_constraint,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[173]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$optimize$_trustregion_constr$canonical_constraint,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_trustregion_constr$canonical_constraint,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_trustregion_constr$canonical_constraint,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$optimize$_trustregion_constr$canonical_constraint);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_scipy$optimize$_trustregion_constr$canonical_constraint);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

        // Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

#if defined(_NUITKA_MODULE) && 0 && 0 >= 0
        // Set our loader object in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain_loader, module_loader);
#endif

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_scipy$optimize$_trustregion_constr$canonical_constraint$$$class__1_CanonicalConstraint_5 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_2);
    }
    frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint = MAKE_MODULE_FRAME(code_objects_dd9b283af26ef12c73354ee14c0730ad, module_scipy$optimize$_trustregion_constr$canonical_constraint);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$___spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[96], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = module_var_accessor_scipy$optimize$_trustregion_constr$canonical_constraint_$$___spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[97], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[99];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$canonical_constraint;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = const_int_0;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[100];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_scipy$optimize$_trustregion_constr$canonical_constraint;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = const_int_0;
        frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$optimize$_trustregion_constr$canonical_constraint,
                mod_consts[101],
                const_int_0
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[101]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_scipy$optimize$_trustregion_constr$canonical_constraint$$$class__1_CanonicalConstraint_5 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[102];
        tmp_result = DICT_SET_ITEM(locals_scipy$optimize$_trustregion_constr$canonical_constraint$$$class__1_CanonicalConstraint_5, mod_consts[103], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[104];
        tmp_result = DICT_SET_ITEM(locals_scipy$optimize$_trustregion_constr$canonical_constraint$$$class__1_CanonicalConstraint_5, mod_consts[94], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[105];
        tmp_result = DICT_SET_ITEM(locals_scipy$optimize$_trustregion_constr$canonical_constraint$$$class__1_CanonicalConstraint_5, mod_consts[106], tmp_dictset_value);
        assert(!(tmp_result == false));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__1___init__(tstate);

        tmp_result = DICT_SET_ITEM(locals_scipy$optimize$_trustregion_constr$canonical_constraint$$$class__1_CanonicalConstraint_5, mod_consts[107], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));
        {
            PyObject *tmp_classmethod_arg_1;


            tmp_classmethod_arg_1 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__2_from_PreparedConstraint(tstate);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_scipy$optimize$_trustregion_constr$canonical_constraint$$$class__1_CanonicalConstraint_5, mod_consts[109], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_classmethod_arg_2;


            tmp_classmethod_arg_2 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__3_empty(tstate);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_scipy$optimize$_trustregion_constr$canonical_constraint$$$class__1_CanonicalConstraint_5, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_classmethod_arg_3;


            tmp_classmethod_arg_3 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__4_concatenate(tstate);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_3);
            Py_DECREF(tmp_classmethod_arg_3);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_scipy$optimize$_trustregion_constr$canonical_constraint$$$class__1_CanonicalConstraint_5, mod_consts[112], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_classmethod_arg_4;


            tmp_classmethod_arg_4 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__5__equal_to_canonical(tstate);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_4);
            Py_DECREF(tmp_classmethod_arg_4);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_scipy$optimize$_trustregion_constr$canonical_constraint$$$class__1_CanonicalConstraint_5, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_classmethod_arg_5;


            tmp_classmethod_arg_5 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__6__less_to_canonical(tstate);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_5);
            Py_DECREF(tmp_classmethod_arg_5);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_scipy$optimize$_trustregion_constr$canonical_constraint$$$class__1_CanonicalConstraint_5, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_classmethod_arg_6;


            tmp_classmethod_arg_6 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__7__greater_to_canonical(tstate);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_6);
            Py_DECREF(tmp_classmethod_arg_6);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_scipy$optimize$_trustregion_constr$canonical_constraint$$$class__1_CanonicalConstraint_5, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_classmethod_arg_7;


            tmp_classmethod_arg_7 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__8__interval_to_canonical(tstate);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_7);
            Py_DECREF(tmp_classmethod_arg_7);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_scipy$optimize$_trustregion_constr$canonical_constraint$$$class__1_CanonicalConstraint_5, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[105];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_scipy$optimize$_trustregion_constr$canonical_constraint$$$class__1_CanonicalConstraint_5;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint->m_frame.f_lineno = 5;
            tmp_assign_source_9 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 5;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_9;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_8 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_8);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_scipy$optimize$_trustregion_constr$canonical_constraint$$$class__1_CanonicalConstraint_5);
        locals_scipy$optimize$_trustregion_constr$canonical_constraint$$$class__1_CanonicalConstraint_5 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_lineno_1 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_1 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_scipy$optimize$_trustregion_constr$canonical_constraint$$$class__1_CanonicalConstraint_5);
        locals_scipy$optimize$_trustregion_constr$canonical_constraint$$$class__1_CanonicalConstraint_5 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_lineno_2 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_2 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 5;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_8);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_scipy$optimize$_trustregion_constr$canonical_constraint);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_scipy$optimize$_trustregion_constr$canonical_constraint$$$function__9_initial_constraints_as_canonical(tstate);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_10);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy$optimize$_trustregion_constr$canonical_constraint", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "scipy.optimize._trustregion_constr.canonical_constraint" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_scipy$optimize$_trustregion_constr$canonical_constraint);
    return module_scipy$optimize$_trustregion_constr$canonical_constraint;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_trustregion_constr$canonical_constraint, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$optimize$_trustregion_constr$canonical_constraint", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
