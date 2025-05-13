/* Generated code for Python module 'scipy$optimize$_lsq$least_squares'
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

/* The "module_scipy$optimize$_lsq$least_squares" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_lsq$least_squares;
PyDictObject *moduledict_scipy$optimize$_lsq$least_squares;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[209];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[209];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("scipy.optimize._lsq.least_squares"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 209; i++) {
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
void checkModuleConstants_scipy$optimize$_lsq$least_squares(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 209; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 28
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
static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_EPS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[1]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[1])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[1], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[1])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[1], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[1]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[1]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[1]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_FROM_MINPACK_TO_COMMON(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[24]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[24])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[24], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[24])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[24], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[24]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[24]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[24]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_IMPLEMENTED_LOSSES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[63]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[63])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[63], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[63])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[63], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[63]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[63]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[63]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_LinearOperator(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[117]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[117])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[117], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[117])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[117], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[117]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[117]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[117]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_OptimizeResult(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[27]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[27])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[27], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[27])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[27], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[27]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[27]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[27]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_TERMINATION_MESSAGES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[136]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[136])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[136], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[136])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[136], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[136]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[136]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[136]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$___spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[208]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[208])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[208], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[208])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[208], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[208]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[208]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[208]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$__minpack(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[5]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[5])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[5], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[5])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[5], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[5]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[5]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_approx_derivative(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[13]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[13])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[13], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[13])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[13], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[13]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[13]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[13]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_arctan(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[60]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[60])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[60], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[60])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[60], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[60]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[60]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[60]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_call_minpack(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[131]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[131])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[131], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[131])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[131], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[131]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[131]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[131]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_cauchy(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[181]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[181])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[181], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[181])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[181], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[181]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[181]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[181]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_check_jac_sparsity(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[123]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[123])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[123], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[123])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[123], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[123]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[123]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[123]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_check_tolerance(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[101]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[101])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[101], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[101])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[101], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[101]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[101]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[101]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_check_x_scale(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[100]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[100])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[100], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[100])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[100], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[100]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[100]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[100]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_construct_loss_function(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[110]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[110])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[110], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[110])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[110], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[110]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[110]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[110]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_dogbox(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[133]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[133])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[133], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[133])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[133], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[133]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[133]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[133]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_group_columns(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[56]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[56])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[56], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[56])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[56], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[56]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[56]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[56]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_huber(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[179]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[179])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[179], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[179])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[179], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[179]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[179]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[179]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_in_bounds(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[98]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[98])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[98], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[98])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[98], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[98]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[98]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[98]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_issparse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[53]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[53])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[53], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[53])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[53], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[53]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[53]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[53]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_make_strictly_feasible(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[105]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[105])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[105], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[105])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[105], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[105]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[105]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[105]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_norm(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[18]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[18]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[18]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[18]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[11]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[11])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[11], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[11])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[11], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[11]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[11]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[11]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_prepare_bounds(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[93]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[93])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[93], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[93])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[93], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[93]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[93]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[93]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_soft_l1(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[180]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[180])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[180], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[180])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[180], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[180]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[180]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[180]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_trf(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[104]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[104])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[104], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[104])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[104], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[104]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[104]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[104]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$optimize$_lsq$least_squares_$$_warn(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$optimize$_lsq$least_squares->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[44]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$optimize$_lsq$least_squares->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[44])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[44], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[44])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[44], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[44]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[44]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[44]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_a3f01f1bb45854ab8787bec1ab10bb58;
static PyCodeObject *code_objects_da932b68a72468258fc60c4b95d169d4;
static PyCodeObject *code_objects_e8dda8d95a07cc99c99f9e234553f225;
static PyCodeObject *code_objects_e27279e5173f8ea7c6695755ec5e4509;
static PyCodeObject *code_objects_e607962ffe17b5a12655e987de75072c;
static PyCodeObject *code_objects_3b68af000c169e933e6d876f27960385;
static PyCodeObject *code_objects_d5cb587866c9df50dc662747bfc16be9;
static PyCodeObject *code_objects_d27e1a7f24bef0d4561ff3dae77c7160;
static PyCodeObject *code_objects_88b9a2ab63c1c8766a6bdc9f04a45053;
static PyCodeObject *code_objects_2b1a808a34ad7540162366d425cb5413;
static PyCodeObject *code_objects_d7e5853c29b03a5bc7dae770a2b93958;
static PyCodeObject *code_objects_c116ba93316a4f4578e43d524fe7f631;
static PyCodeObject *code_objects_3d8cf30fde71f9039993172ab4624426;
static PyCodeObject *code_objects_307bd0858844534ede16c1d5524aafdc;
static PyCodeObject *code_objects_308e3e96c1fef274b4a80a06a8118eb3;
static PyCodeObject *code_objects_7c245c9c0285e6bc89d8fb6634dbc360;
static PyCodeObject *code_objects_5210a244ba2d583bc7fa99a778ff0b4e;
static PyCodeObject *code_objects_8e428f4c00fd069cb3a7630646a009ef;
static PyCodeObject *code_objects_3a4b0bdbbe291fdebb0026eb3b151236;
static PyCodeObject *code_objects_1958d8b210f15e2da4bd4c74e8fe9070;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[185]); CHECK_OBJECT(module_filename_obj);
    code_objects_a3f01f1bb45854ab8787bec1ab10bb58 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[186], mod_consts[186], NULL, NULL, 0, 0, 0);
    code_objects_da932b68a72468258fc60c4b95d169d4 = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[187], NULL, 3, 0, 0);
    code_objects_e8dda8d95a07cc99c99f9e234553f225 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[131], mod_consts[131], mod_consts[188], NULL, 9, 0, 0);
    code_objects_e27279e5173f8ea7c6695755ec5e4509 = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[181], mod_consts[181], mod_consts[187], NULL, 3, 0, 0);
    code_objects_e607962ffe17b5a12655e987de75072c = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[37], mod_consts[189], NULL, 2, 0, 0);
    code_objects_3b68af000c169e933e6d876f27960385 = MAKE_CODE_OBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[123], mod_consts[123], mod_consts[190], NULL, 3, 0, 0);
    code_objects_d5cb587866c9df50dc662747bfc16be9 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[191], NULL, 4, 0, 0);
    code_objects_d27e1a7f24bef0d4561ff3dae77c7160 = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[192], NULL, 2, 0, 0);
    code_objects_88b9a2ab63c1c8766a6bdc9f04a45053 = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[110], mod_consts[110], mod_consts[193], NULL, 3, 0, 0);
    code_objects_2b1a808a34ad7540162366d425cb5413 = MAKE_CODE_OBJECT(module_filename_obj, 814, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[102], mod_consts[103], mod_consts[194], mod_consts[195], 1, 0, 0);
    code_objects_d7e5853c29b03a5bc7dae770a2b93958 = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[179], mod_consts[179], mod_consts[196], NULL, 3, 0, 0);
    code_objects_c116ba93316a4f4578e43d524fe7f631 = MAKE_CODE_OBJECT(module_filename_obj, 854, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[115], mod_consts[116], mod_consts[197], mod_consts[198], 2, 0, 0);
    code_objects_3d8cf30fde71f9039993172ab4624426 = MAKE_CODE_OBJECT(module_filename_obj, 858, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[115], mod_consts[116], mod_consts[197], mod_consts[198], 2, 0, 0);
    code_objects_307bd0858844534ede16c1d5524aafdc = MAKE_CODE_OBJECT(module_filename_obj, 864, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[115], mod_consts[116], mod_consts[197], mod_consts[198], 2, 0, 0);
    code_objects_308e3e96c1fef274b4a80a06a8118eb3 = MAKE_CODE_OBJECT(module_filename_obj, 885, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[115], mod_consts[116], mod_consts[199], mod_consts[200], 2, 0, 0);
    code_objects_7c245c9c0285e6bc89d8fb6634dbc360 = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[184], mod_consts[184], mod_consts[201], NULL, 19, 0, 0);
    code_objects_5210a244ba2d583bc7fa99a778ff0b4e = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[67], mod_consts[68], mod_consts[202], mod_consts[203], 2, 0, 0);
    code_objects_8e428f4c00fd069cb3a7630646a009ef = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[67], mod_consts[68], mod_consts[204], mod_consts[205], 2, 0, 0);
    code_objects_3a4b0bdbbe291fdebb0026eb3b151236 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[206], NULL, 2, 0, 0);
    code_objects_1958d8b210f15e2da4bd4c74e8fe9070 = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[187], NULL, 3, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function(PyThreadState *tstate, PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function(PyThreadState *tstate, PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__11_least_squares(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped(PyThreadState *tstate, PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped(PyThreadState *tstate, PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped(PyThreadState *tstate, PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__6_huber(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__8_cauchy(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__9_arctan(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_fun = python_pars[0];
    PyObject *par_x0 = python_pars[1];
    PyObject *par_jac = python_pars[2];
    PyObject *par_ftol = python_pars[3];
    PyObject *par_xtol = python_pars[4];
    PyObject *par_gtol = python_pars[5];
    PyObject *par_max_nfev = python_pars[6];
    PyObject *par_x_scale = python_pars[7];
    PyObject *par_diff_step = python_pars[8];
    PyObject *var_n = NULL;
    PyObject *var_epsfcn = NULL;
    PyObject *var_diag = NULL;
    PyObject *var_x = NULL;
    PyObject *var_info = NULL;
    PyObject *var_status = NULL;
    PyObject *var_f = NULL;
    PyObject *var_J = NULL;
    PyObject *var_cost = NULL;
    PyObject *var_g = NULL;
    PyObject *var_g_norm = NULL;
    PyObject *var_nfev = NULL;
    PyObject *var_njev = NULL;
    PyObject *var_active_mask = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack = MAKE_FUNCTION_FRAME(tstate, code_objects_e8dda8d95a07cc99c99f9e234553f225, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack->m_type_description == NULL);
    frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack = cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_x0);
        tmp_expression_value_1 = par_x0;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 40;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n == NULL);
        var_n = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_diff_step);
        tmp_cmp_expr_left_1 = par_diff_step;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_EPS(tstate);
        if (unlikely(tmp_assign_source_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[1]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 43;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_epsfcn == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_epsfcn = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        CHECK_OBJECT(par_diff_step);
        tmp_pow_expr_left_1 = par_diff_step;
        tmp_pow_expr_right_1 = mod_consts[2];
        tmp_assign_source_3 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 45;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_epsfcn == NULL);
        var_epsfcn = tmp_assign_source_3;
    }
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_x_scale);
        tmp_isinstance_inst_1 = par_x_scale;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_x_scale);
        tmp_cmp_expr_left_2 = par_x_scale;
        tmp_cmp_expr_right_2 = mod_consts[3];
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        assert(var_diag == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_diag = tmp_assign_source_4;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        tmp_truediv_expr_left_1 = const_int_pos_1;
        CHECK_OBJECT(par_x_scale);
        tmp_truediv_expr_right_1 = par_x_scale;
        tmp_assign_source_5 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_diag == NULL);
        var_diag = tmp_assign_source_5;
    }
    branch_end_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_jac);
        tmp_cmp_expr_left_3 = par_jac;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_max_nfev);
        tmp_cmp_expr_left_4 = par_max_nfev;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_mult_expr_left_2 = mod_consts[4];
        CHECK_OBJECT(var_n);
        tmp_mult_expr_right_2 = var_n;
        tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n);
        tmp_add_expr_left_1 = var_n;
        tmp_add_expr_right_1 = const_int_pos_1;
        tmp_mult_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 61;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_max_nfev;
            assert(old != NULL);
            par_max_nfev = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_instance_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$__minpack(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 62;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_fun);
        tmp_args_element_value_1 = par_fun;
        CHECK_OBJECT(par_x0);
        tmp_args_element_value_2 = par_x0;
        tmp_args_element_value_3 = const_tuple_empty;
        tmp_args_element_value_4 = Py_True;
        CHECK_OBJECT(par_ftol);
        tmp_args_element_value_5 = par_ftol;
        CHECK_OBJECT(par_xtol);
        tmp_args_element_value_6 = par_xtol;
        CHECK_OBJECT(par_gtol);
        tmp_args_element_value_7 = par_gtol;
        CHECK_OBJECT(par_max_nfev);
        tmp_args_element_value_8 = par_max_nfev;
        CHECK_OBJECT(var_epsfcn);
        tmp_args_element_value_9 = var_epsfcn;
        tmp_args_element_value_10 = mod_consts[7];
        CHECK_OBJECT(var_diag);
        tmp_args_element_value_11 = var_diag;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS11(
                tstate,
                tmp_called_instance_1,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 62;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 62;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 62;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 62;
            type_description_1 = "ooooooooooooNNNooooooooooo";
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
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
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        assert(var_x == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_x = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        assert(var_info == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_info = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_3;
        assert(var_status == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_status = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    goto branch_end_3;
    branch_no_3:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_max_nfev);
        tmp_cmp_expr_left_5 = par_max_nfev;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        tmp_mult_expr_left_3 = mod_consts[4];
        CHECK_OBJECT(var_n);
        tmp_mult_expr_right_3 = var_n;
        tmp_assign_source_14 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_max_nfev;
            assert(old != NULL);
            par_max_nfev = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        tmp_called_instance_2 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$__minpack(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 68;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_fun);
        tmp_args_element_value_12 = par_fun;
        CHECK_OBJECT(par_jac);
        tmp_args_element_value_13 = par_jac;
        CHECK_OBJECT(par_x0);
        tmp_args_element_value_14 = par_x0;
        tmp_args_element_value_15 = const_tuple_empty;
        tmp_args_element_value_16 = Py_True;
        tmp_args_element_value_17 = Py_False;
        CHECK_OBJECT(par_ftol);
        tmp_args_element_value_18 = par_ftol;
        CHECK_OBJECT(par_xtol);
        tmp_args_element_value_19 = par_xtol;
        CHECK_OBJECT(par_gtol);
        tmp_args_element_value_20 = par_gtol;
        CHECK_OBJECT(par_max_nfev);
        tmp_args_element_value_21 = par_max_nfev;
        tmp_args_element_value_22 = mod_consts[7];
        CHECK_OBJECT(var_diag);
        tmp_args_element_value_23 = var_diag;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_iter_arg_2 = CALL_METHOD_WITH_ARGS12(
                tstate,
                tmp_called_instance_2,
                mod_consts[8],
                call_args
            );
        }

        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_15 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 0, 3);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 68;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 1, 3);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 68;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 2, 3);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 68;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_3 == NULL);
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_18;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 3);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 68;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_19 = tmp_tuple_unpack_2__element_1;
        assert(var_x == NULL);
        Py_INCREF(tmp_assign_source_19);
        var_x = tmp_assign_source_19;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_20 = tmp_tuple_unpack_2__element_2;
        assert(var_info == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_info = tmp_assign_source_20;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_21 = tmp_tuple_unpack_2__element_3;
        assert(var_status == NULL);
        Py_INCREF(tmp_assign_source_21);
        var_status = tmp_assign_source_21;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    branch_end_3:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_info);
        tmp_expression_value_2 = var_info;
        tmp_subscript_value_1 = mod_consts[9];
        tmp_assign_source_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_f == NULL);
        var_f = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_24;
        int tmp_truth_name_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_jac);
        tmp_args_element_value_24 = par_jac;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack->m_frame.f_lineno = 74;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_24);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 74;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_25;
        CHECK_OBJECT(par_jac);
        tmp_called_value_2 = par_jac;
        CHECK_OBJECT(var_x);
        tmp_args_element_value_25 = var_x;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack->m_frame.f_lineno = 75;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_25);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_J == NULL);
        var_J = tmp_assign_source_23;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        tmp_expression_value_3 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 77;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[12]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 77;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_approx_derivative(tstate);
        if (unlikely(tmp_called_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[13]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_3);

            exception_lineno = 77;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_fun == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[14]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 77;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_27 = par_fun;
        CHECK_OBJECT(var_x);
        tmp_args_element_value_28 = var_x;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_args_element_value_26 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        if (tmp_args_element_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 77;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack->m_frame.f_lineno = 77;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 77;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_J == NULL);
        var_J = tmp_assign_source_24;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        tmp_mult_expr_left_4 = mod_consts[15];
        tmp_called_instance_3 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_called_instance_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 79;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_f);
        tmp_args_element_value_29 = var_f;
        CHECK_OBJECT(var_f);
        tmp_args_element_value_30 = var_f;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_mult_expr_right_4 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_3,
                mod_consts[16],
                call_args
            );
        }

        if (tmp_mult_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 79;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_right_4);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 79;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cost == NULL);
        var_cost = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_31;
        CHECK_OBJECT(var_J);
        tmp_expression_value_4 = var_J;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[17]);
        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_f);
        tmp_args_element_value_31 = var_f;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack->m_frame.f_lineno = 80;
        tmp_assign_source_26 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[16], tmp_args_element_value_31);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_g == NULL);
        var_g = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_5;
        tmp_called_value_5 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_norm(tstate);
        if (unlikely(tmp_called_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[18]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 81;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_g);
        tmp_kw_call_arg_value_0_1 = var_g;
        tmp_expression_value_5 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_expression_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 81;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[19]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack->m_frame.f_lineno = 81;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts[20]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_g_norm == NULL);
        var_g_norm = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_info);
        tmp_expression_value_6 = var_info;
        tmp_subscript_value_2 = mod_consts[21];
        tmp_assign_source_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nfev == NULL);
        var_nfev = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_info);
        tmp_expression_value_7 = var_info;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[22]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack->m_frame.f_lineno = 84;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_6, mod_consts[23]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_njev == NULL);
        var_njev = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_8 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_FROM_MINPACK_TO_COMMON(tstate);
        if (unlikely(tmp_expression_value_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[24]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 86;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_status);
        tmp_subscript_value_3 = var_status;
        tmp_assign_source_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_status;
            assert(old != NULL);
            var_status = tmp_assign_source_30;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_9 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_expression_value_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 87;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[25]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_tuple_element_1 = par_x0;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[26]);
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack->m_frame.f_lineno = 87;
        tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_active_mask == NULL);
        var_active_mask = tmp_assign_source_31;
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_kw_call_value_8_1;
        PyObject *tmp_kw_call_value_9_1;
        tmp_called_value_8 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_OptimizeResult(tstate);
        if (unlikely(tmp_called_value_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 89;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[28]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 90;
            type_description_1 = "ooooooooooooNNNooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_1 = var_x;
        CHECK_OBJECT(var_cost);
        tmp_kw_call_value_1_1 = var_cost;
        CHECK_OBJECT(var_f);
        tmp_kw_call_value_2_1 = var_f;
        CHECK_OBJECT(var_J);
        tmp_kw_call_value_3_1 = var_J;
        CHECK_OBJECT(var_g);
        tmp_kw_call_value_4_1 = var_g;
        CHECK_OBJECT(var_g_norm);
        tmp_kw_call_value_5_1 = var_g_norm;
        CHECK_OBJECT(var_active_mask);
        tmp_kw_call_value_6_1 = var_active_mask;
        CHECK_OBJECT(var_nfev);
        tmp_kw_call_value_7_1 = var_nfev;
        CHECK_OBJECT(var_njev);
        tmp_kw_call_value_8_1 = var_njev;
        CHECK_OBJECT(var_status);
        tmp_kw_call_value_9_1 = var_status;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack->m_frame.f_lineno = 89;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_8, kw_values, mod_consts[29]);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 89;
            type_description_1 = "ooooooooooooNNNooooooooooo";
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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack,
        type_description_1,
        par_fun,
        par_x0,
        par_jac,
        par_ftol,
        par_xtol,
        par_gtol,
        par_max_nfev,
        par_x_scale,
        par_diff_step,
        var_n,
        var_epsfcn,
        var_diag,
        NULL,
        NULL,
        NULL,
        var_x,
        var_info,
        var_status,
        var_f,
        var_J,
        var_cost,
        var_g,
        var_g_norm,
        var_nfev,
        var_njev,
        var_active_mask
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack == cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack);
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_max_nfev);
    par_max_nfev = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    CHECK_OBJECT(var_epsfcn);
    Py_DECREF(var_epsfcn);
    var_epsfcn = NULL;
    Py_XDECREF(var_diag);
    var_diag = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    CHECK_OBJECT(var_info);
    Py_DECREF(var_info);
    var_info = NULL;
    CHECK_OBJECT(var_status);
    Py_DECREF(var_status);
    var_status = NULL;
    CHECK_OBJECT(var_f);
    Py_DECREF(var_f);
    var_f = NULL;
    CHECK_OBJECT(var_J);
    Py_DECREF(var_J);
    var_J = NULL;
    CHECK_OBJECT(var_cost);
    Py_DECREF(var_cost);
    var_cost = NULL;
    CHECK_OBJECT(var_g);
    Py_DECREF(var_g);
    var_g = NULL;
    CHECK_OBJECT(var_g_norm);
    Py_DECREF(var_g_norm);
    var_g_norm = NULL;
    CHECK_OBJECT(var_nfev);
    Py_DECREF(var_nfev);
    var_nfev = NULL;
    CHECK_OBJECT(var_njev);
    Py_DECREF(var_njev);
    var_njev = NULL;
    CHECK_OBJECT(var_active_mask);
    Py_DECREF(var_active_mask);
    var_active_mask = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(par_max_nfev);
    par_max_nfev = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_epsfcn);
    var_epsfcn = NULL;
    Py_XDECREF(var_diag);
    var_diag = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_status);
    var_status = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_J);
    var_J = NULL;
    Py_XDECREF(var_cost);
    var_cost = NULL;
    Py_XDECREF(var_g);
    var_g = NULL;
    Py_XDECREF(var_g_norm);
    var_g_norm = NULL;
    Py_XDECREF(var_nfev);
    var_nfev = NULL;
    Py_XDECREF(var_njev);
    var_njev = NULL;
    Py_XDECREF(var_active_mask);
    var_active_mask = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fun);
    Py_DECREF(par_fun);
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    CHECK_OBJECT(par_jac);
    Py_DECREF(par_jac);
    CHECK_OBJECT(par_ftol);
    Py_DECREF(par_ftol);
    CHECK_OBJECT(par_xtol);
    Py_DECREF(par_xtol);
    CHECK_OBJECT(par_gtol);
    Py_DECREF(par_gtol);
    CHECK_OBJECT(par_x_scale);
    Py_DECREF(par_x_scale);
    CHECK_OBJECT(par_diff_step);
    Py_DECREF(par_diff_step);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fun);
    Py_DECREF(par_fun);
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    CHECK_OBJECT(par_jac);
    Py_DECREF(par_jac);
    CHECK_OBJECT(par_ftol);
    Py_DECREF(par_ftol);
    CHECK_OBJECT(par_xtol);
    Py_DECREF(par_xtol);
    CHECK_OBJECT(par_gtol);
    Py_DECREF(par_gtol);
    CHECK_OBJECT(par_x_scale);
    Py_DECREF(par_x_scale);
    CHECK_OBJECT(par_diff_step);
    Py_DECREF(par_diff_step);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_bounds = python_pars[0];
    PyObject *par_n = python_pars[1];
    PyObject *var_lb = NULL;
    PyObject *var_ub = NULL;
    PyObject *outline_0_var_b = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds = MAKE_FUNCTION_FRAME(tstate, code_objects_3a4b0bdbbe291fdebb0026eb3b151236, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds->m_type_description == NULL);
    frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds = cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(par_bounds);
            tmp_iter_arg_2 = par_bounds;
            tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            if (tmp_assign_source_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 95;
                type_description_1 = "oooo";
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
                    type_description_1 = "oooo";
                    exception_lineno = 95;
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
                PyObject *old = outline_0_var_b;
                outline_0_var_b = tmp_assign_source_5;
                Py_INCREF(outline_0_var_b);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_expression_value_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
            if (unlikely(tmp_expression_value_1 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 95;
                type_description_1 = "oooo";
                goto try_except_handler_4;
            }
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[30]);
            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 95;
                type_description_1 = "oooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT(outline_0_var_b);
            tmp_tuple_element_1 = outline_0_var_b;
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[31]);
            frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds->m_frame.f_lineno = 95;
            tmp_append_value_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_value_1);
            Py_DECREF(tmp_kwargs_value_1);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 95;
                type_description_1 = "oooo";
                goto try_except_handler_4;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 95;
                type_description_1 = "oooo";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_iter_arg_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_iter_arg_1);
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
        Py_XDECREF(outline_0_var_b);
        outline_0_var_b = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_lineno_2 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_2 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_0_var_b);
        outline_0_var_b = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 95;
        goto try_except_handler_2;
        outline_result_1:;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;
            type_description_1 = "oooo";
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



            exception_lineno = 95;
            type_description_1 = "oooo";
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



            exception_lineno = 95;
            type_description_1 = "oooo";
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



            exception_lineno = 95;
            type_description_1 = "oooo";
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
        assert(var_lb == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_lb = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert(var_ub == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_ub = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_lb);
        tmp_expression_value_2 = var_lb;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[32]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 96;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = const_int_0;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 96;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 97;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lb);
        tmp_args_element_value_1 = var_lb;
        CHECK_OBJECT(par_n);
        tmp_args_element_value_2 = par_n;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_10 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[33],
                call_args
            );
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 97;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_lb;
            assert(old != NULL);
            var_lb = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_ub);
        tmp_expression_value_3 = var_ub;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[32]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 99;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = const_int_0;
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 99;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 100;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ub);
        tmp_args_element_value_3 = var_ub;
        CHECK_OBJECT(par_n);
        tmp_args_element_value_4 = par_n;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_11 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_2,
                mod_consts[33],
                call_args
            );
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 100;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ub;
            assert(old != NULL);
            var_ub = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_tuple_element_2;
        if (var_lb == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[34]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_lb;
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        if (var_ub == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[35]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 102;
            type_description_1 = "oooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_2 = var_ub;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds,
        type_description_1,
        par_bounds,
        par_n,
        var_lb,
        var_ub
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds == cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds);
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds);

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
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_lb);
    var_lb = NULL;
    Py_XDECREF(var_ub);
    var_ub = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_ftol = python_pars[0];
    PyObject *par_xtol = python_pars[1];
    PyObject *par_gtol = python_pars[2];
    PyObject *par_method = python_pars[3];
    PyObject *var_check = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check(tstate);

        assert(var_check == NULL);
        var_check = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance = MAKE_FUNCTION_FRAME(tstate, code_objects_d5cb587866c9df50dc662747bfc16be9, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance->m_type_description == NULL);
    frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance = cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_check);
        tmp_called_value_1 = var_check;
        CHECK_OBJECT(par_ftol);
        tmp_args_element_value_1 = par_ftol;
        tmp_args_element_value_2 = mod_consts[38];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_ftol;
            assert(old != NULL);
            par_ftol = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_check);
        tmp_called_value_2 = var_check;
        CHECK_OBJECT(par_xtol);
        tmp_args_element_value_3 = par_xtol;
        tmp_args_element_value_4 = mod_consts[39];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 116;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_xtol;
            assert(old != NULL);
            par_xtol = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_check);
        tmp_called_value_3 = var_check;
        CHECK_OBJECT(par_gtol);
        tmp_args_element_value_5 = par_gtol;
        tmp_args_element_value_6 = mod_consts[40];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_gtol;
            assert(old != NULL);
            par_gtol = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_method);
        tmp_cmp_expr_left_1 = par_method;
        tmp_cmp_expr_right_1 = mod_consts[41];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_ftol);
        tmp_cmp_expr_left_2 = par_ftol;
        tmp_cmp_expr_right_2 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_EPS(tstate);
        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[1]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_xtol);
        tmp_cmp_expr_left_3 = par_xtol;
        tmp_cmp_expr_right_3 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_EPS(tstate);
        if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[1]);
        }

        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(par_gtol);
        tmp_cmp_expr_left_4 = par_gtol;
        tmp_cmp_expr_right_4 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_EPS(tstate);
        if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[1]);
        }

        if (tmp_cmp_expr_right_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_and_right_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_right_value_1 = tmp_or_left_value_1;
        or_end_1:;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[42];
        tmp_kw_call_arg_value_1_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_EPS(tstate);
        if (unlikely(tmp_kw_call_arg_value_1_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[1]);
        }

        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance->m_frame.f_lineno = 120;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_state.exception_type = tmp_raise_type_1;
        exception_lineno = 120;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(par_ftol);
        tmp_cmp_expr_left_5 = par_ftol;
        tmp_cmp_expr_right_5 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_EPS(tstate);
        if (unlikely(tmp_cmp_expr_right_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[1]);
        }

        if (tmp_cmp_expr_right_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_xtol);
        tmp_cmp_expr_left_6 = par_xtol;
        tmp_cmp_expr_right_6 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_EPS(tstate);
        if (unlikely(tmp_cmp_expr_right_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[1]);
        }

        if (tmp_cmp_expr_right_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(par_gtol);
        tmp_cmp_expr_left_7 = par_gtol;
        tmp_cmp_expr_right_7 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_EPS(tstate);
        if (unlikely(tmp_cmp_expr_right_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[1]);
        }

        if (tmp_cmp_expr_right_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        tmp_kw_call_arg_value_0_2 = mod_consts[43];
        tmp_kw_call_arg_value_1_2 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_EPS(tstate);
        if (unlikely(tmp_kw_call_arg_value_1_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[1]);
        }

        if (tmp_kw_call_arg_value_1_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 124;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance->m_frame.f_lineno = 123;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_state.exception_type = tmp_raise_type_2;
        exception_lineno = 123;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance,
        type_description_1,
        par_ftol,
        par_xtol,
        par_gtol,
        par_method,
        var_check
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance == cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance);
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_ftol);
        tmp_tuple_element_1 = par_ftol;
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_xtol);
        tmp_tuple_element_1 = par_xtol;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_gtol);
        tmp_tuple_element_1 = par_gtol;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_ftol);
    Py_DECREF(par_ftol);
    par_ftol = NULL;
    CHECK_OBJECT(par_xtol);
    Py_DECREF(par_xtol);
    par_xtol = NULL;
    CHECK_OBJECT(par_gtol);
    Py_DECREF(par_gtol);
    par_gtol = NULL;
    CHECK_OBJECT(var_check);
    Py_DECREF(var_check);
    var_check = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(par_ftol);
    par_ftol = NULL;
    Py_XDECREF(par_xtol);
    par_xtol = NULL;
    Py_XDECREF(par_gtol);
    par_gtol = NULL;
    CHECK_OBJECT(var_check);
    Py_DECREF(var_check);
    var_check = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_tol = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check = MAKE_FUNCTION_FRAME(tstate, code_objects_e607962ffe17b5a12655e987de75072c, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check->m_type_description == NULL);
    frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check = cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_tol);
        tmp_cmp_expr_left_1 = par_tol;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_0;
        {
            PyObject *old = par_tol;
            assert(old != NULL);
            par_tol = tmp_assign_source_1;
            Py_INCREF(par_tol);
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_tol);
        tmp_cmp_expr_left_2 = par_tol;
        tmp_cmp_expr_right_2 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_EPS(tstate);
        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[1]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        tmp_called_value_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_warn(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[44]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[45];
        CHECK_OBJECT(par_name);
        tmp_kw_call_arg_value_1_1 = par_name;
        tmp_kw_call_arg_value_2_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_EPS(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[1]);
        }

        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 112;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check->m_frame.f_lineno = 110;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check->m_frame.f_lineno = 110;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check,
        type_description_1,
        par_tol,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check == cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check);
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_tol);
    tmp_return_value = par_tol;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    par_tol = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    par_tol = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x_scale = python_pars[0];
    PyObject *par_x0 = python_pars[1];
    PyObject *var_valid = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale = MAKE_FUNCTION_FRAME(tstate, code_objects_d27e1a7f24bef0d4561ff3dae77c7160, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale->m_type_description == NULL);
    frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale = cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_x_scale);
        tmp_isinstance_inst_1 = par_x_scale;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 130;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 130;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_x_scale);
        tmp_cmp_expr_left_1 = par_x_scale;
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 130;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
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
    CHECK_OBJECT(par_x_scale);
    tmp_return_value = par_x_scale;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 134;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 134;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_x_scale);
        tmp_tuple_element_1 = par_x_scale;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[31]);
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale->m_frame.f_lineno = 134;
        tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 134;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_x_scale;
            assert(old != NULL);
            par_x_scale = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_expression_value_2 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[46]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_2);

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_x_scale);
        tmp_args_element_value_2 = par_x_scale;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale->m_frame.f_lineno = 135;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[47], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale->m_frame.f_lineno = 135;
        tmp_and_left_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_and_left_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_and_left_value_2);

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF(tmp_and_left_value_2);
        tmp_expression_value_3 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[46]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_x_scale);
        tmp_cmp_expr_left_2 = par_x_scale;
        tmp_cmp_expr_right_2 = const_int_0;
        tmp_args_element_value_3 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale->m_frame.f_lineno = 135;
        tmp_and_right_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_and_right_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_assign_source_2 = tmp_and_left_value_2;
        and_end_2:;
        assert(var_valid == NULL);
        var_valid = tmp_assign_source_2;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_3 = mod_consts[48];
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 136;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_False;
        assert(var_valid == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_valid = tmp_assign_source_3;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 133;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale->m_frame)) {
            frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_valid);
        tmp_operand_value_1 = var_valid;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 139;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[49];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale->m_frame.f_lineno = 140;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_state.exception_type = tmp_raise_type_1;
        exception_lineno = 140;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_4;
        if (par_x_scale == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[50]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_x_scale;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[32]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = const_int_0;
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_5 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_expression_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 144;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[33]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_x_scale == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[50]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 144;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = par_x_scale;
        CHECK_OBJECT(par_x0);
        tmp_expression_value_6 = par_x0;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[51]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 144;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x_scale;
            par_x_scale = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        if (par_x_scale == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[50]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 146;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = par_x_scale;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[51]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 146;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_expression_value_8 = par_x0;
        tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[51]);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_cmp_expr_left_5);

            exception_lineno = 146;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 146;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[52];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale->m_frame.f_lineno = 147;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_state.exception_type = tmp_raise_type_2;
        exception_lineno = 147;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    if (par_x_scale == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[50]);
        NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
        CHAIN_EXCEPTION(tstate, exception_state.exception_value);

        exception_lineno = 149;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_x_scale;
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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale,
        type_description_1,
        par_x_scale,
        par_x0,
        var_valid
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale == cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale);
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_x_scale);
    par_x_scale = NULL;
    Py_XDECREF(var_valid);
    var_valid = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(par_x_scale);
    par_x_scale = NULL;
    Py_XDECREF(var_valid);
    var_valid = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_jac_sparsity = python_pars[0];
    PyObject *par_m = python_pars[1];
    PyObject *par_n = python_pars[2];
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_jac_sparsity);
        tmp_cmp_expr_left_1 = par_jac_sparsity;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    branch_no_1:;
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity = MAKE_FUNCTION_FRAME(tstate, code_objects_3b68af000c169e933e6d876f27960385, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity->m_type_description == NULL);
    frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity = cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity) == 2);

    // Framed code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_issparse(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[53]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_jac_sparsity);
        tmp_args_element_value_1 = par_jac_sparsity;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity->m_frame.f_lineno = 156;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_jac_sparsity);
        tmp_args_element_value_2 = par_jac_sparsity;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity->m_frame.f_lineno = 157;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[12], tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_jac_sparsity;
            assert(old != NULL);
            par_jac_sparsity = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_tuple_element_1;
        if (par_jac_sparsity == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[54]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 159;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = par_jac_sparsity;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[51]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 159;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_m);
        tmp_tuple_element_1 = par_m;
        tmp_cmp_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_n);
        tmp_tuple_element_1 = par_n;
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_2, 1, tmp_tuple_element_1);
        tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 159;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[55];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity->m_frame.f_lineno = 160;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_state.exception_type = tmp_raise_type_1;
        exception_lineno = 160;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_tuple_element_2;
        if (par_jac_sparsity == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[54]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 162;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = par_jac_sparsity;
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_3;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
            tmp_called_value_2 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_group_columns(tstate);
            if (unlikely(tmp_called_value_2 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[56]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 162;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            if (par_jac_sparsity == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[54]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 162;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }

            tmp_args_element_value_3 = par_jac_sparsity;
            frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity->m_frame.f_lineno = 162;
            tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 162;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_2);
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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity,
        type_description_1,
        par_jac_sparsity,
        par_m,
        par_n
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity == cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity);
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_jac_sparsity);
    par_jac_sparsity = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(par_jac_sparsity);
    par_jac_sparsity = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function__6_huber(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_z = python_pars[0];
    PyObject *par_rho = python_pars[1];
    PyObject *par_cost_only = python_pars[2];
    PyObject *var_mask = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber = MAKE_FUNCTION_FRAME(tstate, code_objects_d7e5853c29b03a5bc7dae770a2b93958, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber->m_type_description == NULL);
    frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber = cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_z);
        tmp_cmp_expr_left_1 = par_z;
        tmp_cmp_expr_right_1 = const_int_pos_1;
        tmp_assign_source_1 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 169;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_mask == NULL);
        var_mask = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_z);
        tmp_expression_value_1 = par_z;
        CHECK_OBJECT(var_mask);
        tmp_subscript_value_1 = var_mask;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 170;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rho);
        tmp_ass_subscribed_1 = par_rho;
        tmp_tuple_element_1 = const_int_0;
        tmp_ass_subscript_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_ass_subscript_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_mask);
        tmp_tuple_element_1 = var_mask;
        PyTuple_SET_ITEM0(tmp_ass_subscript_1, 1, tmp_tuple_element_1);
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 170;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_tuple_element_2;
        tmp_mult_expr_left_1 = mod_consts[2];
        CHECK_OBJECT(par_z);
        tmp_expression_value_2 = par_z;
        CHECK_OBJECT(var_mask);
        tmp_operand_value_1 = var_mask;
        tmp_subscript_value_2 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_1);
        if (tmp_subscript_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_pow_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_pow_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_pow_expr_right_1 = mod_consts[15];
        tmp_mult_expr_right_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_FLOAT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        Py_DECREF(tmp_pow_expr_left_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = const_int_pos_1;
        tmp_ass_subvalue_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rho);
        tmp_ass_subscribed_2 = par_rho;
        tmp_tuple_element_2 = const_int_0;
        tmp_ass_subscript_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_operand_value_2;
            PyTuple_SET_ITEM0(tmp_ass_subscript_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_mask);
            tmp_operand_value_2 = var_mask;
            tmp_tuple_element_2 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 171;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_ass_subscript_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_cost_only);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_cost_only);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 172;
            type_description_1 = "oooo";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_tuple_element_3;
        tmp_ass_subvalue_3 = const_int_pos_1;
        CHECK_OBJECT(par_rho);
        tmp_ass_subscribed_3 = par_rho;
        tmp_tuple_element_3 = const_int_pos_1;
        tmp_ass_subscript_3 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_ass_subscript_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_mask);
        tmp_tuple_element_3 = var_mask;
        PyTuple_SET_ITEM0(tmp_ass_subscript_3, 1, tmp_tuple_element_3);
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscript_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 174;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_pow_expr_left_2;
        PyObject *tmp_pow_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT(par_z);
        tmp_expression_value_3 = par_z;
        CHECK_OBJECT(var_mask);
        tmp_operand_value_3 = var_mask;
        tmp_subscript_value_3 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_3);
        if (tmp_subscript_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 175;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_pow_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_pow_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 175;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_pow_expr_right_2 = mod_consts[57];
        tmp_ass_subvalue_4 = BINARY_OPERATION_POW_OBJECT_OBJECT_FLOAT(tmp_pow_expr_left_2, tmp_pow_expr_right_2);
        Py_DECREF(tmp_pow_expr_left_2);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 175;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rho);
        tmp_ass_subscribed_4 = par_rho;
        tmp_tuple_element_4 = const_int_pos_1;
        tmp_ass_subscript_4 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_operand_value_4;
            PyTuple_SET_ITEM0(tmp_ass_subscript_4, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_mask);
            tmp_operand_value_4 = var_mask;
            tmp_tuple_element_4 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_4);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 175;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_ass_subscript_4, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscript_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscript_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 175;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        PyObject *tmp_tuple_element_5;
        tmp_ass_subvalue_5 = const_int_0;
        CHECK_OBJECT(par_rho);
        tmp_ass_subscribed_5 = par_rho;
        tmp_tuple_element_5 = mod_consts[2];
        tmp_ass_subscript_5 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_ass_subscript_5, 0, tmp_tuple_element_5);
        CHECK_OBJECT(var_mask);
        tmp_tuple_element_5 = var_mask;
        PyTuple_SET_ITEM0(tmp_ass_subscript_5, 1, tmp_tuple_element_5);
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subscript_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 176;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_pow_expr_left_3;
        PyObject *tmp_pow_expr_right_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        PyObject *tmp_tuple_element_6;
        tmp_mult_expr_left_2 = mod_consts[57];
        CHECK_OBJECT(par_z);
        tmp_expression_value_4 = par_z;
        CHECK_OBJECT(var_mask);
        tmp_operand_value_5 = var_mask;
        tmp_subscript_value_4 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_5);
        if (tmp_subscript_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 177;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_pow_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_pow_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 177;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_pow_expr_right_3 = mod_consts[58];
        tmp_mult_expr_right_2 = BINARY_OPERATION_POW_OBJECT_OBJECT_FLOAT(tmp_pow_expr_left_3, tmp_pow_expr_right_3);
        Py_DECREF(tmp_pow_expr_left_3);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 177;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_6 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_ass_subvalue_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 177;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rho);
        tmp_ass_subscribed_6 = par_rho;
        tmp_tuple_element_6 = mod_consts[2];
        tmp_ass_subscript_6 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_operand_value_6;
            PyTuple_SET_ITEM0(tmp_ass_subscript_6, 0, tmp_tuple_element_6);
            CHECK_OBJECT(var_mask);
            tmp_operand_value_6 = var_mask;
            tmp_tuple_element_6 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_6);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 177;
                type_description_1 = "oooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_ass_subscript_6, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subscript_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subscript_6);
        Py_DECREF(tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 177;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber,
        type_description_1,
        par_z,
        par_rho,
        par_cost_only,
        var_mask
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber == cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber);
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares$$$function__6_huber);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_mask);
    Py_DECREF(var_mask);
    var_mask = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_mask);
    var_mask = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_z);
    Py_DECREF(par_z);
    CHECK_OBJECT(par_rho);
    Py_DECREF(par_rho);
    CHECK_OBJECT(par_cost_only);
    Py_DECREF(par_cost_only);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_z);
    Py_DECREF(par_z);
    CHECK_OBJECT(par_rho);
    Py_DECREF(par_rho);
    CHECK_OBJECT(par_cost_only);
    Py_DECREF(par_cost_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_z = python_pars[0];
    PyObject *par_rho = python_pars[1];
    PyObject *par_cost_only = python_pars[2];
    PyObject *var_t = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1 = MAKE_FUNCTION_FRAME(tstate, code_objects_1958d8b210f15e2da4bd4c74e8fe9070, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1->m_type_description == NULL);
    frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1 = cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_add_expr_left_1 = const_int_pos_1;
        CHECK_OBJECT(par_z);
        tmp_add_expr_right_1 = par_z;
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 181;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_t == NULL);
        var_t = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        tmp_mult_expr_left_1 = mod_consts[2];
        CHECK_OBJECT(var_t);
        tmp_pow_expr_left_1 = var_t;
        tmp_pow_expr_right_1 = mod_consts[15];
        tmp_sub_expr_left_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_FLOAT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = const_int_pos_1;
        tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rho);
        tmp_ass_subscribed_1 = par_rho;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_ass_subscript_res_1 == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_cost_only);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_cost_only);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 183;
            type_description_1 = "oooo";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_pow_expr_left_2;
        PyObject *tmp_pow_expr_right_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT(var_t);
        tmp_pow_expr_left_2 = var_t;
        tmp_pow_expr_right_2 = mod_consts[57];
        tmp_ass_subvalue_2 = BINARY_OPERATION_POW_OBJECT_OBJECT_FLOAT(tmp_pow_expr_left_2, tmp_pow_expr_right_2);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 185;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rho);
        tmp_ass_subscribed_2 = par_rho;
        tmp_ass_subscript_2 = const_int_pos_1;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_ass_subscript_res_2 == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 185;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_pow_expr_left_3;
        PyObject *tmp_pow_expr_right_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        int tmp_ass_subscript_res_3;
        tmp_mult_expr_left_2 = mod_consts[57];
        CHECK_OBJECT(var_t);
        tmp_pow_expr_left_3 = var_t;
        tmp_pow_expr_right_3 = mod_consts[58];
        tmp_mult_expr_right_2 = BINARY_OPERATION_POW_OBJECT_OBJECT_FLOAT(tmp_pow_expr_left_3, tmp_pow_expr_right_3);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 186;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_3 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 186;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rho);
        tmp_ass_subscribed_3 = par_rho;
        tmp_ass_subscript_3 = mod_consts[2];
        tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, 2, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_ass_subscript_res_3 == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 186;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1,
        type_description_1,
        par_z,
        par_rho,
        par_cost_only,
        var_t
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1 == cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1);
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1 = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_t);
    Py_DECREF(var_t);
    var_t = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_t);
    var_t = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_z);
    Py_DECREF(par_z);
    CHECK_OBJECT(par_rho);
    Py_DECREF(par_rho);
    CHECK_OBJECT(par_cost_only);
    Py_DECREF(par_cost_only);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_z);
    Py_DECREF(par_z);
    CHECK_OBJECT(par_rho);
    Py_DECREF(par_rho);
    CHECK_OBJECT(par_cost_only);
    Py_DECREF(par_cost_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function__8_cauchy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_z = python_pars[0];
    PyObject *par_rho = python_pars[1];
    PyObject *par_cost_only = python_pars[2];
    PyObject *var_t = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy = MAKE_FUNCTION_FRAME(tstate, code_objects_e27279e5173f8ea7c6695755ec5e4509, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy->m_type_description == NULL);
    frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy = cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        tmp_called_instance_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 190;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_z);
        tmp_args_element_value_1 = par_z;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy->m_frame.f_lineno = 190;
        tmp_ass_subvalue_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[59], tmp_args_element_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 190;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rho);
        tmp_ass_subscribed_1 = par_rho;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_ass_subscript_res_1 == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 190;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_cost_only);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_cost_only);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 191;
            type_description_1 = "oooo";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_add_expr_left_1 = const_int_pos_1;
        CHECK_OBJECT(par_z);
        tmp_add_expr_right_1 = par_z;
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_t == NULL);
        var_t = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        tmp_truediv_expr_left_1 = const_int_pos_1;
        CHECK_OBJECT(var_t);
        tmp_truediv_expr_right_1 = var_t;
        tmp_ass_subvalue_2 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rho);
        tmp_ass_subscribed_2 = par_rho;
        tmp_ass_subscript_2 = const_int_pos_1;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_ass_subscript_res_2 == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        int tmp_ass_subscript_res_3;
        tmp_truediv_expr_left_2 = const_int_neg_1;
        CHECK_OBJECT(var_t);
        tmp_pow_expr_left_1 = var_t;
        tmp_pow_expr_right_1 = mod_consts[2];
        tmp_truediv_expr_right_2 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 195;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_3 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 195;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rho);
        tmp_ass_subscribed_3 = par_rho;
        tmp_ass_subscript_3 = mod_consts[2];
        tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, 2, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_ass_subscript_res_3 == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 195;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy,
        type_description_1,
        par_z,
        par_rho,
        par_cost_only,
        var_t
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy == cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy);
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares$$$function__8_cauchy);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_t);
    var_t = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_t);
    var_t = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_z);
    Py_DECREF(par_z);
    CHECK_OBJECT(par_rho);
    Py_DECREF(par_rho);
    CHECK_OBJECT(par_cost_only);
    Py_DECREF(par_cost_only);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_z);
    Py_DECREF(par_z);
    CHECK_OBJECT(par_rho);
    Py_DECREF(par_rho);
    CHECK_OBJECT(par_cost_only);
    Py_DECREF(par_cost_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function__9_arctan(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_z = python_pars[0];
    PyObject *par_rho = python_pars[1];
    PyObject *par_cost_only = python_pars[2];
    PyObject *var_t = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan = MAKE_FUNCTION_FRAME(tstate, code_objects_da932b68a72468258fc60c4b95d169d4, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan->m_type_description == NULL);
    frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan = cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        tmp_called_instance_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 199;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_z);
        tmp_args_element_value_1 = par_z;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan->m_frame.f_lineno = 199;
        tmp_ass_subvalue_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[60], tmp_args_element_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rho);
        tmp_ass_subscribed_1 = par_rho;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_ass_subscript_res_1 == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_cost_only);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_cost_only);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 200;
            type_description_1 = "oooo";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        tmp_add_expr_left_1 = const_int_pos_1;
        CHECK_OBJECT(par_z);
        tmp_pow_expr_left_1 = par_z;
        tmp_pow_expr_right_1 = mod_consts[2];
        tmp_add_expr_right_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 202;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 202;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_t == NULL);
        var_t = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        tmp_truediv_expr_left_1 = const_int_pos_1;
        CHECK_OBJECT(var_t);
        tmp_truediv_expr_right_1 = var_t;
        tmp_ass_subvalue_2 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 203;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rho);
        tmp_ass_subscribed_2 = par_rho;
        tmp_ass_subscript_2 = const_int_pos_1;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_ass_subscript_res_2 == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 203;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_pow_expr_left_2;
        PyObject *tmp_pow_expr_right_2;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        int tmp_ass_subscript_res_3;
        tmp_mult_expr_left_1 = mod_consts[61];
        CHECK_OBJECT(par_z);
        tmp_mult_expr_right_1 = par_z;
        tmp_truediv_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_t);
        tmp_pow_expr_left_2 = var_t;
        tmp_pow_expr_right_2 = mod_consts[2];
        tmp_truediv_expr_right_2 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_2, tmp_pow_expr_right_2);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 204;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rho);
        tmp_ass_subscribed_3 = par_rho;
        tmp_ass_subscript_3 = mod_consts[2];
        tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, 2, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_ass_subscript_res_3 == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan,
        type_description_1,
        par_z,
        par_rho,
        par_cost_only,
        var_t
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan == cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan);
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares$$$function__9_arctan);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_t);
    var_t = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_t);
    var_t = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_z);
    Py_DECREF(par_z);
    CHECK_OBJECT(par_rho);
    Py_DECREF(par_rho);
    CHECK_OBJECT(par_cost_only);
    Py_DECREF(par_cost_only);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_z);
    Py_DECREF(par_z);
    CHECK_OBJECT(par_rho);
    Py_DECREF(par_rho);
    CHECK_OBJECT(par_cost_only);
    Py_DECREF(par_cost_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[0];
    struct Nuitka_CellObject *par_loss = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_f_scale = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *var_rho = Nuitka_Cell_NewEmpty();
    PyObject *var_loss_function = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function = MAKE_FUNCTION_FRAME(tstate, code_objects_88b9a2ab63c1c8766a6bdc9f04a45053, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function->m_type_description == NULL);
    frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function = cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_loss));
        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(par_loss);
        tmp_cmp_expr_right_1 = mod_consts[62];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;
            type_description_1 = "occco";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(Nuitka_Cell_GET(par_loss));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_loss);
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function->m_frame.f_lineno = 215;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 215;
            type_description_1 = "occco";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 215;
            type_description_1 = "occco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_IMPLEMENTED_LOSSES(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[63]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 216;
            type_description_1 = "occco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_loss));
        tmp_subscript_value_1 = Nuitka_Cell_GET(par_loss);
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 216;
            type_description_1 = "occco";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_loss);
            Nuitka_Cell_SET(par_loss, tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_1;
        tmp_called_instance_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 217;
            type_description_1 = "occco";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[65];
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_m);
        tmp_tuple_element_1 = par_m;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_1);
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function->m_frame.f_lineno = 217;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[64], tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;
            type_description_1 = "occco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_rho) == NULL);
        Nuitka_Cell_SET(var_rho, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_defaults_1;
        struct Nuitka_CellObject *tmp_closure_1[3];
        tmp_defaults_1 = mod_consts[66];
        Py_INCREF(tmp_defaults_1);

        tmp_closure_1[0] = par_f_scale;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_loss;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = var_rho;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_3 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function(tstate, tmp_defaults_1, tmp_closure_1);

        assert(var_loss_function == NULL);
        var_loss_function = tmp_assign_source_3;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_defaults_2;
        struct Nuitka_CellObject *tmp_closure_2[2];
        tmp_defaults_2 = mod_consts[66];
        Py_INCREF(tmp_defaults_2);

        tmp_closure_2[0] = par_f_scale;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = par_loss;
        Py_INCREF(tmp_closure_2[1]);

        tmp_assign_source_4 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function(tstate, tmp_defaults_2, tmp_closure_2);

        assert(var_loss_function == NULL);
        var_loss_function = tmp_assign_source_4;
    }
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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function,
        type_description_1,
        par_m,
        par_loss,
        par_f_scale,
        var_rho,
        var_loss_function
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function == cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function);
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_loss_function);
    tmp_return_value = var_loss_function;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_loss);
    Py_DECREF(par_loss);
    par_loss = NULL;
    CHECK_OBJECT(var_rho);
    Py_DECREF(var_rho);
    var_rho = NULL;
    Py_XDECREF(var_loss_function);
    var_loss_function = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(par_loss);
    Py_DECREF(par_loss);
    par_loss = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_f_scale);
    Py_DECREF(par_f_scale);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_f_scale);
    Py_DECREF(par_f_scale);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[0];
    PyObject *par_cost_only = python_pars[1];
    PyObject *var_z = NULL;
    PyObject *tmp_inplace_assign_subscript_1__target = NULL;
    PyObject *tmp_inplace_assign_subscript_1__value = NULL;
    PyObject *tmp_inplace_assign_subscript_2__target = NULL;
    PyObject *tmp_inplace_assign_subscript_2__value = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function = MAKE_FUNCTION_FRAME(tstate, code_objects_5210a244ba2d583bc7fa99a778ff0b4e, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function->m_type_description == NULL);
    frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function = cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(par_f);
        tmp_truediv_expr_left_1 = par_f;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[69]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 220;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_right_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_pow_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_pow_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 220;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        tmp_pow_expr_right_1 = mod_consts[2];
        tmp_assign_source_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        Py_DECREF(tmp_pow_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 220;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        assert(var_z == NULL);
        var_z = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[70]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 221;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(var_z);
        tmp_kw_call_arg_value_0_1 = var_z;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 221;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_1 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(par_cost_only);
        tmp_kw_call_dict_value_0_1 = par_cost_only;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function->m_frame.f_lineno = 221;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[72]);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 221;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_cost_only);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_cost_only);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;
            type_description_1 = "oooccc";
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
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_pow_expr_left_2;
        PyObject *tmp_pow_expr_right_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_mult_expr_left_2 = mod_consts[15];
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[69]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 223;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_pow_expr_left_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_pow_expr_right_2 = mod_consts[2];
        tmp_mult_expr_right_2 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_2, tmp_pow_expr_right_2);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 223;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 223;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 223;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[73]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 223;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 223;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_subscript_value_1 = const_int_0;
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 223;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function->m_frame.f_lineno = 223;
        tmp_mult_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 223;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 223;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 224;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_2 = Nuitka_Cell_GET(self->m_closure[2]);
        assert(tmp_inplace_assign_subscript_1__target == NULL);
        Py_INCREF(tmp_assign_source_2);
        tmp_inplace_assign_subscript_1__target = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
        tmp_expression_value_3 = tmp_inplace_assign_subscript_1__target;
        tmp_subscript_value_2 = const_int_0;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 0);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 224;
            type_description_1 = "oooccc";
            goto try_except_handler_2;
        }
        assert(tmp_inplace_assign_subscript_1__value == NULL);
        tmp_inplace_assign_subscript_1__value = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_imult_expr_left_1;
        PyObject *tmp_imult_expr_right_1;
        PyObject *tmp_pow_expr_left_3;
        PyObject *tmp_pow_expr_right_3;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
        tmp_imult_expr_left_1 = tmp_inplace_assign_subscript_1__value;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[69]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 224;
            type_description_1 = "oooccc";
            goto try_except_handler_2;
        }

        tmp_pow_expr_left_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_pow_expr_right_3 = mod_consts[2];
        tmp_imult_expr_right_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_3, tmp_pow_expr_right_3);
        if (tmp_imult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 224;
            type_description_1 = "oooccc";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_MULT_OBJECT_OBJECT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
        Py_DECREF(tmp_imult_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 224;
            type_description_1 = "oooccc";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = tmp_imult_expr_left_1;
        tmp_inplace_assign_subscript_1__value = tmp_assign_source_4;

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
        tmp_ass_subvalue_1 = tmp_inplace_assign_subscript_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscript_1__target;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
        if (tmp_ass_subscript_res_1 == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 224;
            type_description_1 = "oooccc";
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
    Py_DECREF(tmp_inplace_assign_subscript_1__target);
    tmp_inplace_assign_subscript_1__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_1__value);
    tmp_inplace_assign_subscript_1__value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
    Py_DECREF(tmp_inplace_assign_subscript_1__target);
    tmp_inplace_assign_subscript_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
    Py_DECREF(tmp_inplace_assign_subscript_1__value);
    tmp_inplace_assign_subscript_1__value = NULL;
    {
        PyObject *tmp_assign_source_5;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 225;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_5 = Nuitka_Cell_GET(self->m_closure[2]);
        assert(tmp_inplace_assign_subscript_2__target == NULL);
        Py_INCREF(tmp_assign_source_5);
        tmp_inplace_assign_subscript_2__target = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
        tmp_expression_value_4 = tmp_inplace_assign_subscript_2__target;
        tmp_subscript_value_3 = mod_consts[2];
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_3, 2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 225;
            type_description_1 = "oooccc";
            goto try_except_handler_3;
        }
        assert(tmp_inplace_assign_subscript_2__value == NULL);
        tmp_inplace_assign_subscript_2__value = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_itruediv_expr_left_1;
        PyObject *tmp_itruediv_expr_right_1;
        PyObject *tmp_pow_expr_left_4;
        PyObject *tmp_pow_expr_right_4;
        CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
        tmp_itruediv_expr_left_1 = tmp_inplace_assign_subscript_2__value;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[69]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 225;
            type_description_1 = "oooccc";
            goto try_except_handler_3;
        }

        tmp_pow_expr_left_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_pow_expr_right_4 = mod_consts[2];
        tmp_itruediv_expr_right_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_4, tmp_pow_expr_right_4);
        if (tmp_itruediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 225;
            type_description_1 = "oooccc";
            goto try_except_handler_3;
        }
        tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_1, tmp_itruediv_expr_right_1);
        Py_DECREF(tmp_itruediv_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 225;
            type_description_1 = "oooccc";
            goto try_except_handler_3;
        }
        tmp_assign_source_7 = tmp_itruediv_expr_left_1;
        tmp_inplace_assign_subscript_2__value = tmp_assign_source_7;

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
        tmp_ass_subvalue_2 = tmp_inplace_assign_subscript_2__value;
        CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
        tmp_ass_subscribed_2 = tmp_inplace_assign_subscript_2__target;
        tmp_ass_subscript_2 = mod_consts[2];
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, 2, tmp_ass_subvalue_2);
        if (tmp_ass_subscript_res_2 == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 225;
            type_description_1 = "oooccc";
            goto try_except_handler_3;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
    Py_DECREF(tmp_inplace_assign_subscript_2__target);
    tmp_inplace_assign_subscript_2__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_2__value);
    tmp_inplace_assign_subscript_2__value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
    Py_DECREF(tmp_inplace_assign_subscript_2__target);
    tmp_inplace_assign_subscript_2__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
    Py_DECREF(tmp_inplace_assign_subscript_2__value);
    tmp_inplace_assign_subscript_2__value = NULL;
    if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

        FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[71]);
        NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
        CHAIN_EXCEPTION(tstate, exception_state.exception_value);

        exception_lineno = 226;
        type_description_1 = "oooccc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = Nuitka_Cell_GET(self->m_closure[2]);
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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function,
        type_description_1,
        par_f,
        par_cost_only,
        var_z,
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function == cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function);
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_z);
    Py_DECREF(var_z);
    var_z = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_z);
    var_z = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    CHECK_OBJECT(par_cost_only);
    Py_DECREF(par_cost_only);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    CHECK_OBJECT(par_cost_only);
    Py_DECREF(par_cost_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[0];
    PyObject *par_cost_only = python_pars[1];
    PyObject *var_z = NULL;
    PyObject *var_rho = NULL;
    PyObject *tmp_inplace_assign_subscript_1__target = NULL;
    PyObject *tmp_inplace_assign_subscript_1__value = NULL;
    PyObject *tmp_inplace_assign_subscript_2__target = NULL;
    PyObject *tmp_inplace_assign_subscript_2__value = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function = MAKE_FUNCTION_FRAME(tstate, code_objects_8e428f4c00fd069cb3a7630646a009ef, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function->m_type_description == NULL);
    frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function = cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(par_f);
        tmp_truediv_expr_left_1 = par_f;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[69]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 229;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_right_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_pow_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_pow_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 229;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        tmp_pow_expr_right_1 = mod_consts[2];
        tmp_assign_source_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        Py_DECREF(tmp_pow_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 229;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        assert(var_z == NULL);
        var_z = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[70]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 230;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(var_z);
        tmp_args_element_value_1 = var_z;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function->m_frame.f_lineno = 230;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 230;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        assert(var_rho == NULL);
        var_rho = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_cost_only);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_cost_only);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 231;
            type_description_1 = "oooocc";
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
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_pow_expr_left_2;
        PyObject *tmp_pow_expr_right_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_mult_expr_left_2 = mod_consts[15];
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[69]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 232;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_pow_expr_left_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_pow_expr_right_2 = mod_consts[2];
        tmp_mult_expr_right_2 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_2, tmp_pow_expr_right_2);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 232;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 232;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 232;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[73]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 232;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rho);
        tmp_expression_value_2 = var_rho;
        tmp_subscript_value_1 = const_int_0;
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 232;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function->m_frame.f_lineno = 232;
        tmp_mult_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 232;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 232;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(var_rho);
        tmp_assign_source_3 = var_rho;
        assert(tmp_inplace_assign_subscript_1__target == NULL);
        Py_INCREF(tmp_assign_source_3);
        tmp_inplace_assign_subscript_1__target = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
        tmp_expression_value_3 = tmp_inplace_assign_subscript_1__target;
        tmp_subscript_value_2 = const_int_0;
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 0);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 233;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }
        assert(tmp_inplace_assign_subscript_1__value == NULL);
        tmp_inplace_assign_subscript_1__value = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_imult_expr_left_1;
        PyObject *tmp_imult_expr_right_1;
        PyObject *tmp_pow_expr_left_3;
        PyObject *tmp_pow_expr_right_3;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
        tmp_imult_expr_left_1 = tmp_inplace_assign_subscript_1__value;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[69]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 233;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }

        tmp_pow_expr_left_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_pow_expr_right_3 = mod_consts[2];
        tmp_imult_expr_right_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_3, tmp_pow_expr_right_3);
        if (tmp_imult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 233;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_MULT_OBJECT_OBJECT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
        Py_DECREF(tmp_imult_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 233;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = tmp_imult_expr_left_1;
        tmp_inplace_assign_subscript_1__value = tmp_assign_source_5;

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
        tmp_ass_subvalue_1 = tmp_inplace_assign_subscript_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscript_1__target;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
        if (tmp_ass_subscript_res_1 == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 233;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
    Py_DECREF(tmp_inplace_assign_subscript_1__target);
    tmp_inplace_assign_subscript_1__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_1__value);
    tmp_inplace_assign_subscript_1__value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
    Py_DECREF(tmp_inplace_assign_subscript_1__target);
    tmp_inplace_assign_subscript_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
    Py_DECREF(tmp_inplace_assign_subscript_1__value);
    tmp_inplace_assign_subscript_1__value = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(var_rho);
        tmp_assign_source_6 = var_rho;
        assert(tmp_inplace_assign_subscript_2__target == NULL);
        Py_INCREF(tmp_assign_source_6);
        tmp_inplace_assign_subscript_2__target = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
        tmp_expression_value_4 = tmp_inplace_assign_subscript_2__target;
        tmp_subscript_value_3 = mod_consts[2];
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_3, 2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 234;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }
        assert(tmp_inplace_assign_subscript_2__value == NULL);
        tmp_inplace_assign_subscript_2__value = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_itruediv_expr_left_1;
        PyObject *tmp_itruediv_expr_right_1;
        PyObject *tmp_pow_expr_left_4;
        PyObject *tmp_pow_expr_right_4;
        CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
        tmp_itruediv_expr_left_1 = tmp_inplace_assign_subscript_2__value;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[69]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 234;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }

        tmp_pow_expr_left_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_pow_expr_right_4 = mod_consts[2];
        tmp_itruediv_expr_right_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_4, tmp_pow_expr_right_4);
        if (tmp_itruediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 234;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }
        tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_1, tmp_itruediv_expr_right_1);
        Py_DECREF(tmp_itruediv_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 234;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }
        tmp_assign_source_8 = tmp_itruediv_expr_left_1;
        tmp_inplace_assign_subscript_2__value = tmp_assign_source_8;

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
        tmp_ass_subvalue_2 = tmp_inplace_assign_subscript_2__value;
        CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
        tmp_ass_subscribed_2 = tmp_inplace_assign_subscript_2__target;
        tmp_ass_subscript_2 = mod_consts[2];
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, 2, tmp_ass_subvalue_2);
        if (tmp_ass_subscript_res_2 == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 234;
            type_description_1 = "oooocc";
            goto try_except_handler_3;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
    Py_DECREF(tmp_inplace_assign_subscript_2__target);
    tmp_inplace_assign_subscript_2__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_2__value);
    tmp_inplace_assign_subscript_2__value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;


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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function,
        type_description_1,
        par_f,
        par_cost_only,
        var_z,
        var_rho,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function == cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function);
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
    Py_DECREF(tmp_inplace_assign_subscript_2__target);
    tmp_inplace_assign_subscript_2__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
    Py_DECREF(tmp_inplace_assign_subscript_2__value);
    tmp_inplace_assign_subscript_2__value = NULL;
    CHECK_OBJECT(var_rho);
    tmp_return_value = var_rho;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_z);
    Py_DECREF(var_z);
    var_z = NULL;
    CHECK_OBJECT(var_rho);
    Py_DECREF(var_rho);
    var_rho = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_z);
    var_z = NULL;
    Py_XDECREF(var_rho);
    var_rho = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    CHECK_OBJECT(par_cost_only);
    Py_DECREF(par_cost_only);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    CHECK_OBJECT(par_cost_only);
    Py_DECREF(par_cost_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function__11_least_squares(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_fun = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_x0 = python_pars[1];
    struct Nuitka_CellObject *par_jac = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_bounds = Nuitka_Cell_New1(python_pars[3]);
    PyObject *par_method = python_pars[4];
    PyObject *par_ftol = python_pars[5];
    PyObject *par_xtol = python_pars[6];
    PyObject *par_gtol = python_pars[7];
    PyObject *par_x_scale = python_pars[8];
    PyObject *par_loss = python_pars[9];
    PyObject *par_f_scale = python_pars[10];
    struct Nuitka_CellObject *par_diff_step = Nuitka_Cell_New1(python_pars[11]);
    PyObject *par_tr_solver = python_pars[12];
    PyObject *par_tr_options = python_pars[13];
    struct Nuitka_CellObject *par_jac_sparsity = Nuitka_Cell_New1(python_pars[14]);
    PyObject *par_max_nfev = python_pars[15];
    PyObject *par_verbose = python_pars[16];
    struct Nuitka_CellObject *par_args = Nuitka_Cell_New1(python_pars[17]);
    struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[18]);
    PyObject *var_lb = NULL;
    PyObject *var_ub = NULL;
    PyObject *var_fun_wrapped = NULL;
    PyObject *var_f0 = NULL;
    PyObject *var_n = NULL;
    PyObject *var_m = NULL;
    PyObject *var_loss_function = NULL;
    PyObject *var_rho = NULL;
    PyObject *var_initial_cost = NULL;
    PyObject *var_J0 = NULL;
    PyObject *var_jac_wrapped = NULL;
    PyObject *var_jac_scale = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares = MAKE_FUNCTION_FRAME(tstate, code_objects_7c245c9c0285e6bc89d8fb6634dbc360, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_type_description == NULL);
    frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares = cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_method);
        tmp_cmp_expr_left_1 = par_method;
        tmp_cmp_expr_right_1 = mod_consts[74];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 761;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[75];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 762;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_state.exception_type = tmp_raise_type_1;
        exception_lineno = 762;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_jac));
        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(par_jac);
        tmp_cmp_expr_right_2 = mod_consts[76];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 764;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(Nuitka_Cell_GET(par_jac));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_jac);
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 764;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 764;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 764;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[77];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 765;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_state.exception_type = tmp_raise_type_2;
        exception_lineno = 765;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_tr_solver);
        tmp_cmp_expr_left_3 = par_tr_solver;
        tmp_cmp_expr_right_3 = mod_consts[78];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 768;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[79];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 769;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_state.exception_type = tmp_raise_type_3;
        exception_lineno = 769;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        int tmp_and_left_truth_2;
        bool tmp_and_left_value_2;
        bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_loss);
        tmp_cmp_expr_left_4 = par_loss;
        tmp_cmp_expr_right_4 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_IMPLEMENTED_LOSSES(tstate);
        if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[63]);
        }

        if (tmp_cmp_expr_right_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 771;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 771;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(par_loss);
        tmp_args_element_value_2 = par_loss;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 771;
        tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 771;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 771;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? true : false;
        tmp_condition_result_4 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_4 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[80];
        tmp_expression_value_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_IMPLEMENTED_LOSSES(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[63]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 773;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[81]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 773;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 773;
        tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 773;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 772;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_4 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_make_exception_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 772;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 772;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_4);
        Py_DECREF(tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_state.exception_type = tmp_raise_type_4;
        exception_lineno = 772;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_method);
        tmp_cmp_expr_left_5 = par_method;
        tmp_cmp_expr_right_5 = mod_consts[41];
        tmp_and_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 775;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 775;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(par_loss);
        tmp_cmp_expr_left_6 = par_loss;
        tmp_cmp_expr_right_6 = mod_consts[62];
        tmp_and_right_value_3 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 775;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_5 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_make_exception_arg_5;
        tmp_make_exception_arg_5 = mod_consts[82];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 776;
        tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_5);
        assert(!(tmp_raise_type_5 == NULL));
        exception_state.exception_type = tmp_raise_type_5;
        exception_lineno = 776;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(par_verbose);
        tmp_cmp_expr_left_7 = par_verbose;
        tmp_cmp_expr_right_7 = mod_consts[83];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 778;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_make_exception_arg_6;
        tmp_make_exception_arg_6 = mod_consts[84];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 779;
        tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_6);
        assert(!(tmp_raise_type_6 == NULL));
        exception_state.exception_type = tmp_raise_type_6;
        exception_lineno = 779;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_8;
        nuitka_digit tmp_cmp_expr_right_8;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_bounds));
        tmp_len_arg_1 = Nuitka_Cell_GET(par_bounds);
        tmp_cmp_expr_left_8 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 781;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_8 = 2;
        tmp_condition_result_7 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_make_exception_arg_7;
        tmp_make_exception_arg_7 = mod_consts[85];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 782;
        tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_7);
        assert(!(tmp_raise_type_7 == NULL));
        exception_state.exception_type = tmp_raise_type_7;
        exception_lineno = 782;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(par_max_nfev);
        tmp_cmp_expr_left_9 = par_max_nfev;
        tmp_cmp_expr_right_9 = Py_None;
        tmp_and_left_value_4 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        CHECK_OBJECT(par_max_nfev);
        tmp_cmp_expr_left_10 = par_max_nfev;
        tmp_cmp_expr_right_10 = const_int_0;
        tmp_and_right_value_4 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_and_right_value_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 784;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_8 = tmp_and_left_value_4;
        and_end_4:;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_make_exception_arg_8;
        tmp_make_exception_arg_8 = mod_consts[86];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 785;
        tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_8);
        assert(!(tmp_raise_type_8 == NULL));
        exception_state.exception_type = tmp_raise_type_8;
        exception_lineno = 785;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        int tmp_truth_name_1;
        tmp_called_instance_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 787;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_args_element_value_3 = par_x0;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 787;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[87], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 787;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 787;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_make_exception_arg_9;
        tmp_make_exception_arg_9 = mod_consts[88];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 788;
        tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_9);
        assert(!(tmp_raise_type_9 == NULL));
        exception_state.exception_type = tmp_raise_type_9;
        exception_lineno = 788;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_9:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_3 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_called_instance_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 790;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_args_element_value_4 = par_x0;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 790;
        tmp_called_instance_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[89], tmp_args_element_value_4);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 790;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 790;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[90],
            PyTuple_GET_ITEM(mod_consts[91], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 790;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x0;
            assert(old != NULL);
            par_x0 = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_x0);
        tmp_expression_value_2 = par_x0;
        tmp_cmp_expr_left_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[32]);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 792;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_11 = const_int_pos_1;
        tmp_condition_result_10 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 792;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_make_exception_arg_10;
        tmp_make_exception_arg_10 = mod_consts[92];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 793;
        tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_10);
        assert(!(tmp_raise_type_10 == NULL));
        exception_state.exception_type = tmp_raise_type_10;
        exception_lineno = 793;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_10:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_4 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_prepare_bounds(tstate);
        if (unlikely(tmp_called_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[93]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 795;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_bounds));
        tmp_args_element_value_5 = Nuitka_Cell_GET(par_bounds);
        CHECK_OBJECT(par_x0);
        tmp_expression_value_4 = par_x0;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[51]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 795;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = const_int_0;
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 795;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_2;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 795;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 795;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 795;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 795;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 795;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 795;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_lb == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_lb = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_ub == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_ub = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_11;
        int tmp_and_left_truth_5;
        nuitka_bool tmp_and_left_value_5;
        nuitka_bool tmp_and_right_value_5;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_method);
        tmp_cmp_expr_left_12 = par_method;
        tmp_cmp_expr_right_12 = mod_consts[41];
        tmp_and_left_value_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        if (tmp_and_left_value_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 797;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 797;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_5 == 1) {
            goto and_right_5;
        } else {
            goto and_left_5;
        }
        and_right_5:;
        tmp_expression_value_5 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_expression_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 797;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[46]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 797;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lb);
        tmp_cmp_expr_left_13 = var_lb;
        tmp_expression_value_6 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_expression_value_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_5);

            exception_lineno = 797;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[19]);
        if (tmp_operand_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 797;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_13 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_cmp_expr_right_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 797;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_left_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        Py_DECREF(tmp_cmp_expr_right_13);
        if (tmp_bitand_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 797;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ub);
        tmp_cmp_expr_left_14 = var_ub;
        tmp_expression_value_7 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_expression_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_bitand_expr_left_1);

            exception_lineno = 797;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[19]);
        if (tmp_cmp_expr_right_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_bitand_expr_left_1);

            exception_lineno = 797;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        Py_DECREF(tmp_cmp_expr_right_14);
        if (tmp_bitand_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_bitand_expr_left_1);

            exception_lineno = 797;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_left_1);
        Py_DECREF(tmp_bitand_expr_right_1);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 797;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 797;
        tmp_operand_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_operand_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 797;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 797;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_11 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_condition_result_11 = tmp_and_left_value_5;
        and_end_5:;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_make_exception_arg_11;
        tmp_make_exception_arg_11 = mod_consts[94];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 798;
        tmp_raise_type_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_11);
        assert(!(tmp_raise_type_11 == NULL));
        exception_state.exception_type = tmp_raise_type_11;
        exception_lineno = 798;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_lb);
        tmp_expression_value_8 = var_lb;
        tmp_cmp_expr_left_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[51]);
        if (tmp_cmp_expr_left_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 800;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_expression_value_9 = par_x0;
        tmp_cmp_expr_right_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[51]);
        if (tmp_cmp_expr_right_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_cmp_expr_left_15);

            exception_lineno = 800;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        Py_DECREF(tmp_cmp_expr_left_15);
        Py_DECREF(tmp_cmp_expr_right_15);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 800;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 800;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_ub);
        tmp_expression_value_10 = var_ub;
        tmp_cmp_expr_left_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[51]);
        if (tmp_cmp_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 800;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_expression_value_11 = par_x0;
        tmp_cmp_expr_right_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[51]);
        if (tmp_cmp_expr_right_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_cmp_expr_left_16);

            exception_lineno = 800;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        Py_DECREF(tmp_cmp_expr_left_16);
        Py_DECREF(tmp_cmp_expr_right_16);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 800;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_12 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_make_exception_arg_12;
        tmp_make_exception_arg_12 = mod_consts[95];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 801;
        tmp_raise_type_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_12);
        assert(!(tmp_raise_type_12 == NULL));
        exception_state.exception_type = tmp_raise_type_12;
        exception_lineno = 801;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        int tmp_truth_name_2;
        tmp_expression_value_12 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_expression_value_12 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 803;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[96]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 803;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lb);
        tmp_cmp_expr_left_17 = var_lb;
        CHECK_OBJECT(var_ub);
        tmp_cmp_expr_right_17 = var_ub;
        tmp_args_element_value_8 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 803;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 803;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 803;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 803;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_raise_type_13;
        PyObject *tmp_make_exception_arg_13;
        tmp_make_exception_arg_13 = mod_consts[97];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 804;
        tmp_raise_type_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_13);
        assert(!(tmp_raise_type_13 == NULL));
        exception_state.exception_type = tmp_raise_type_13;
        exception_lineno = 804;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_13:;
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_7 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_in_bounds(tstate);
        if (unlikely(tmp_called_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[98]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 807;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_args_element_value_9 = par_x0;
        CHECK_OBJECT(var_lb);
        tmp_args_element_value_10 = var_lb;
        CHECK_OBJECT(var_ub);
        tmp_args_element_value_11 = var_ub;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 807;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_operand_value_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
        }

        if (tmp_operand_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 807;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 807;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_14;
        PyObject *tmp_make_exception_arg_14;
        tmp_make_exception_arg_14 = mod_consts[99];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 808;
        tmp_raise_type_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_14);
        assert(!(tmp_raise_type_14 == NULL));
        exception_state.exception_type = tmp_raise_type_14;
        exception_lineno = 808;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_14:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_called_value_8 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_check_x_scale(tstate);
        if (unlikely(tmp_called_value_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[100]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 810;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x_scale);
        tmp_args_element_value_12 = par_x_scale;
        CHECK_OBJECT(par_x0);
        tmp_args_element_value_13 = par_x0;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 810;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 810;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x_scale;
            assert(old != NULL);
            par_x_scale = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_9 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_check_tolerance(tstate);
        if (unlikely(tmp_called_value_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[101]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 812;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_ftol);
        tmp_args_element_value_14 = par_ftol;
        CHECK_OBJECT(par_xtol);
        tmp_args_element_value_15 = par_xtol;
        CHECK_OBJECT(par_gtol);
        tmp_args_element_value_16 = par_gtol;
        CHECK_OBJECT(par_method);
        tmp_args_element_value_17 = par_method;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 812;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_9, call_args);
        }

        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 812;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 812;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 3);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 812;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 3);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 812;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 2, 3);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 812;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_3 == NULL);
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 3);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 812;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = par_ftol;
            assert(old != NULL);
            par_ftol = tmp_assign_source_12;
            Py_INCREF(par_ftol);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = par_xtol;
            assert(old != NULL);
            par_xtol = tmp_assign_source_13;
            Py_INCREF(par_xtol);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = par_gtol;
            assert(old != NULL);
            par_gtol = tmp_assign_source_14;
            Py_INCREF(par_gtol);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_15;
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_args;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_fun;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_kwargs;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_15 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped(tstate, tmp_closure_1);

        assert(var_fun_wrapped == NULL);
        var_fun_wrapped = tmp_assign_source_15;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        CHECK_OBJECT(par_method);
        tmp_cmp_expr_left_18 = par_method;
        tmp_cmp_expr_right_18 = mod_consts[104];
        tmp_condition_result_15 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 817;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        tmp_called_value_10 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_make_strictly_feasible(tstate);
        if (unlikely(tmp_called_value_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[105]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 818;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_args_element_value_18 = par_x0;
        CHECK_OBJECT(var_lb);
        tmp_args_element_value_19 = var_lb;
        CHECK_OBJECT(var_ub);
        tmp_args_element_value_20 = var_ub;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 818;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 818;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x0;
            assert(old != NULL);
            par_x0 = tmp_assign_source_16;
            Py_DECREF(old);
        }

    }
    branch_no_15:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_21;
        CHECK_OBJECT(var_fun_wrapped);
        tmp_called_value_11 = var_fun_wrapped;
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[106]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 820;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_21 = par_x0;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 820;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_21);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 820;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_f0 == NULL);
        var_f0 = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(var_f0);
        tmp_expression_value_13 = var_f0;
        tmp_cmp_expr_left_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[32]);
        if (tmp_cmp_expr_left_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 822;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_19 = const_int_pos_1;
        tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        Py_DECREF(tmp_cmp_expr_left_19);
        if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 822;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_raise_type_15;
        PyObject *tmp_make_exception_arg_15;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_expression_value_14;
        tmp_kw_call_arg_value_0_2 = mod_consts[107];
        CHECK_OBJECT(var_f0);
        tmp_expression_value_14 = var_f0;
        tmp_kw_call_arg_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[51]);
        if (tmp_kw_call_arg_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 824;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 823;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            tmp_make_exception_arg_15 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_2);
        if (tmp_make_exception_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 823;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 823;
        tmp_raise_type_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_15);
        Py_DECREF(tmp_make_exception_arg_15);
        assert(!(tmp_raise_type_15 == NULL));
        exception_state.exception_type = tmp_raise_type_15;
        exception_lineno = 823;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_16:;
    {
        bool tmp_condition_result_17;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_23;
        tmp_expression_value_15 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_expression_value_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 826;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[46]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 826;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_called_instance_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_12);

            exception_lineno = 826;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_f0);
        tmp_args_element_value_23 = var_f0;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 826;
        tmp_args_element_value_22 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[47], tmp_args_element_value_23);
        if (tmp_args_element_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 826;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 826;
        tmp_operand_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_operand_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 826;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 826;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_16;
        PyObject *tmp_make_exception_arg_16;
        tmp_make_exception_arg_16 = mod_consts[108];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 827;
        tmp_raise_type_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_16);
        assert(!(tmp_raise_type_16 == NULL));
        exception_state.exception_type = tmp_raise_type_16;
        exception_lineno = 827;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_17:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_value_16;
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[106]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 829;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = par_x0;
        tmp_assign_source_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[0]);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 829;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n == NULL);
        var_n = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(var_f0);
        tmp_expression_value_17 = var_f0;
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[0]);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 830;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_m == NULL);
        var_m = tmp_assign_source_19;
    }
    {
        nuitka_bool tmp_condition_result_18;
        int tmp_and_left_truth_6;
        nuitka_bool tmp_and_left_value_6;
        nuitka_bool tmp_and_right_value_6;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        CHECK_OBJECT(par_method);
        tmp_cmp_expr_left_20 = par_method;
        tmp_cmp_expr_right_20 = mod_consts[41];
        tmp_and_left_value_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
        if (tmp_and_left_value_6 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 832;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 832;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_6 == 1) {
            goto and_right_6;
        } else {
            goto and_left_6;
        }
        and_right_6:;
        CHECK_OBJECT(var_m);
        tmp_cmp_expr_left_21 = var_m;
        CHECK_OBJECT(var_n);
        tmp_cmp_expr_right_21 = var_n;
        tmp_and_right_value_6 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
        if (tmp_and_right_value_6 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 832;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = tmp_and_right_value_6;
        goto and_end_6;
        and_left_6:;
        tmp_condition_result_18 = tmp_and_left_value_6;
        and_end_6:;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_raise_type_17;
        PyObject *tmp_make_exception_arg_17;
        tmp_make_exception_arg_17 = mod_consts[109];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 833;
        tmp_raise_type_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_17);
        assert(!(tmp_raise_type_17 == NULL));
        exception_state.exception_type = tmp_raise_type_17;
        exception_lineno = 833;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_18:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        tmp_called_value_13 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_construct_loss_function(tstate);
        if (unlikely(tmp_called_value_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[110]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 836;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_m);
        tmp_args_element_value_24 = var_m;
        CHECK_OBJECT(par_loss);
        tmp_args_element_value_25 = par_loss;
        CHECK_OBJECT(par_f_scale);
        tmp_args_element_value_26 = par_f_scale;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 836;
        {
            PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_13, call_args);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 836;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_loss_function == NULL);
        var_loss_function = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_27;
        int tmp_truth_name_3;
        tmp_called_value_14 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_14 != NULL);
        CHECK_OBJECT(par_loss);
        tmp_args_element_value_27 = par_loss;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 837;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_27);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 837;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 837;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_19 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_28;
        CHECK_OBJECT(var_loss_function);
        tmp_called_value_15 = var_loss_function;
        CHECK_OBJECT(var_f0);
        tmp_args_element_value_28 = var_f0;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 838;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_28);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 838;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rho == NULL);
        var_rho = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_rho);
        tmp_expression_value_18 = var_rho;
        tmp_cmp_expr_left_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[51]);
        if (tmp_cmp_expr_left_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 839;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[65];
        tmp_cmp_expr_right_22 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_22, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_m);
        tmp_tuple_element_1 = var_m;
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_22, 1, tmp_tuple_element_1);
        tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        Py_DECREF(tmp_cmp_expr_left_22);
        Py_DECREF(tmp_cmp_expr_right_22);
        if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 839;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_18;
        PyObject *tmp_make_exception_arg_18;
        tmp_make_exception_arg_18 = mod_consts[111];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 840;
        tmp_raise_type_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_18);
        assert(!(tmp_raise_type_18 == NULL));
        exception_state.exception_type = tmp_raise_type_18;
        exception_lineno = 840;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_20:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_2;
        tmp_mult_expr_left_1 = mod_consts[15];
        tmp_expression_value_19 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_expression_value_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 842;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[73]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 842;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rho);
        tmp_expression_value_20 = var_rho;
        tmp_subscript_value_2 = const_int_0;
        tmp_args_element_value_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_2, 0);
        if (tmp_args_element_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 842;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 842;
        tmp_mult_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_29);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_29);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 842;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 842;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_initial_cost == NULL);
        var_initial_cost = tmp_assign_source_22;
    }
    goto branch_end_19;
    branch_no_19:;
    {
        bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_23;
        PyObject *tmp_cmp_expr_right_23;
        CHECK_OBJECT(var_loss_function);
        tmp_cmp_expr_left_23 = var_loss_function;
        tmp_cmp_expr_right_23 = Py_None;
        tmp_condition_result_21 = (tmp_cmp_expr_left_23 != tmp_cmp_expr_right_23) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(var_loss_function);
        tmp_called_value_17 = var_loss_function;
        CHECK_OBJECT(var_f0);
        tmp_tuple_element_2 = var_f0;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[112]);
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 844;
        tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 844;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_initial_cost == NULL);
        var_initial_cost = tmp_assign_source_23;
    }
    goto branch_end_21;
    branch_no_21:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        tmp_mult_expr_left_2 = mod_consts[15];
        tmp_called_instance_5 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_called_instance_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 846;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_f0);
        tmp_args_element_value_30 = var_f0;
        CHECK_OBJECT(var_f0);
        tmp_args_element_value_31 = var_f0;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 846;
        {
            PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31};
            tmp_mult_expr_right_2 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_5,
                mod_consts[16],
                call_args
            );
        }

        if (tmp_mult_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 846;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 846;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_initial_cost == NULL);
        var_initial_cost = tmp_assign_source_24;
    }
    branch_end_21:;
    branch_end_19:;
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_called_value_18;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_32;
        int tmp_truth_name_4;
        tmp_called_value_18 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_18 != NULL);
        CHECK_OBJECT(Nuitka_Cell_GET(par_jac));
        tmp_args_element_value_32 = Nuitka_Cell_GET(par_jac);
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 848;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_32);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 848;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 848;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_22 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_direct_call_arg1_1;
        PyObject *tmp_direct_call_arg2_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_direct_call_arg3_1;
        PyObject *tmp_direct_call_arg4_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_jac));
        tmp_direct_call_arg1_1 = Nuitka_Cell_GET(par_jac);
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[106]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 849;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = par_x0;
        tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_3);
        CHECK_OBJECT(Nuitka_Cell_GET(par_args));
        tmp_direct_call_arg3_1 = Nuitka_Cell_GET(par_args);
        CHECK_OBJECT(Nuitka_Cell_GET(par_kwargs));
        tmp_direct_call_arg4_1 = Nuitka_Cell_GET(par_kwargs);
        Py_INCREF(tmp_direct_call_arg1_1);
        Py_INCREF(tmp_direct_call_arg3_1);
        Py_INCREF(tmp_direct_call_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
            tmp_assign_source_25 = impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 849;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_J0 == NULL);
        var_J0 = tmp_assign_source_25;
    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_called_value_19;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_33;
        int tmp_truth_name_5;
        tmp_called_value_19 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_issparse(tstate);
        if (unlikely(tmp_called_value_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[53]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 851;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_J0);
        tmp_args_element_value_33 = var_J0;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 851;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_33);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 851;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_5);

            exception_lineno = 851;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_23 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(var_J0);
        tmp_called_instance_6 = var_J0;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 852;
        tmp_assign_source_26 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[113]);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 852;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_J0;
            assert(old != NULL);
            var_J0 = tmp_assign_source_26;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_defaults_1;
        struct Nuitka_CellObject *tmp_closure_2[3];
        tmp_defaults_1 = mod_consts[114];
        Py_INCREF(tmp_defaults_1);

        tmp_closure_2[0] = par_args;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = par_jac;
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = par_kwargs;
        Py_INCREF(tmp_closure_2[2]);

        tmp_assign_source_27 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped(tstate, tmp_defaults_1, tmp_closure_2);

        assert(var_jac_wrapped == NULL);
        var_jac_wrapped = tmp_assign_source_27;
    }
    goto branch_end_23;
    branch_no_23:;
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_J0);
        tmp_isinstance_inst_1 = var_J0;
        tmp_isinstance_cls_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_LinearOperator(tstate);
        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[117]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 857;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 857;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_24 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_2;
        struct Nuitka_CellObject *tmp_closure_3[3];
        tmp_defaults_2 = mod_consts[114];
        Py_INCREF(tmp_defaults_2);

        tmp_closure_3[0] = par_args;
        Py_INCREF(tmp_closure_3[0]);
        tmp_closure_3[1] = par_jac;
        Py_INCREF(tmp_closure_3[1]);
        tmp_closure_3[2] = par_kwargs;
        Py_INCREF(tmp_closure_3[2]);

        tmp_assign_source_28 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped(tstate, tmp_defaults_2, tmp_closure_3);

        assert(var_jac_wrapped == NULL);
        var_jac_wrapped = tmp_assign_source_28;
    }
    goto branch_end_24;
    branch_no_24:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_34;
        tmp_called_instance_7 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_called_instance_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 862;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_J0);
        tmp_args_element_value_34 = var_J0;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 862;
        tmp_assign_source_29 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts[12], tmp_args_element_value_34);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 862;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_J0;
            assert(old != NULL);
            var_J0 = tmp_assign_source_29;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_3;
        struct Nuitka_CellObject *tmp_closure_4[3];
        tmp_defaults_3 = mod_consts[114];
        Py_INCREF(tmp_defaults_3);

        tmp_closure_4[0] = par_args;
        Py_INCREF(tmp_closure_4[0]);
        tmp_closure_4[1] = par_jac;
        Py_INCREF(tmp_closure_4[1]);
        tmp_closure_4[2] = par_kwargs;
        Py_INCREF(tmp_closure_4[2]);

        tmp_assign_source_30 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped(tstate, tmp_defaults_3, tmp_closure_4);

        assert(var_jac_wrapped == NULL);
        var_jac_wrapped = tmp_assign_source_30;
    }
    branch_end_24:;
    branch_end_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_cmp_expr_left_24;
        PyObject *tmp_cmp_expr_right_24;
        CHECK_OBJECT(par_method);
        tmp_cmp_expr_left_24 = par_method;
        tmp_cmp_expr_right_24 = mod_consts[41];
        tmp_condition_result_25 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
        if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 868;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        bool tmp_condition_result_26;
        PyObject *tmp_cmp_expr_left_25;
        PyObject *tmp_cmp_expr_right_25;
        CHECK_OBJECT(Nuitka_Cell_GET(par_jac_sparsity));
        tmp_cmp_expr_left_25 = Nuitka_Cell_GET(par_jac_sparsity);
        tmp_cmp_expr_right_25 = Py_None;
        tmp_condition_result_26 = (tmp_cmp_expr_left_25 != tmp_cmp_expr_right_25) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_raise_type_19;
        PyObject *tmp_make_exception_arg_19;
        tmp_make_exception_arg_19 = mod_consts[118];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 870;
        tmp_raise_type_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_19);
        assert(!(tmp_raise_type_19 == NULL));
        exception_state.exception_type = tmp_raise_type_19;
        exception_lineno = 870;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_26:;
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_cmp_expr_left_26;
        PyObject *tmp_cmp_expr_right_26;
        CHECK_OBJECT(Nuitka_Cell_GET(par_jac));
        tmp_cmp_expr_left_26 = Nuitka_Cell_GET(par_jac);
        tmp_cmp_expr_right_26 = mod_consts[119];
        tmp_condition_result_27 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
        if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 873;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        tmp_called_value_20 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_warn(tstate);
        if (unlikely(tmp_called_value_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[44]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 874;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_3 = mod_consts[120];
        CHECK_OBJECT(Nuitka_Cell_GET(par_jac));
        tmp_kw_call_arg_value_1_3 = Nuitka_Cell_GET(par_jac);
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 874;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
            tmp_args_element_value_35 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
        }

        if (tmp_args_element_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 874;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 874;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_35);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 874;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_27:;
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = Py_None;
        assert(var_J0 == NULL);
        Py_INCREF(tmp_assign_source_31);
        var_J0 = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = Py_None;
        assert(var_jac_wrapped == NULL);
        Py_INCREF(tmp_assign_source_32);
        var_jac_wrapped = tmp_assign_source_32;
    }
    goto branch_end_25;
    branch_no_25:;
    {
        nuitka_bool tmp_condition_result_28;
        int tmp_and_left_truth_7;
        nuitka_bool tmp_and_left_value_7;
        nuitka_bool tmp_and_right_value_7;
        PyObject *tmp_cmp_expr_left_27;
        PyObject *tmp_cmp_expr_right_27;
        PyObject *tmp_cmp_expr_left_28;
        PyObject *tmp_cmp_expr_right_28;
        CHECK_OBJECT(Nuitka_Cell_GET(par_jac_sparsity));
        tmp_cmp_expr_left_27 = Nuitka_Cell_GET(par_jac_sparsity);
        tmp_cmp_expr_right_27 = Py_None;
        tmp_and_left_value_7 = (tmp_cmp_expr_left_27 != tmp_cmp_expr_right_27) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_7 = tmp_and_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_7 == 1) {
            goto and_right_7;
        } else {
            goto and_left_7;
        }
        and_right_7:;
        CHECK_OBJECT(par_tr_solver);
        tmp_cmp_expr_left_28 = par_tr_solver;
        tmp_cmp_expr_right_28 = mod_consts[121];
        tmp_and_right_value_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
        if (tmp_and_right_value_7 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 879;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_28 = tmp_and_right_value_7;
        goto and_end_7;
        and_left_7:;
        tmp_condition_result_28 = tmp_and_left_value_7;
        and_end_7:;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_raise_type_20;
        PyObject *tmp_make_exception_arg_20;
        tmp_make_exception_arg_20 = mod_consts[122];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 880;
        tmp_raise_type_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_20);
        assert(!(tmp_raise_type_20 == NULL));
        exception_state.exception_type = tmp_raise_type_20;
        exception_lineno = 880;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_28:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        tmp_called_value_21 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_check_jac_sparsity(tstate);
        if (unlikely(tmp_called_value_21 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[123]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 883;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_jac_sparsity));
        tmp_args_element_value_36 = Nuitka_Cell_GET(par_jac_sparsity);
        CHECK_OBJECT(var_m);
        tmp_args_element_value_37 = var_m;
        CHECK_OBJECT(var_n);
        tmp_args_element_value_38 = var_n;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 883;
        {
            PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_38};
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_21, call_args);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 883;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_jac_sparsity);
            Nuitka_Cell_SET(par_jac_sparsity, tmp_assign_source_33);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_34;
        struct Nuitka_CellObject *tmp_closure_5[7];

        tmp_closure_5[0] = par_args;
        Py_INCREF(tmp_closure_5[0]);
        tmp_closure_5[1] = par_bounds;
        Py_INCREF(tmp_closure_5[1]);
        tmp_closure_5[2] = par_diff_step;
        Py_INCREF(tmp_closure_5[2]);
        tmp_closure_5[3] = par_fun;
        Py_INCREF(tmp_closure_5[3]);
        tmp_closure_5[4] = par_jac;
        Py_INCREF(tmp_closure_5[4]);
        tmp_closure_5[5] = par_jac_sparsity;
        Py_INCREF(tmp_closure_5[5]);
        tmp_closure_5[6] = par_kwargs;
        Py_INCREF(tmp_closure_5[6]);

        tmp_assign_source_34 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped(tstate, tmp_closure_5);

        assert(var_jac_wrapped == NULL);
        var_jac_wrapped = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        CHECK_OBJECT(var_jac_wrapped);
        tmp_called_value_22 = var_jac_wrapped;
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[106]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 894;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_39 = par_x0;
        CHECK_OBJECT(var_f0);
        tmp_args_element_value_40 = var_f0;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 894;
        {
            PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40};
            tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_22, call_args);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 894;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_J0 == NULL);
        var_J0 = tmp_assign_source_35;
    }
    branch_end_25:;
    branch_end_22:;
    {
        bool tmp_condition_result_29;
        PyObject *tmp_cmp_expr_left_29;
        PyObject *tmp_cmp_expr_right_29;
        if (var_J0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[124]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 896;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_29 = var_J0;
        tmp_cmp_expr_right_29 = Py_None;
        tmp_condition_result_29 = (tmp_cmp_expr_left_29 != tmp_cmp_expr_right_29) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        nuitka_bool tmp_condition_result_30;
        PyObject *tmp_cmp_expr_left_30;
        PyObject *tmp_cmp_expr_right_30;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_tuple_element_4;
        if (var_J0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[124]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 897;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_21 = var_J0;
        tmp_cmp_expr_left_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[51]);
        if (tmp_cmp_expr_left_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 897;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_m);
        tmp_tuple_element_4 = var_m;
        tmp_cmp_expr_right_30 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_30, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_n);
        tmp_tuple_element_4 = var_n;
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_30, 1, tmp_tuple_element_4);
        tmp_condition_result_30 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_30, tmp_cmp_expr_right_30);
        Py_DECREF(tmp_cmp_expr_left_30);
        Py_DECREF(tmp_cmp_expr_right_30);
        if (tmp_condition_result_30 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 897;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_raise_type_21;
        PyObject *tmp_make_exception_arg_21;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_4;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_22;
        tmp_kw_call_arg_value_0_4 = mod_consts[125];
        CHECK_OBJECT(var_m);
        tmp_tuple_element_5 = var_m;
        tmp_kw_call_arg_value_1_4 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_1_4, 0, tmp_tuple_element_5);
        CHECK_OBJECT(var_n);
        tmp_tuple_element_5 = var_n;
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_1_4, 1, tmp_tuple_element_5);
        if (var_J0 == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_1_4);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[124]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 900;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_22 = var_J0;
        tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[51]);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_arg_value_1_4);

            exception_lineno = 900;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 899;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4, tmp_kw_call_arg_value_2_1};
            tmp_make_exception_arg_21 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_4);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_make_exception_arg_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 899;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 898;
        tmp_raise_type_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_21);
        Py_DECREF(tmp_make_exception_arg_21);
        assert(!(tmp_raise_type_21 == NULL));
        exception_state.exception_type = tmp_raise_type_21;
        exception_lineno = 898;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_30:;
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_23;
        if (var_J0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[124]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 902;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_2 = var_J0;
        tmp_expression_value_23 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_expression_value_23 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 902;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[126]);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 902;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 902;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 902;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        nuitka_bool tmp_condition_result_32;
        PyObject *tmp_cmp_expr_left_31;
        PyObject *tmp_cmp_expr_right_31;
        CHECK_OBJECT(par_method);
        tmp_cmp_expr_left_31 = par_method;
        tmp_cmp_expr_right_31 = mod_consts[41];
        tmp_condition_result_32 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_31, tmp_cmp_expr_right_31);
        if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 903;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_raise_type_22;
        PyObject *tmp_make_exception_arg_22;
        tmp_make_exception_arg_22 = mod_consts[127];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 904;
        tmp_raise_type_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_22);
        assert(!(tmp_raise_type_22 == NULL));
        exception_state.exception_type = tmp_raise_type_22;
        exception_lineno = 904;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_32:;
    {
        nuitka_bool tmp_condition_result_33;
        PyObject *tmp_cmp_expr_left_32;
        PyObject *tmp_cmp_expr_right_32;
        CHECK_OBJECT(par_tr_solver);
        tmp_cmp_expr_left_32 = par_tr_solver;
        tmp_cmp_expr_right_32 = mod_consts[121];
        tmp_condition_result_33 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_32, tmp_cmp_expr_right_32);
        if (tmp_condition_result_33 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 907;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_raise_type_23;
        PyObject *tmp_make_exception_arg_23;
        tmp_make_exception_arg_23 = mod_consts[128];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 908;
        tmp_raise_type_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_23);
        assert(!(tmp_raise_type_23 == NULL));
        exception_state.exception_type = tmp_raise_type_23;
        exception_lineno = 908;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_33:;
    branch_no_31:;
    {
        PyObject *tmp_assign_source_36;
        int tmp_and_left_truth_8;
        PyObject *tmp_and_left_value_8;
        PyObject *tmp_and_right_value_8;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        PyObject *tmp_cmp_expr_left_33;
        PyObject *tmp_cmp_expr_right_33;
        CHECK_OBJECT(par_x_scale);
        tmp_isinstance_inst_3 = par_x_scale;
        tmp_isinstance_cls_3 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 912;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_8 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_8 = CHECK_IF_TRUE(tmp_and_left_value_8);
        if (tmp_and_left_truth_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 912;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_8 == 1) {
            goto and_right_8;
        } else {
            goto and_left_8;
        }
        and_right_8:;
        CHECK_OBJECT(par_x_scale);
        tmp_cmp_expr_left_33 = par_x_scale;
        tmp_cmp_expr_right_33 = mod_consts[3];
        tmp_and_right_value_8 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_33, tmp_cmp_expr_right_33);
        if (tmp_and_right_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 912;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_36 = tmp_and_right_value_8;
        goto and_end_8;
        and_left_8:;
        Py_INCREF(tmp_and_left_value_8);
        tmp_assign_source_36 = tmp_and_left_value_8;
        and_end_8:;
        assert(var_jac_scale == NULL);
        var_jac_scale = tmp_assign_source_36;
    }
    {
        nuitka_bool tmp_condition_result_34;
        int tmp_and_left_truth_9;
        nuitka_bool tmp_and_left_value_9;
        nuitka_bool tmp_and_right_value_9;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        int tmp_truth_name_6;
        if (var_J0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[124]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 913;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_4 = var_J0;
        tmp_isinstance_cls_4 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_LinearOperator(tstate);
        if (unlikely(tmp_isinstance_cls_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[117]);
        }

        if (tmp_isinstance_cls_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 913;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 913;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_9 = tmp_and_left_value_9 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 913;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_9 == 1) {
            goto and_right_9;
        } else {
            goto and_left_9;
        }
        and_right_9:;
        CHECK_OBJECT(var_jac_scale);
        tmp_truth_name_6 = CHECK_IF_TRUE(var_jac_scale);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 913;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_9 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_condition_result_34 = tmp_and_right_value_9;
        goto and_end_9;
        and_left_9:;
        tmp_condition_result_34 = tmp_and_left_value_9;
        and_end_9:;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_raise_type_24;
        PyObject *tmp_make_exception_arg_24;
        tmp_make_exception_arg_24 = mod_consts[129];
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 914;
        tmp_raise_type_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_24);
        assert(!(tmp_raise_type_24 == NULL));
        exception_state.exception_type = tmp_raise_type_24;
        exception_lineno = 914;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "coccooooooocoocooccooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_34:;
    {
        bool tmp_condition_result_35;
        PyObject *tmp_cmp_expr_left_34;
        PyObject *tmp_cmp_expr_right_34;
        CHECK_OBJECT(par_tr_solver);
        tmp_cmp_expr_left_34 = par_tr_solver;
        tmp_cmp_expr_right_34 = Py_None;
        tmp_condition_result_35 = (tmp_cmp_expr_left_34 == tmp_cmp_expr_right_34) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        nuitka_bool tmp_condition_result_36;
        PyObject *tmp_isinstance_inst_5;
        PyObject *tmp_isinstance_cls_5;
        PyObject *tmp_expression_value_24;
        if (var_J0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[124]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 918;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_5 = var_J0;
        tmp_expression_value_24 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_expression_value_24 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 918;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[126]);
        if (tmp_isinstance_cls_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 918;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
        Py_DECREF(tmp_isinstance_cls_5);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 918;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_36 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[121];
        {
            PyObject *old = par_tr_solver;
            assert(old != NULL);
            par_tr_solver = tmp_assign_source_37;
            Py_INCREF(par_tr_solver);
            Py_DECREF(old);
        }

    }
    goto branch_end_36;
    branch_no_36:;
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[130];
        {
            PyObject *old = par_tr_solver;
            assert(old != NULL);
            par_tr_solver = tmp_assign_source_38;
            Py_INCREF(par_tr_solver);
            Py_DECREF(old);
        }

    }
    branch_end_36:;
    branch_no_35:;
    branch_no_29:;
    {
        nuitka_bool tmp_condition_result_37;
        PyObject *tmp_cmp_expr_left_35;
        PyObject *tmp_cmp_expr_right_35;
        CHECK_OBJECT(par_method);
        tmp_cmp_expr_left_35 = par_method;
        tmp_cmp_expr_right_35 = mod_consts[41];
        tmp_condition_result_37 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_35, tmp_cmp_expr_right_35);
        if (tmp_condition_result_37 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 923;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        tmp_called_value_23 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_call_minpack(tstate);
        if (unlikely(tmp_called_value_23 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[131]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 924;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fun_wrapped);
        tmp_args_element_value_41 = var_fun_wrapped;
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[106]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 924;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_42 = par_x0;
        if (var_jac_wrapped == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[115]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 924;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_43 = var_jac_wrapped;
        CHECK_OBJECT(par_ftol);
        tmp_args_element_value_44 = par_ftol;
        CHECK_OBJECT(par_xtol);
        tmp_args_element_value_45 = par_xtol;
        CHECK_OBJECT(par_gtol);
        tmp_args_element_value_46 = par_gtol;
        CHECK_OBJECT(par_max_nfev);
        tmp_args_element_value_47 = par_max_nfev;
        CHECK_OBJECT(par_x_scale);
        tmp_args_element_value_48 = par_x_scale;
        CHECK_OBJECT(Nuitka_Cell_GET(par_diff_step));
        tmp_args_element_value_49 = Nuitka_Cell_GET(par_diff_step);
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 924;
        {
            PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_49};
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS9(tstate, tmp_called_value_23, call_args);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 924;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_39;
    }
    goto branch_end_37;
    branch_no_37:;
    {
        nuitka_bool tmp_condition_result_38;
        PyObject *tmp_cmp_expr_left_36;
        PyObject *tmp_cmp_expr_right_36;
        CHECK_OBJECT(par_method);
        tmp_cmp_expr_left_36 = par_method;
        tmp_cmp_expr_right_36 = mod_consts[104];
        tmp_condition_result_38 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_36, tmp_cmp_expr_right_36);
        if (tmp_condition_result_38 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 927;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_65;
        tmp_called_value_24 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_trf(tstate);
        if (unlikely(tmp_called_value_24 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[104]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 928;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fun_wrapped);
        tmp_args_element_value_50 = var_fun_wrapped;
        if (var_jac_wrapped == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[115]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 928;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_51 = var_jac_wrapped;
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[106]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 928;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_52 = par_x0;
        CHECK_OBJECT(var_f0);
        tmp_args_element_value_53 = var_f0;
        if (var_J0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[124]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 928;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_54 = var_J0;
        CHECK_OBJECT(var_lb);
        tmp_args_element_value_55 = var_lb;
        CHECK_OBJECT(var_ub);
        tmp_args_element_value_56 = var_ub;
        CHECK_OBJECT(par_ftol);
        tmp_args_element_value_57 = par_ftol;
        CHECK_OBJECT(par_xtol);
        tmp_args_element_value_58 = par_xtol;
        CHECK_OBJECT(par_gtol);
        tmp_args_element_value_59 = par_gtol;
        CHECK_OBJECT(par_max_nfev);
        tmp_args_element_value_60 = par_max_nfev;
        CHECK_OBJECT(par_x_scale);
        tmp_args_element_value_61 = par_x_scale;
        if (var_loss_function == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[67]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 929;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_62 = var_loss_function;
        CHECK_OBJECT(par_tr_solver);
        tmp_args_element_value_63 = par_tr_solver;
        CHECK_OBJECT(par_tr_options);
        tmp_expression_value_25 = par_tr_options;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[132]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 930;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 930;
        tmp_args_element_value_64 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_25);
        Py_DECREF(tmp_called_value_25);
        if (tmp_args_element_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 930;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_verbose);
        tmp_args_element_value_65 = par_verbose;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 928;
        {
            PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_56, tmp_args_element_value_57, tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61, tmp_args_element_value_62, tmp_args_element_value_63, tmp_args_element_value_64, tmp_args_element_value_65};
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS16(tstate, tmp_called_value_24, call_args);
        }

        Py_DECREF(tmp_args_element_value_64);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 928;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_40;
    }
    goto branch_end_38;
    branch_no_38:;
    {
        nuitka_bool tmp_condition_result_39;
        PyObject *tmp_cmp_expr_left_37;
        PyObject *tmp_cmp_expr_right_37;
        CHECK_OBJECT(par_method);
        tmp_cmp_expr_left_37 = par_method;
        tmp_cmp_expr_right_37 = mod_consts[133];
        tmp_condition_result_39 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_37, tmp_cmp_expr_right_37);
        if (tmp_condition_result_39 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 932;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        nuitka_bool tmp_condition_result_40;
        int tmp_and_left_truth_10;
        nuitka_bool tmp_and_left_value_10;
        nuitka_bool tmp_and_right_value_10;
        PyObject *tmp_cmp_expr_left_38;
        PyObject *tmp_cmp_expr_right_38;
        PyObject *tmp_cmp_expr_left_39;
        PyObject *tmp_cmp_expr_right_39;
        CHECK_OBJECT(par_tr_solver);
        tmp_cmp_expr_left_38 = par_tr_solver;
        tmp_cmp_expr_right_38 = mod_consts[130];
        tmp_and_left_value_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_38, tmp_cmp_expr_right_38);
        if (tmp_and_left_value_10 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 933;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_10 = tmp_and_left_value_10 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_10 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 933;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_10 == 1) {
            goto and_right_10;
        } else {
            goto and_left_10;
        }
        and_right_10:;
        tmp_cmp_expr_left_39 = mod_consts[134];
        CHECK_OBJECT(par_tr_options);
        tmp_cmp_expr_right_39 = par_tr_options;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_39, tmp_cmp_expr_left_39);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 933;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_40 = tmp_and_right_value_10;
        goto and_end_10;
        and_left_10:;
        tmp_condition_result_40 = tmp_and_left_value_10;
        and_end_10:;
        if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_call_result_7;
        tmp_called_value_26 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_warn(tstate);
        if (unlikely(tmp_called_value_26 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[44]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 934;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 934;
        tmp_call_result_7 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_26, mod_consts[135]);

        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 934;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(par_tr_options);
        tmp_expression_value_26 = par_tr_options;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[132]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 936;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 936;
        tmp_assign_source_41 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_27);
        Py_DECREF(tmp_called_value_27);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 936;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_tr_options;
            assert(old != NULL);
            par_tr_options = tmp_assign_source_41;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_delsubscr_subscript_1;
        CHECK_OBJECT(par_tr_options);
        tmp_delsubscr_target_1 = par_tr_options;
        tmp_delsubscr_subscript_1 = mod_consts[134];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 937;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_40:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_args_element_value_81;
        tmp_called_value_28 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_dogbox(tstate);
        if (unlikely(tmp_called_value_28 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[133]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 939;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fun_wrapped);
        tmp_args_element_value_66 = var_fun_wrapped;
        if (var_jac_wrapped == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[115]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 939;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_67 = var_jac_wrapped;
        if (par_x0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[106]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 939;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_68 = par_x0;
        CHECK_OBJECT(var_f0);
        tmp_args_element_value_69 = var_f0;
        if (var_J0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[124]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 939;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_70 = var_J0;
        CHECK_OBJECT(var_lb);
        tmp_args_element_value_71 = var_lb;
        CHECK_OBJECT(var_ub);
        tmp_args_element_value_72 = var_ub;
        CHECK_OBJECT(par_ftol);
        tmp_args_element_value_73 = par_ftol;
        CHECK_OBJECT(par_xtol);
        tmp_args_element_value_74 = par_xtol;
        CHECK_OBJECT(par_gtol);
        tmp_args_element_value_75 = par_gtol;
        CHECK_OBJECT(par_max_nfev);
        tmp_args_element_value_76 = par_max_nfev;
        CHECK_OBJECT(par_x_scale);
        tmp_args_element_value_77 = par_x_scale;
        if (var_loss_function == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[67]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 940;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_78 = var_loss_function;
        CHECK_OBJECT(par_tr_solver);
        tmp_args_element_value_79 = par_tr_solver;
        CHECK_OBJECT(par_tr_options);
        tmp_args_element_value_80 = par_tr_options;
        CHECK_OBJECT(par_verbose);
        tmp_args_element_value_81 = par_verbose;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 939;
        {
            PyObject *call_args[] = {tmp_args_element_value_66, tmp_args_element_value_67, tmp_args_element_value_68, tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72, tmp_args_element_value_73, tmp_args_element_value_74, tmp_args_element_value_75, tmp_args_element_value_76, tmp_args_element_value_77, tmp_args_element_value_78, tmp_args_element_value_79, tmp_args_element_value_80, tmp_args_element_value_81};
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS16(tstate, tmp_called_value_28, call_args);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 939;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_42;
    }
    branch_no_39:;
    branch_end_38:;
    branch_end_37:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_27 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_TERMINATION_MESSAGES(tstate);
        if (unlikely(tmp_expression_value_27 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[136]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 943;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[137]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 943;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_28 = var_result;
        tmp_subscript_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[138]);
        if (tmp_subscript_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 943;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 943;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_result == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[137]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 943;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = var_result;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[139], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 943;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_cmp_expr_left_40;
        PyObject *tmp_cmp_expr_right_40;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_assattr_target_2;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[137]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 944;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_29 = var_result;
        tmp_cmp_expr_left_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[138]);
        if (tmp_cmp_expr_left_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 944;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_40 = const_int_0;
        tmp_assattr_value_2 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_40, tmp_cmp_expr_right_40);
        Py_DECREF(tmp_cmp_expr_left_40);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 944;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_result == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[137]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 944;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = var_result;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[140], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 944;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_41;
        PyObject *tmp_cmp_expr_left_41;
        PyObject *tmp_cmp_expr_right_41;
        if (par_verbose == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[141]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 946;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_41 = par_verbose;
        tmp_cmp_expr_right_41 = const_int_pos_1;
        tmp_condition_result_41 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_41, tmp_cmp_expr_right_41);
        if (tmp_condition_result_41 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 946;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_expression_value_30;
        tmp_called_value_29 = LOOKUP_BUILTIN(mod_consts[142]);
        assert(tmp_called_value_29 != NULL);
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[137]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 947;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_30 = var_result;
        tmp_args_element_value_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[139]);
        if (tmp_args_element_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 947;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 947;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_82);
        Py_DECREF(tmp_args_element_value_82);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 947;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_arg_value_1_5;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_expression_value_33;
        tmp_called_value_30 = LOOKUP_BUILTIN(mod_consts[142]);
        assert(tmp_called_value_30 != NULL);
        tmp_kw_call_arg_value_0_5 = mod_consts[143];
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[137]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 950;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_31 = var_result;
        tmp_kw_call_arg_value_1_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[21]);
        if (tmp_kw_call_arg_value_1_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 950;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_initial_cost);
        tmp_kw_call_arg_value_2_2 = var_initial_cost;
        if (var_result == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_1_5);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[137]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 950;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_32 = var_result;
        tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[144]);
        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_arg_value_1_5);

            exception_lineno = 950;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_result == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_1_5);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[137]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 951;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_33 = var_result;
        tmp_kw_call_arg_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[145]);
        if (tmp_kw_call_arg_value_4_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_arg_value_1_5);
            Py_DECREF(tmp_kw_call_arg_value_3_1);

            exception_lineno = 951;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 948;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_5, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
            tmp_args_element_value_83 = CALL_FUNCTION_WITH_ARGS5(tstate, unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_5);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        if (tmp_args_element_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 948;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame.f_lineno = 948;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_83);
        Py_DECREF(tmp_args_element_value_83);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 948;
            type_description_1 = "coccooooooocoocooccooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_no_41:;
    if (var_result == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[137]);
        NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
        CHAIN_EXCEPTION(tstate, exception_state.exception_value);

        exception_lineno = 953;
        type_description_1 = "coccooooooocoocooccooooooooooooo";
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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares,
        type_description_1,
        par_fun,
        par_x0,
        par_jac,
        par_bounds,
        par_method,
        par_ftol,
        par_xtol,
        par_gtol,
        par_x_scale,
        par_loss,
        par_f_scale,
        par_diff_step,
        par_tr_solver,
        par_tr_options,
        par_jac_sparsity,
        par_max_nfev,
        par_verbose,
        par_args,
        par_kwargs,
        var_lb,
        var_ub,
        var_fun_wrapped,
        var_f0,
        var_n,
        var_m,
        var_loss_function,
        var_rho,
        var_initial_cost,
        var_J0,
        var_jac_wrapped,
        var_jac_scale,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares == cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares);
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_x0);
    par_x0 = NULL;
    Py_XDECREF(par_ftol);
    par_ftol = NULL;
    Py_XDECREF(par_xtol);
    par_xtol = NULL;
    Py_XDECREF(par_gtol);
    par_gtol = NULL;
    Py_XDECREF(par_x_scale);
    par_x_scale = NULL;
    Py_XDECREF(par_tr_solver);
    par_tr_solver = NULL;
    Py_XDECREF(par_tr_options);
    par_tr_options = NULL;
    CHECK_OBJECT(par_jac_sparsity);
    Py_DECREF(par_jac_sparsity);
    par_jac_sparsity = NULL;
    CHECK_OBJECT(var_lb);
    Py_DECREF(var_lb);
    var_lb = NULL;
    CHECK_OBJECT(var_ub);
    Py_DECREF(var_ub);
    var_ub = NULL;
    CHECK_OBJECT(var_fun_wrapped);
    Py_DECREF(var_fun_wrapped);
    var_fun_wrapped = NULL;
    CHECK_OBJECT(var_f0);
    Py_DECREF(var_f0);
    var_f0 = NULL;
    CHECK_OBJECT(var_n);
    Py_DECREF(var_n);
    var_n = NULL;
    CHECK_OBJECT(var_m);
    Py_DECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_loss_function);
    var_loss_function = NULL;
    Py_XDECREF(var_rho);
    var_rho = NULL;
    CHECK_OBJECT(var_initial_cost);
    Py_DECREF(var_initial_cost);
    var_initial_cost = NULL;
    Py_XDECREF(var_J0);
    var_J0 = NULL;
    Py_XDECREF(var_jac_wrapped);
    var_jac_wrapped = NULL;
    Py_XDECREF(var_jac_scale);
    var_jac_scale = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(par_x0);
    par_x0 = NULL;
    Py_XDECREF(par_ftol);
    par_ftol = NULL;
    Py_XDECREF(par_xtol);
    par_xtol = NULL;
    Py_XDECREF(par_gtol);
    par_gtol = NULL;
    Py_XDECREF(par_x_scale);
    par_x_scale = NULL;
    Py_XDECREF(par_tr_solver);
    par_tr_solver = NULL;
    Py_XDECREF(par_tr_options);
    par_tr_options = NULL;
    CHECK_OBJECT(par_jac_sparsity);
    Py_DECREF(par_jac_sparsity);
    par_jac_sparsity = NULL;
    Py_XDECREF(var_lb);
    var_lb = NULL;
    Py_XDECREF(var_ub);
    var_ub = NULL;
    Py_XDECREF(var_fun_wrapped);
    var_fun_wrapped = NULL;
    Py_XDECREF(var_f0);
    var_f0 = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_loss_function);
    var_loss_function = NULL;
    Py_XDECREF(var_rho);
    var_rho = NULL;
    Py_XDECREF(var_initial_cost);
    var_initial_cost = NULL;
    Py_XDECREF(var_J0);
    var_J0 = NULL;
    Py_XDECREF(var_jac_wrapped);
    var_jac_wrapped = NULL;
    Py_XDECREF(var_jac_scale);
    var_jac_scale = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fun);
    Py_DECREF(par_fun);
    CHECK_OBJECT(par_jac);
    Py_DECREF(par_jac);
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_loss);
    Py_DECREF(par_loss);
    CHECK_OBJECT(par_f_scale);
    Py_DECREF(par_f_scale);
    CHECK_OBJECT(par_diff_step);
    Py_DECREF(par_diff_step);
    CHECK_OBJECT(par_max_nfev);
    Py_DECREF(par_max_nfev);
    CHECK_OBJECT(par_verbose);
    Py_DECREF(par_verbose);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fun);
    Py_DECREF(par_fun);
    CHECK_OBJECT(par_jac);
    Py_DECREF(par_jac);
    CHECK_OBJECT(par_bounds);
    Py_DECREF(par_bounds);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_loss);
    Py_DECREF(par_loss);
    CHECK_OBJECT(par_f_scale);
    Py_DECREF(par_f_scale);
    CHECK_OBJECT(par_diff_step);
    Py_DECREF(par_diff_step);
    CHECK_OBJECT(par_max_nfev);
    Py_DECREF(par_max_nfev);
    CHECK_OBJECT(par_verbose);
    Py_DECREF(par_verbose);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped = MAKE_FUNCTION_FRAME(tstate, code_objects_2b1a808a34ad7540162366d425cb5413, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped->m_type_description == NULL);
    frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped = cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_direct_call_arg1_1;
        PyObject *tmp_direct_call_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_direct_call_arg3_1;
        PyObject *tmp_direct_call_arg4_1;
        tmp_expression_value_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 815;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[89]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 815;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[14]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 815;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_direct_call_arg1_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_direct_call_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[147]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 815;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_direct_call_arg3_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_direct_call_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[148]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 815;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_direct_call_arg4_1 = Nuitka_Cell_GET(self->m_closure[2]);
        Py_INCREF(tmp_direct_call_arg1_1);
        Py_INCREF(tmp_direct_call_arg3_1);
        Py_INCREF(tmp_direct_call_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
            tmp_args_element_value_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 815;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped->m_frame.f_lineno = 815;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 815;
            type_description_1 = "occc";
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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped == cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped);
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped);

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


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par__ = python_pars[1];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped = MAKE_FUNCTION_FRAME(tstate, code_objects_c116ba93316a4f4578e43d524fe7f631, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped->m_type_description == NULL);
    frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped = cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_direct_call_arg1_1;
        PyObject *tmp_direct_call_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_direct_call_arg3_1;
        PyObject *tmp_direct_call_arg4_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[3]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 855;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_direct_call_arg1_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_direct_call_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[147]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 855;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_direct_call_arg3_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_direct_call_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[148]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 855;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_direct_call_arg4_1 = Nuitka_Cell_GET(self->m_closure[2]);
        Py_INCREF(tmp_direct_call_arg1_1);
        Py_INCREF(tmp_direct_call_arg3_1);
        Py_INCREF(tmp_direct_call_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
            tmp_called_instance_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 855;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped->m_frame.f_lineno = 855;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[113]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 855;
            type_description_1 = "ooccc";
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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped,
        type_description_1,
        par_x,
        par__,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped == cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped);
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped);

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
    CHECK_OBJECT(par__);
    Py_DECREF(par__);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par__);
    Py_DECREF(par__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par__ = python_pars[1];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped = MAKE_FUNCTION_FRAME(tstate, code_objects_3d8cf30fde71f9039993172ab4624426, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped->m_type_description == NULL);
    frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped = cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped) == 2);

    // Framed code:
    {
        PyObject *tmp_direct_call_arg1_1;
        PyObject *tmp_direct_call_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_direct_call_arg3_1;
        PyObject *tmp_direct_call_arg4_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[3]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 859;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_direct_call_arg1_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_direct_call_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[147]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 859;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_direct_call_arg3_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_direct_call_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[148]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 859;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_direct_call_arg4_1 = Nuitka_Cell_GET(self->m_closure[2]);
        Py_INCREF(tmp_direct_call_arg1_1);
        Py_INCREF(tmp_direct_call_arg3_1);
        Py_INCREF(tmp_direct_call_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
            tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 859;
            type_description_1 = "ooccc";
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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped,
        type_description_1,
        par_x,
        par__,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped == cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped);
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped);

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
    CHECK_OBJECT(par__);
    Py_DECREF(par__);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par__);
    Py_DECREF(par__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par__ = python_pars[1];
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped = MAKE_FUNCTION_FRAME(tstate, code_objects_307bd0858844534ede16c1d5524aafdc, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped->m_type_description == NULL);
    frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped = cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_direct_call_arg1_1;
        PyObject *tmp_direct_call_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_direct_call_arg3_1;
        PyObject *tmp_direct_call_arg4_1;
        tmp_expression_value_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 865;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 865;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[3]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 865;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_direct_call_arg1_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_x);
        tmp_tuple_element_1 = par_x;
        tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_direct_call_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[147]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 865;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_direct_call_arg3_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_direct_call_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[148]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 865;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_direct_call_arg4_1 = Nuitka_Cell_GET(self->m_closure[2]);
        Py_INCREF(tmp_direct_call_arg1_1);
        Py_INCREF(tmp_direct_call_arg3_1);
        Py_INCREF(tmp_direct_call_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
            tmp_args_element_value_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 865;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped->m_frame.f_lineno = 865;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 865;
            type_description_1 = "ooccc";
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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped,
        type_description_1,
        par_x,
        par__,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped == cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped);
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped);

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
    CHECK_OBJECT(par__);
    Py_DECREF(par__);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par__);
    Py_DECREF(par__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_f = python_pars[1];
    PyObject *var_J = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped)) {
        Py_XDECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped = MAKE_FUNCTION_FRAME(tstate, code_objects_308e3e96c1fef274b4a80a06a8118eb3, module_scipy$optimize$_lsq$least_squares, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped->m_type_description == NULL);
    frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped = cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        tmp_called_value_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_approx_derivative(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[13]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 886;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[14]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 886;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(self->m_closure[3]);
        CHECK_OBJECT(par_x);
        tmp_kw_call_arg_value_1_1 = par_x;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[149]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 886;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(self->m_closure[2]);
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[3]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 886;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(self->m_closure[4]);
        CHECK_OBJECT(par_f);
        tmp_kw_call_dict_value_2_1 = par_f;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[150]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 887;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_3_1 = Nuitka_Cell_GET(self->m_closure[1]);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[147]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 887;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_4_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[148]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 888;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_5_1 = Nuitka_Cell_GET(self->m_closure[6]);
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[54]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 888;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_6_1 = Nuitka_Cell_GET(self->m_closure[5]);
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped->m_frame.f_lineno = 886;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[7] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[151]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 886;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }
        assert(var_J == NULL);
        var_J = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_J);
        tmp_expression_value_1 = var_J;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[32]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 889;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 889;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 890;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_J);
        tmp_args_element_value_1 = var_J;
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped->m_frame.f_lineno = 890;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[12], tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 890;
            type_description_1 = "oooccccccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_J;
            assert(old != NULL);
            var_J = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    if (var_J == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[152]);
        NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
        CHAIN_EXCEPTION(tstate, exception_state.exception_value);

        exception_lineno = 892;
        type_description_1 = "oooccccccc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_J;
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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped,
        type_description_1,
        par_x,
        par_f,
        var_J,
        self->m_closure[3],
        self->m_closure[2],
        self->m_closure[4],
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[6],
        self->m_closure[5]
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped == cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped);
        cache_frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped = NULL;
    }

    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_J);
    var_J = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_J);
    var_J = NULL;
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
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_88b9a2ab63c1c8766a6bdc9f04a45053,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function(PyThreadState *tstate, PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        mod_consts[68],
#endif
        code_objects_5210a244ba2d583bc7fa99a778ff0b4e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function(PyThreadState *tstate, PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        mod_consts[68],
#endif
        code_objects_8e428f4c00fd069cb3a7630646a009ef,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__11_least_squares(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function__11_least_squares,
        mod_consts[184],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7c245c9c0285e6bc89d8fb6634dbc360,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        mod_consts[146],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        code_objects_2b1a808a34ad7540162366d425cb5413,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped(PyThreadState *tstate, PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        code_objects_c116ba93316a4f4578e43d524fe7f631,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped(PyThreadState *tstate, PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        code_objects_3d8cf30fde71f9039993172ab4624426,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped(PyThreadState *tstate, PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        code_objects_307bd0858844534ede16c1d5524aafdc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        code_objects_308e3e96c1fef274b4a80a06a8118eb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        closure,
        7
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e8dda8d95a07cc99c99f9e234553f225,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3a4b0bdbbe291fdebb0026eb3b151236,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d5cb587866c9df50dc662747bfc16be9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[37],
#endif
        code_objects_e607962ffe17b5a12655e987de75072c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d27e1a7f24bef0d4561ff3dae77c7160,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3b68af000c169e933e6d876f27960385,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__6_huber(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function__6_huber,
        mod_consts[179],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d7e5853c29b03a5bc7dae770a2b93958,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1958d8b210f15e2da4bd4c74e8fe9070,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__8_cauchy(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function__8_cauchy,
        mod_consts[181],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e27279e5173f8ea7c6695755ec5e4509,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__9_arctan(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_lsq$least_squares$$$function__9_arctan,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_da932b68a72468258fc60c4b95d169d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_lsq$least_squares,
        NULL,
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

static function_impl_code const function_table_scipy$optimize$_lsq$least_squares[] = {
    impl_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance$$$function__1_check,
    impl_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__1_loss_function,
    impl_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function$$$function__2_loss_function,
    impl_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__1_fun_wrapped,
    impl_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__2_jac_wrapped,
    impl_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__3_jac_wrapped,
    impl_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__4_jac_wrapped,
    impl_scipy$optimize$_lsq$least_squares$$$function__11_least_squares$$$function__5_jac_wrapped,
    impl_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack,
    impl_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds,
    impl_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance,
    impl_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale,
    impl_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity,
    impl_scipy$optimize$_lsq$least_squares$$$function__6_huber,
    impl_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1,
    impl_scipy$optimize$_lsq$least_squares$$$function__8_cauchy,
    impl_scipy$optimize$_lsq$least_squares$$$function__9_arctan,
    impl_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function,
    impl_scipy$optimize$_lsq$least_squares$$$function__11_least_squares,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_scipy$optimize$_lsq$least_squares);

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
        module_scipy$optimize$_lsq$least_squares,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_scipy$optimize$_lsq$least_squares,
        sizeof(function_table_scipy$optimize$_lsq$least_squares) / sizeof(function_impl_code)
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
static char const *module_full_name = "scipy.optimize._lsq.least_squares";
#endif

// Internal entry point for module code.
PyObject *modulecode_scipy$optimize$_lsq$least_squares(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy$optimize$_lsq$least_squares");

    // Store the module for future use.
    module_scipy$optimize$_lsq$least_squares = module;

    moduledict_scipy$optimize$_lsq$least_squares = MODULE_DICT(module_scipy$optimize$_lsq$least_squares);

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
        PRINT_STRING("scipy$optimize$_lsq$least_squares: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy$optimize$_lsq$least_squares: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("scipy$optimize$_lsq$least_squares: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "scipy.optimize._lsq.least_squares" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initscipy$optimize$_lsq$least_squares\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$optimize$_lsq$least_squares,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$optimize$_lsq$least_squares,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[207]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$optimize$_lsq$least_squares,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_lsq$least_squares,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_lsq$least_squares,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$optimize$_lsq$least_squares);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_scipy$optimize$_lsq$least_squares);
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

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$optimize$_lsq$least_squares;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    int tmp_res;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[153];
        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_2);
    }
    frame_frame_scipy$optimize$_lsq$least_squares = MAKE_MODULE_FRAME(code_objects_a3f01f1bb45854ab8787bec1ab10bb58, module_scipy$optimize$_lsq$least_squares);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$optimize$_lsq$least_squares);
    assert(Py_REFCNT(frame_frame_scipy$optimize$_lsq$least_squares) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$___spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[156], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$___spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[157], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[159];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[160];
        tmp_level_value_1 = const_int_0;
        frame_frame_scipy$optimize$_lsq$least_squares->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$optimize$_lsq$least_squares,
                mod_consts[44],
                const_int_0
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[44]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[161];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = const_int_0;
        frame_frame_scipy$optimize$_lsq$least_squares->m_frame.f_lineno = 4;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[162];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[163];
        tmp_level_value_3 = const_int_0;
        frame_frame_scipy$optimize$_lsq$least_squares->m_frame.f_lineno = 5;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_scipy$optimize$_lsq$least_squares,
                mod_consts[18],
                const_int_0
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[18]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[164];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[165];
        tmp_level_value_4 = const_int_0;
        frame_frame_scipy$optimize$_lsq$least_squares->m_frame.f_lineno = 7;
        tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_scipy$optimize$_lsq$least_squares,
                mod_consts[53],
                const_int_0
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[53]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_scipy$optimize$_lsq$least_squares,
                mod_consts[166],
                const_int_0
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[166]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_9);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[167];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[168];
        tmp_level_value_5 = const_int_0;
        frame_frame_scipy$optimize$_lsq$least_squares->m_frame.f_lineno = 8;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_scipy$optimize$_lsq$least_squares,
                mod_consts[117],
                const_int_0
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[117]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[169];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[170];
        tmp_level_value_6 = const_int_0;
        frame_frame_scipy$optimize$_lsq$least_squares->m_frame.f_lineno = 9;
        tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_scipy$optimize$_lsq$least_squares,
                mod_consts[5],
                const_int_0
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[5]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_scipy$optimize$_lsq$least_squares,
                mod_consts[27],
                const_int_0
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[27]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_13);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[171];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[172];
        tmp_level_value_7 = const_int_0;
        frame_frame_scipy$optimize$_lsq$least_squares->m_frame.f_lineno = 10;
        tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_scipy$optimize$_lsq$least_squares,
                mod_consts[13],
                const_int_0
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[13]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_scipy$optimize$_lsq$least_squares,
                mod_consts[56],
                const_int_0
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[56]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_16);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[104];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[173];
        tmp_level_value_8 = const_int_pos_1;
        frame_frame_scipy$optimize$_lsq$least_squares->m_frame.f_lineno = 12;
        tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_scipy$optimize$_lsq$least_squares,
                mod_consts[104],
                const_int_0
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[104]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[133];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[174];
        tmp_level_value_9 = const_int_pos_1;
        frame_frame_scipy$optimize$_lsq$least_squares->m_frame.f_lineno = 13;
        tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_scipy$optimize$_lsq$least_squares,
                mod_consts[133],
                const_int_0
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[133]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[175];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_scipy$optimize$_lsq$least_squares;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[176];
        tmp_level_value_10 = const_int_pos_1;
        frame_frame_scipy$optimize$_lsq$least_squares->m_frame.f_lineno = 14;
        tmp_assign_source_19 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_12 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_scipy$optimize$_lsq$least_squares,
                mod_consts[1],
                const_int_0
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[1]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_13 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_scipy$optimize$_lsq$least_squares,
                mod_consts[98],
                const_int_0
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[98]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_14 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_scipy$optimize$_lsq$least_squares,
                mod_consts[105],
                const_int_0
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[105]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_22);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = DICT_COPY(tstate, mod_consts[177]);
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = DICT_COPY(tstate, mod_consts[178]);
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__1_call_minpack(tstate);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__2_prepare_bounds(tstate);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__3_check_tolerance(tstate);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__4_check_x_scale(tstate);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__5_check_jac_sparsity(tstate);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__6_huber(tstate);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__7_soft_l1(tstate);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__8_cauchy(tstate);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__9_arctan(tstate);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[62];
        tmp_dict_value_1 = Py_None;
        tmp_assign_source_34 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[179];
        tmp_dict_value_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_huber(tstate);
        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[180];
        tmp_dict_value_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_soft_l1(tstate);
        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[181];
        tmp_dict_value_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_cauchy(tstate);
        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[60];
        tmp_dict_value_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_arctan(tstate);
        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__10_construct_loss_function(tstate);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[119];
        tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 17);
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_expression_value_1;
            PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_1);
            tmp_expression_value_1 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
            if (unlikely(tmp_expression_value_1 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 241;

                goto tuple_build_exception_1;
            }
            tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
            if (tmp_operand_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 241;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
            Py_DECREF(tmp_operand_value_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 241;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
            {
                PyObject *tmp_expression_value_2;
                PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
                tmp_expression_value_2 = module_var_accessor_scipy$optimize$_lsq$least_squares_$$_np(tstate);
                if (unlikely(tmp_expression_value_2 == NULL)) {
                    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
                }

                if (tmp_expression_value_2 == NULL) {
                    assert(HAS_EXCEPTION_STATE(&exception_state));



                    exception_lineno = 241;

                    goto tuple_build_exception_2;
                }
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[19]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 241;

                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            PyTuple_SET_ITEM(tmp_defaults_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[104];
            PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[182];
            PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[182];
            PyTuple_SET_ITEM0(tmp_defaults_1, 4, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[182];
            PyTuple_SET_ITEM0(tmp_defaults_1, 5, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[183];
            PyTuple_SET_ITEM0(tmp_defaults_1, 6, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[62];
            PyTuple_SET_ITEM0(tmp_defaults_1, 7, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[183];
            PyTuple_SET_ITEM0(tmp_defaults_1, 8, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 9, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 10, tmp_tuple_element_1);
            tmp_tuple_element_1 = MAKE_DICT_EMPTY(tstate);
            PyTuple_SET_ITEM(tmp_defaults_1, 11, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 12, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 13, tmp_tuple_element_1);
            tmp_tuple_element_1 = const_int_0;
            PyTuple_SET_ITEM0(tmp_defaults_1, 14, tmp_tuple_element_1);
            tmp_tuple_element_1 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_defaults_1, 15, tmp_tuple_element_1);
            tmp_tuple_element_1 = MAKE_DICT_EMPTY(tstate);
            PyTuple_SET_ITEM(tmp_defaults_1, 16, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_defaults_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;


        tmp_assign_source_36 = MAKE_FUNCTION_scipy$optimize$_lsq$least_squares$$$function__11_least_squares(tstate, tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_36);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$optimize$_lsq$least_squares, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$optimize$_lsq$least_squares->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$optimize$_lsq$least_squares, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_scipy$optimize$_lsq$least_squares);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy$optimize$_lsq$least_squares", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "scipy.optimize._lsq.least_squares" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_scipy$optimize$_lsq$least_squares);
    return module_scipy$optimize$_lsq$least_squares;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_lsq$least_squares, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$optimize$_lsq$least_squares", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
