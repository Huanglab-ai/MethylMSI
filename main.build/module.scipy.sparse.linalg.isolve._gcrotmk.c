/* Generated code for Python module 'scipy$sparse$linalg$isolve$_gcrotmk'
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

/* The "module_scipy$sparse$linalg$isolve$_gcrotmk" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$sparse$linalg$isolve$_gcrotmk;
PyDictObject *moduledict_scipy$sparse$linalg$isolve$_gcrotmk;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[133];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[133];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("scipy.sparse.linalg.isolve._gcrotmk"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 133; i++) {
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
void checkModuleConstants_scipy$sparse$linalg$isolve$_gcrotmk(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 133; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 13
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
static PyObject *module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_DeprecationWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[64]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[64])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[64], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[64])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[64], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[64]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[64]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[64]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_LinAlgError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[52]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[52])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[52], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[52])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[52], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[52]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[52]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[52]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$___spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[132]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[132])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[132], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[132])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[132], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[132]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[132]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[132]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$__fgmres(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[93]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[93]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[93]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[93]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_get_blas_funcs(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[2]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[2])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[2], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[2])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[2], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[2]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[2]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[2]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_lstsq(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[53]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[53]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[53]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[53]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_make_system(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[57]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[57])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[57], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[57])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[57], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[57]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[57]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[57]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[4]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[4])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[4], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[4])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[4], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[4]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[4]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[4]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_qr(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[76]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[76])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[76], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[76])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[76], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[76]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[76]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[76]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_qr_insert(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[47]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[47])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[47], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[47])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[47], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[47]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[47]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[47]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_solve(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[102]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[102])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[102], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[102])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[102], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[102]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[102]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[102]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_svd(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[104]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[104]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[104]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[104]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[62]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$sparse$linalg$isolve$_gcrotmk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[62])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[62], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[62])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[62], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[62]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[62]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[62]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_d0ef514b3ddff8184b1a1cd85cd7fda7;
static PyCodeObject *code_objects_b34a4ccbd9e3edf9d6a47ff5caf85b46;
static PyCodeObject *code_objects_ef779e5f517e187bd0a77120fc491084;
static PyCodeObject *code_objects_bcd98bd1261cbea0bf2aa6ffd7a85f51;
static PyCodeObject *code_objects_0865852ff1b2b73d429a9f776713007f;
static PyCodeObject *code_objects_3e84e27bf7ec34f459a2550e2cf8f919;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[125]); CHECK_OBJECT(module_filename_obj);
    code_objects_d0ef514b3ddff8184b1a1cd85cd7fda7 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[0], mod_consts[1], mod_consts[126], NULL, 1, 0, 0);
    code_objects_b34a4ccbd9e3edf9d6a47ff5caf85b46 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[0], mod_consts[1], mod_consts[126], NULL, 1, 0, 0);
    code_objects_ef779e5f517e187bd0a77120fc491084 = MAKE_CODE_OBJECT(module_filename_obj, 302, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[0], mod_consts[68], mod_consts[127], NULL, 1, 0, 0);
    code_objects_bcd98bd1261cbea0bf2aa6ffd7a85f51 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[128], mod_consts[128], NULL, NULL, 0, 0, 0);
    code_objects_0865852ff1b2b73d429a9f776713007f = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[129], NULL, 9, 0, 0);
    code_objects_3e84e27bf7ec34f459a2550e2cf8f919 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[130], NULL, 13, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres$$$function__1_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres$$$function__2_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_matvec = python_pars[0];
    PyObject *par_v0 = python_pars[1];
    PyObject *par_m = python_pars[2];
    PyObject *par_atol = python_pars[3];
    PyObject *par_lpsolve = python_pars[4];
    PyObject *par_rpsolve = python_pars[5];
    PyObject *par_cs = python_pars[6];
    PyObject *par_outer_v = python_pars[7];
    PyObject *par_prepend_outer_v = python_pars[8];
    PyObject *var_axpy = NULL;
    PyObject *var_dot = NULL;
    PyObject *var_scal = NULL;
    PyObject *var_nrm2 = NULL;
    PyObject *var_vs = NULL;
    PyObject *var_zs = NULL;
    PyObject *var_y = NULL;
    PyObject *var_res = NULL;
    PyObject *var_B = NULL;
    PyObject *var_Q = NULL;
    PyObject *var_R = NULL;
    PyObject *var_eps = NULL;
    PyObject *var_breakdown = NULL;
    PyObject *var_j = NULL;
    PyObject *var_z = NULL;
    PyObject *var_w = NULL;
    PyObject *var_w_norm = NULL;
    PyObject *var_i = NULL;
    PyObject *var_c = NULL;
    PyObject *var_alpha = NULL;
    PyObject *var_hcur = NULL;
    PyObject *var_v = NULL;
    PyObject *var_Q2 = NULL;
    PyObject *var_R2 = NULL;
    PyObject *var__ = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__element_3 = NULL;
    PyObject *tmp_tuple_unpack_7__element_4 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres;
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
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_lpsolve);
        tmp_cmp_expr_left_1 = par_lpsolve;
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


        tmp_assign_source_1 = MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres$$$function__1_lambda(tstate);

        {
            PyObject *old = par_lpsolve;
            assert(old != NULL);
            par_lpsolve = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_rpsolve);
        tmp_cmp_expr_left_2 = par_rpsolve;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;


        tmp_assign_source_2 = MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres$$$function__2_lambda(tstate);

        {
            PyObject *old = par_rpsolve;
            assert(old != NULL);
            par_rpsolve = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres)) {
        Py_XDECREF(cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres = MAKE_FUNCTION_FRAME(tstate, code_objects_0865852ff1b2b73d429a9f776713007f, module_scipy$sparse$linalg$isolve$_gcrotmk, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_type_description == NULL);
    frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres = cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres);
    assert(Py_REFCNT(frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_1 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_get_blas_funcs(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = MAKE_LIST4(tstate, mod_consts[3]);
        CHECK_OBJECT(par_v0);
        tmp_tuple_element_1 = par_v0;
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_1);
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 4);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 4);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 4);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 4);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 4);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
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
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        assert(var_axpy == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_axpy = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert(var_dot == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_dot = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;
        assert(var_scal == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_scal = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_4;
        assert(var_nrm2 == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_nrm2 = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(par_v0);
        tmp_list_element_1 = par_v0;
        tmp_assign_source_12 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_assign_source_12, 0, tmp_list_element_1);
        assert(var_vs == NULL);
        var_vs = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_LIST_EMPTY(tstate, 0);
        assert(var_zs == NULL);
        var_zs = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_np(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_m);
        tmp_add_expr_left_1 = par_m;
        CHECK_OBJECT(par_outer_v);
        tmp_len_arg_1 = par_outer_v;
        tmp_add_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_m;
            assert(old != NULL);
            par_m = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_np(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[6]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cs);
        tmp_len_arg_2 = par_cs;
        tmp_tuple_element_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM(tmp_kw_call_arg_value_0_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_m);
        tmp_tuple_element_2 = par_m;
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_v0);
        tmp_expression_value_3 = par_v0;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[7]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 78;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[8]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_B == NULL);
        var_B = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_4 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_np(tstate);
        if (unlikely(tmp_expression_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[9]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_v0);
        tmp_expression_value_5 = par_v0;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[7]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 81;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, mod_consts[10], kw_values, mod_consts[8]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_Q == NULL);
        var_Q = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_6 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_np(tstate);
        if (unlikely(tmp_expression_value_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[6]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_v0);
        tmp_expression_value_7 = par_v0;
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[7]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 82;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_assign_source_18 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, mod_consts[11], kw_values, mod_consts[8]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_R == NULL);
        var_R = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_10;
        tmp_expression_value_9 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_np(tstate);
        if (unlikely(tmp_expression_value_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[12]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_v0);
        tmp_expression_value_10 = par_v0;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[7]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 84;
        tmp_expression_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[13]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_eps == NULL);
        var_eps = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = Py_False;
        assert(var_breakdown == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_breakdown = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT(par_m);
        tmp_xrange_low_1 = par_m;
        tmp_iter_arg_2 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 89;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 89;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_21;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_22 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
        if (tmp_assign_source_22 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 89;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_23 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_23;
            Py_INCREF(var_j);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT(par_prepend_outer_v);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_prepend_outer_v);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_j);
        tmp_cmp_expr_left_3 = var_j;
        CHECK_OBJECT(par_outer_v);
        tmp_len_arg_3 = par_outer_v;
        tmp_cmp_expr_right_3 = BUILTIN_LEN(tstate, tmp_len_arg_3);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_and_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_outer_v);
        tmp_expression_value_11 = par_outer_v;
        CHECK_OBJECT(var_j);
        tmp_subscript_value_1 = var_j;
        tmp_iter_arg_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_1);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_24 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_26 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
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

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_27 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_z;
            var_z = tmp_assign_source_27;
            Py_INCREF(var_z);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_28 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_w;
            var_w = tmp_assign_source_28;
            Py_INCREF(var_w);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_len_arg_4;
        CHECK_OBJECT(par_prepend_outer_v);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_prepend_outer_v);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_j);
        tmp_cmp_expr_left_4 = var_j;
        CHECK_OBJECT(par_outer_v);
        tmp_len_arg_4 = par_outer_v;
        tmp_cmp_expr_right_4 = BUILTIN_LEN(tstate, tmp_len_arg_4);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_4 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_4 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_4;
        if (par_rpsolve == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[14]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_value_6 = par_rpsolve;
        if (par_v0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[15]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_4 = par_v0;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 95;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_z;
            var_z = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = Py_None;
        {
            PyObject *old = var_w;
            var_w = tmp_assign_source_30;
            Py_INCREF(var_w);
            Py_XDECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_len_arg_5;
        CHECK_OBJECT(par_prepend_outer_v);
        tmp_operand_value_1 = par_prepend_outer_v;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_and_left_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(var_j);
        tmp_cmp_expr_left_5 = var_j;
        if (par_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[16]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_sub_expr_left_1 = par_m;
        CHECK_OBJECT(par_outer_v);
        tmp_len_arg_5 = par_outer_v;
        tmp_sub_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_5);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_and_right_value_3 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_len_arg_6;
        CHECK_OBJECT(par_outer_v);
        tmp_expression_value_12 = par_outer_v;
        CHECK_OBJECT(var_j);
        tmp_sub_expr_left_2 = var_j;
        if (par_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[16]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_sub_expr_left_3 = par_m;
        CHECK_OBJECT(par_outer_v);
        tmp_len_arg_6 = par_outer_v;
        tmp_sub_expr_right_3 = BUILTIN_LEN(tstate, tmp_len_arg_6);
        if (tmp_sub_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_sub_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_right_3);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_subscript_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_subscript_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_iter_arg_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_31 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_32 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 2);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_32;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_33 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 2);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_4;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_34 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_z;
            var_z = tmp_assign_source_34;
            Py_INCREF(var_z);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_35 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_w;
            var_w = tmp_assign_source_35;
            Py_INCREF(var_w);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_3;
        if (par_rpsolve == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[14]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 100;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_value_7 = par_rpsolve;
        if (var_vs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[17]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 100;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_13 = var_vs;
        tmp_subscript_value_3 = const_int_neg_1;
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, -1);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 100;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 100;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 100;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_z;
            var_z = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = Py_None;
        {
            PyObject *old = var_w;
            var_w = tmp_assign_source_37;
            Py_INCREF(var_w);
            Py_XDECREF(old);
        }

    }
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_w);
        tmp_cmp_expr_left_6 = var_w;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_7;
        if (par_lpsolve == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[18]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_value_8 = par_lpsolve;
        if (par_matvec == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[19]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_value_9 = par_matvec;
        CHECK_OBJECT(var_z);
        tmp_args_element_value_7 = var_z;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 104;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_7);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 104;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_w;
            assert(old != NULL);
            var_w = tmp_assign_source_38;
            Py_DECREF(old);
        }

    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(var_w);
        tmp_expression_value_14 = var_w;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[20]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 107;
        tmp_assign_source_39 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
        Py_DECREF(tmp_called_value_10);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_w;
            assert(old != NULL);
            var_w = tmp_assign_source_39;
            Py_DECREF(old);
        }

    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_8;
        if (var_nrm2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[21]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_value_11 = var_nrm2;
        CHECK_OBJECT(var_w);
        tmp_args_element_value_8 = var_w;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 109;
        tmp_assign_source_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_8);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_w_norm;
            var_w_norm = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_12 = (PyObject *)&PyEnum_Type;
        if (par_cs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[22]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_9 = par_cs;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 113;
        tmp_iter_arg_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_9);
        if (tmp_iter_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_41 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_42 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_42 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 113;
                goto try_except_handler_9;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_6 = tmp_for_loop_2__iter_value;
        tmp_assign_source_43 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_44 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 0, 2);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_45 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 1, 2);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_lineno_7 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_7 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_10;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_lineno_8 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_8 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_46;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_46 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_46;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_47 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_47;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        if (var_dot == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_value_13 = var_dot;
        CHECK_OBJECT(var_c);
        tmp_args_element_value_10 = var_c;
        if (var_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[24]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_args_element_value_11 = var_w;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
        }

        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_alpha;
            var_alpha = tmp_assign_source_48;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(var_alpha);
        tmp_ass_subvalue_1 = var_alpha;
        if (var_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[25]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_ass_subscribed_1 = var_B;
        CHECK_OBJECT(var_i);
        tmp_tuple_element_3 = var_i;
        tmp_ass_subscript_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_ass_subscript_1, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_j);
        tmp_tuple_element_3 = var_j;
        PyTuple_SET_ITEM0(tmp_ass_subscript_1, 1, tmp_tuple_element_3);
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_operand_value_2;
        if (var_axpy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_value_14 = var_axpy;
        CHECK_OBJECT(var_c);
        tmp_args_element_value_12 = var_c;
        if (var_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[24]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_args_element_value_13 = var_w;
        CHECK_OBJECT(var_c);
        tmp_expression_value_16 = var_c;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[27]);
        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_subscript_value_4 = const_int_0;
        tmp_args_element_value_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_4, 0);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_alpha);
        tmp_operand_value_2 = var_alpha;
        tmp_args_element_value_15 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_14, call_args);
        }

        Py_DECREF(tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_w;
            var_w = tmp_assign_source_49;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 113;
        type_description_1 = "oooooooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_lineno_9 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_9 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_4;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_18;
        tmp_expression_value_17 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_np(tstate);
        if (unlikely(tmp_expression_value_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[6]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_j);
        tmp_add_expr_left_2 = var_j;
        tmp_add_expr_right_2 = mod_consts[28];
        tmp_kw_call_arg_value_0_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_Q == NULL) {
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[29]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_18 = var_Q;
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[7]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 119;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_15, args, kw_values, mod_consts[8]);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_hcur;
            var_hcur = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_16;
        tmp_called_value_16 = (PyObject *)&PyEnum_Type;
        if (var_vs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[17]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_16 = var_vs;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 120;
        tmp_iter_arg_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_16);
        if (tmp_iter_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_51 = MAKE_ITERATOR(tstate, tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_52 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_52 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 120;
                goto try_except_handler_12;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_52;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_iter_arg_8;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_iter_arg_8 = tmp_for_loop_3__iter_value;
        tmp_assign_source_53 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__source_iter;
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_54 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_11, 0, 2);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_1;
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_54;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_55 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_12, 1, 2);
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_2;
            tmp_tuple_unpack_5__element_2 = tmp_assign_source_55;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_5, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_lineno_10 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_10 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_13;
    // End of try:
    try_end_10:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_lineno_11 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_11 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_12;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_56 = tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_56;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_57 = tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_57;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        if (var_dot == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_called_value_17 = var_dot;
        CHECK_OBJECT(var_v);
        tmp_args_element_value_17 = var_v;
        if (var_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[24]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_args_element_value_18 = var_w;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
        }

        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_alpha;
            var_alpha = tmp_assign_source_58;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_alpha);
        tmp_ass_subvalue_2 = var_alpha;
        if (var_hcur == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[30]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_ass_subscribed_2 = var_hcur;
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_2 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_operand_value_3;
        if (var_axpy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_called_value_18 = var_axpy;
        CHECK_OBJECT(var_v);
        tmp_args_element_value_19 = var_v;
        if (var_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[24]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_args_element_value_20 = var_w;
        CHECK_OBJECT(var_v);
        tmp_expression_value_20 = var_v;
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[27]);
        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_subscript_value_5 = const_int_0;
        tmp_args_element_value_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_5, 0);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_alpha);
        tmp_operand_value_3 = var_alpha;
        tmp_args_element_value_22 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
        if (tmp_args_element_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_assign_source_59 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_18, call_args);
        }

        Py_DECREF(tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_w;
            var_w = tmp_assign_source_59;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 120;
        type_description_1 = "oooooooooooooooooooooooooooooooooo";
        goto try_except_handler_12;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_lineno_12 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_12 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_4;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        if (var_nrm2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[21]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_value_19 = var_nrm2;
        if (var_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[24]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_23 = var_w;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 124;
        tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_23);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_hcur == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[30]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_ass_subscribed_3 = var_hcur;
        if (var_i == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[31]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_add_expr_left_3 = var_i;
        tmp_add_expr_right_3 = const_int_pos_1;
        tmp_ass_subscript_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_ass_subscript_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscript_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_21;
        tmp_expression_value_21 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_np(tstate);
        if (unlikely(tmp_expression_value_21 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[32]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 126;
        tmp_assign_source_60 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts[33], 0), mod_consts[34]);
        Py_DECREF(tmp_called_value_20);
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_with_1__source;
            tmp_with_1__source = tmp_assign_source_60;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_22 = tmp_with_1__source;
        tmp_called_value_21 = LOOKUP_SPECIAL(tstate, tmp_expression_value_22, mod_consts[35]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 126;
        tmp_assign_source_61 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_21);
        Py_DECREF(tmp_called_value_21);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_with_1__enter;
            tmp_with_1__enter = tmp_assign_source_61;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_23 = tmp_with_1__source;
        tmp_assign_source_62 = LOOKUP_SPECIAL(tstate, tmp_expression_value_23, mod_consts[36]);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_with_1__exit;
            tmp_with_1__exit = tmp_assign_source_62;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_63;
        tmp_assign_source_63 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_63;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_6;
        tmp_truediv_expr_left_1 = const_int_pos_1;
        if (var_hcur == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[30]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_expression_value_24 = var_hcur;
        tmp_subscript_value_6 = const_int_neg_1;
        tmp_truediv_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_24, tmp_subscript_value_6, -1);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_64 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = var_alpha;
            var_alpha = tmp_assign_source_64;
            Py_XDECREF(old);
        }

    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_lineno_13 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_13 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_13);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres, exception_keeper_lineno_13);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_13, exception_tb);
        } else if (exception_keeper_lineno_13 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres, exception_keeper_lineno_13);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_13, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_13);
    // Tried code:
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_7 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        nuitka_bool tmp_assign_source_65;
        tmp_assign_source_65 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_65;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_22 = tmp_with_1__exit;
        tmp_args_element_value_24 = EXC_TYPE(tstate);
        tmp_args_element_value_25 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_25); 
        tmp_args_element_value_26 = (PyObject *)EXC_TRACEBACK(tstate);
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_operand_value_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_22, call_args);
        }

        if (tmp_operand_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 128;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame)) {
            frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 126;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame)) {
            frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
    branch_end_7:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_lineno_14 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_14 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_16;
    // End of try:
    try_end_14:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_13;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_13:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_lineno_15 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_15 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_9;
        nuitka_bool tmp_cmp_expr_left_8;
        nuitka_bool tmp_cmp_expr_right_8;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_8 = tmp_with_1__indicator;
        tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
        tmp_condition_result_9 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_23 = tmp_with_1__exit;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 128;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_23, mod_consts[37]);

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_15);

            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_9:;
    // Re-raise.
    exception_state = exception_keeper_name_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_15;
    // End of try:
    try_end_15:;
    {
        bool tmp_condition_result_10;
        nuitka_bool tmp_cmp_expr_left_9;
        nuitka_bool tmp_cmp_expr_right_9;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_9 = tmp_with_1__indicator;
        tmp_cmp_expr_right_9 = NUITKA_BOOL_TRUE;
        tmp_condition_result_10 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_24 = tmp_with_1__exit;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 128;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_24, mod_consts[37]);

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_10:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_lineno_16 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_16 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_4;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_27;
        int tmp_truth_name_3;
        tmp_expression_value_25 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_np(tstate);
        if (unlikely(tmp_expression_value_25 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[38]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_alpha == NULL) {
            Py_DECREF(tmp_called_value_25);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[39]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_27 = var_alpha;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 130;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_27);
        Py_DECREF(tmp_called_value_25);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_11 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_26;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        if (var_scal == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[40]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_value_26 = var_scal;
        if (var_alpha == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[39]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_28 = var_alpha;
        if (var_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[24]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_29 = var_w;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_26, call_args);
        }

        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_w;
            var_w = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    branch_no_11:;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        if (var_hcur == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[30]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_26 = var_hcur;
        tmp_subscript_value_7 = const_int_neg_1;
        tmp_cmp_expr_left_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_7, -1);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_eps == NULL) {
            Py_DECREF(tmp_cmp_expr_left_10);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[13]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_mult_expr_left_1 = var_eps;
        CHECK_OBJECT(var_w_norm);
        tmp_mult_expr_right_1 = var_w_norm;
        tmp_cmp_expr_right_10 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_cmp_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_cmp_expr_left_10);

            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_operand_value_5 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        Py_DECREF(tmp_cmp_expr_right_10);
        if (tmp_operand_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = Py_True;
        {
            PyObject *old = var_breakdown;
            var_breakdown = tmp_assign_source_67;
            Py_INCREF(var_breakdown);
            Py_XDECREF(old);
        }

    }
    branch_no_12:;
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_30;
        if (var_vs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[17]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_27 = var_vs;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[41]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_w == NULL) {
            Py_DECREF(tmp_called_value_27);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[24]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_30 = var_w;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 139;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_27);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        if (var_zs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[42]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_list_arg_value_1 = var_zs;
        CHECK_OBJECT(var_z);
        tmp_item_value_1 = var_z;
        tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_28 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_np(tstate);
        if (unlikely(tmp_expression_value_28 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[6]);
        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_j);
        tmp_add_expr_left_4 = var_j;
        tmp_add_expr_right_4 = mod_consts[28];
        tmp_tuple_element_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_arg_value_0_3 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_add_expr_left_5;
            PyObject *tmp_add_expr_right_5;
            PyTuple_SET_ITEM(tmp_kw_call_arg_value_0_3, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_j);
            tmp_add_expr_left_5 = var_j;
            tmp_add_expr_right_5 = mod_consts[28];
            tmp_tuple_element_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_5, tmp_add_expr_right_5);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 145;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_kw_call_arg_value_0_3, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        if (var_Q == NULL) {
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_kw_call_arg_value_0_3);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[29]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_29 = var_Q;
        tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[7]);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_1_1 = mod_consts[43];
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 145;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_68 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_28, args, kw_values, mod_consts[44]);
        }

        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_Q2;
            var_Q2 = tmp_assign_source_68;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        if (var_Q == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[29]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_ass_subvalue_4 = var_Q;
        CHECK_OBJECT(var_Q2);
        tmp_ass_subscribed_4 = var_Q2;
        CHECK_OBJECT(var_j);
        tmp_add_expr_left_6 = var_j;
        tmp_add_expr_right_6 = const_int_pos_1;
        tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_6, tmp_add_expr_right_6);
        if (tmp_stop_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_tuple_element_5 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_tuple_element_5 == NULL));
        tmp_ass_subscript_4 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_stop_value_2;
            PyObject *tmp_add_expr_left_7;
            PyObject *tmp_add_expr_right_7;
            PyTuple_SET_ITEM(tmp_ass_subscript_4, 0, tmp_tuple_element_5);
            CHECK_OBJECT(var_j);
            tmp_add_expr_left_7 = var_j;
            tmp_add_expr_right_7 = const_int_pos_1;
            tmp_stop_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_7, tmp_add_expr_right_7);
            if (tmp_stop_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 146;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_5 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_2);
            Py_DECREF(tmp_stop_value_2);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_ass_subscript_4, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_ass_subscript_4);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscript_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        tmp_ass_subvalue_5 = const_int_pos_1;
        CHECK_OBJECT(var_Q2);
        tmp_ass_subscribed_5 = var_Q2;
        CHECK_OBJECT(var_j);
        tmp_add_expr_left_8 = var_j;
        tmp_add_expr_right_8 = const_int_pos_1;
        tmp_tuple_element_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_8, tmp_add_expr_right_8);
        if (tmp_tuple_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_ass_subscript_5 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_add_expr_left_9;
            PyObject *tmp_add_expr_right_9;
            PyTuple_SET_ITEM(tmp_ass_subscript_5, 0, tmp_tuple_element_6);
            CHECK_OBJECT(var_j);
            tmp_add_expr_left_9 = var_j;
            tmp_add_expr_right_9 = const_int_pos_1;
            tmp_tuple_element_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_9, tmp_add_expr_right_9);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 147;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_ass_subscript_5, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_ass_subscript_5);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subscript_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_kw_call_dict_value_1_2;
        tmp_expression_value_30 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_np(tstate);
        if (unlikely(tmp_expression_value_30 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[6]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_j);
        tmp_add_expr_left_10 = var_j;
        tmp_add_expr_right_10 = mod_consts[28];
        tmp_tuple_element_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_10, tmp_add_expr_right_10);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_arg_value_0_4 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM(tmp_kw_call_arg_value_0_4, 0, tmp_tuple_element_7);
        CHECK_OBJECT(var_j);
        tmp_tuple_element_7 = var_j;
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_4, 1, tmp_tuple_element_7);
        if (var_R == NULL) {
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_kw_call_arg_value_0_4);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[45]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_31 = var_R;
        tmp_kw_call_dict_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[7]);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_kw_call_arg_value_0_4);

            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_1_2 = mod_consts[43];
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 149;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_2};
            tmp_assign_source_69 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_29, args, kw_values, mod_consts[44]);
        }

        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_kw_call_arg_value_0_4);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_R2;
            var_R2 = tmp_assign_source_69;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_stop_value_3;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        if (var_R == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[45]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_ass_subvalue_6 = var_R;
        CHECK_OBJECT(var_R2);
        tmp_ass_subscribed_6 = var_R2;
        CHECK_OBJECT(var_j);
        tmp_add_expr_left_11 = var_j;
        tmp_add_expr_right_11 = const_int_pos_1;
        tmp_stop_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_11, tmp_add_expr_right_11);
        if (tmp_stop_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_tuple_element_8 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_3);
        Py_DECREF(tmp_stop_value_3);
        assert(!(tmp_tuple_element_8 == NULL));
        tmp_ass_subscript_6 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM(tmp_ass_subscript_6, 0, tmp_tuple_element_8);
        tmp_tuple_element_8 = mod_consts[46];
        PyTuple_SET_ITEM0(tmp_ass_subscript_6, 1, tmp_tuple_element_8);
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subscript_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_30 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_qr_insert(tstate);
        if (unlikely(tmp_called_value_30 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[47]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        CHECK_OBJECT(var_Q2);
        tmp_tuple_element_9 = var_Q2;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 4);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_9);
        CHECK_OBJECT(var_R2);
        tmp_tuple_element_9 = var_R2;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_9);
        if (var_hcur == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[30]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_4;
        }

        tmp_tuple_element_9 = var_hcur;
        PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_9);
        CHECK_OBJECT(var_j);
        tmp_tuple_element_9 = var_j;
        PyTuple_SET_ITEM0(tmp_args_value_1, 3, tmp_tuple_element_9);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_args_value_1);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[48]);
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 152;
        tmp_iter_arg_9 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_iter_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_assign_source_70 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__source_iter;
            tmp_tuple_unpack_6__source_iter = tmp_assign_source_70;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_71 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_13, 0, 2);
        if (tmp_assign_source_71 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_1;
            tmp_tuple_unpack_6__element_1 = tmp_assign_source_71;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_72 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_14, 1, 2);
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_2;
            tmp_tuple_unpack_6__element_2 = tmp_assign_source_72;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_6;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_6, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_lineno_17 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_17 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_19;
    // End of try:
    try_end_17:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_lineno_18 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_18 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_4;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    {
        PyObject *tmp_assign_source_73;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
        tmp_assign_source_73 = tmp_tuple_unpack_6__element_1;
        {
            PyObject *old = var_Q;
            var_Q = tmp_assign_source_73;
            Py_INCREF(var_Q);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
        tmp_assign_source_74 = tmp_tuple_unpack_6__element_2;
        {
            PyObject *old = var_R;
            var_R = tmp_assign_source_74;
            Py_INCREF(var_R);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;

    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_abs_arg_1;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(var_Q);
        tmp_expression_value_32 = var_Q;
        tmp_subscript_value_8 = mod_consts[49];
        tmp_abs_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_8);
        if (tmp_abs_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_75 = BUILTIN_ABS(tmp_abs_arg_1);
        Py_DECREF(tmp_abs_arg_1);
        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_res;
            var_res = tmp_assign_source_75;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_res);
        tmp_cmp_expr_left_11 = var_res;
        CHECK_OBJECT(par_atol);
        tmp_cmp_expr_right_11 = par_atol;
        tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (var_breakdown == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[50]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_truth_name_4 = CHECK_IF_TRUE(var_breakdown);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_or_right_value_1 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_condition_result_13 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_13 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    goto loop_end_1;
    branch_no_13:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 89;
        type_description_1 = "oooooooooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_19 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_19 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_tuple_element_10;
        tmp_expression_value_33 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_np(tstate);
        if (unlikely(tmp_expression_value_33 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[38]);
        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_R == NULL) {
            Py_DECREF(tmp_called_value_31);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[45]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_34 = var_R;
        if (var_j == NULL) {
            Py_DECREF(tmp_called_value_31);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[51]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_10 = var_j;
        tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_10);
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[51]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_5;
        }

        tmp_tuple_element_10 = var_j;
        PyTuple_SET_ITEM0(tmp_subscript_value_9, 1, tmp_tuple_element_10);
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_subscript_value_9);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_args_element_value_31 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_args_element_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 166;
        tmp_operand_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_31);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_operand_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_32;
        tmp_called_value_32 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_LinAlgError(tstate);
        if (unlikely(tmp_called_value_32 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[52]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 168;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_32);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_state.exception_type = tmp_raise_type_1;
        exception_lineno = 168;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "oooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_14:;
    // Tried code:
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_iter_arg_10;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_stop_value_4;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_tuple_element_12;
        tmp_called_value_33 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_lstsq(tstate);
        if (unlikely(tmp_called_value_33 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[53]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        if (var_R == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[45]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_expression_value_35 = var_R;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[51]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_add_expr_left_12 = var_j;
        tmp_add_expr_right_12 = const_int_pos_1;
        tmp_stop_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_12, tmp_add_expr_right_12);
        if (tmp_stop_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_tuple_element_11 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_4);
        Py_DECREF(tmp_stop_value_4);
        assert(!(tmp_tuple_element_11 == NULL));
        tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_stop_value_5;
            PyObject *tmp_add_expr_left_13;
            PyObject *tmp_add_expr_right_13;
            PyTuple_SET_ITEM(tmp_subscript_value_10, 0, tmp_tuple_element_11);
            if (var_j == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[51]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 175;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }

            tmp_add_expr_left_13 = var_j;
            tmp_add_expr_right_13 = const_int_pos_1;
            tmp_stop_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_13, tmp_add_expr_right_13);
            if (tmp_stop_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 175;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_tuple_element_11 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_5);
            Py_DECREF(tmp_stop_value_5);
            assert(!(tmp_tuple_element_11 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_10, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_subscript_value_10);
        goto try_except_handler_21;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_args_element_value_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_10);
        Py_DECREF(tmp_subscript_value_10);
        if (tmp_args_element_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        if (var_Q == NULL) {
            Py_DECREF(tmp_args_element_value_32);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[29]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_expression_value_36 = var_Q;
        tmp_tuple_element_12 = const_int_0;
        tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_stop_value_6;
            PyObject *tmp_add_expr_left_14;
            PyObject *tmp_add_expr_right_14;
            PyTuple_SET_ITEM0(tmp_subscript_value_11, 0, tmp_tuple_element_12);
            if (var_j == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[51]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 175;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }

            tmp_add_expr_left_14 = var_j;
            tmp_add_expr_right_14 = const_int_pos_1;
            tmp_stop_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_14, tmp_add_expr_right_14);
            if (tmp_stop_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 175;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            tmp_tuple_element_12 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_6);
            Py_DECREF(tmp_stop_value_6);
            assert(!(tmp_tuple_element_12 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_11, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_args_element_value_32);
        Py_DECREF(tmp_subscript_value_11);
        goto try_except_handler_21;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_11);
        Py_DECREF(tmp_subscript_value_11);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_args_element_value_32);

            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 175;
        tmp_args_element_value_33 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[54]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_args_element_value_32);

            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame.f_lineno = 175;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33};
            tmp_iter_arg_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_33, call_args);
        }

        Py_DECREF(tmp_args_element_value_32);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_iter_arg_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_assign_source_76 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_10);
        Py_DECREF(tmp_iter_arg_10);
        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        assert(tmp_tuple_unpack_7__source_iter == NULL);
        tmp_tuple_unpack_7__source_iter = tmp_assign_source_76;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_15 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_77 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_15, 0, 4);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        assert(tmp_tuple_unpack_7__element_1 == NULL);
        tmp_tuple_unpack_7__element_1 = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_16 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_78 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_16, 1, 4);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        assert(tmp_tuple_unpack_7__element_2 == NULL);
        tmp_tuple_unpack_7__element_2 = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_17 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_79 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_17, 2, 4);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        assert(tmp_tuple_unpack_7__element_3 == NULL);
        tmp_tuple_unpack_7__element_3 = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_18 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_80 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_18, 3, 4);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        assert(tmp_tuple_unpack_7__element_4 == NULL);
        tmp_tuple_unpack_7__element_4 = tmp_assign_source_80;
    }
    {
        PyObject *tmp_iterator_name_7;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_iterator_name_7 = tmp_tuple_unpack_7__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_7, 4);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_lineno_20 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_20 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_21;
    // End of try:
    try_end_20:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_lineno_21 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_21 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_3);
    tmp_tuple_unpack_7__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_4);
    tmp_tuple_unpack_7__element_4 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    {
        PyObject *tmp_assign_source_81;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
        tmp_assign_source_81 = tmp_tuple_unpack_7__element_1;
        assert(var_y == NULL);
        Py_INCREF(tmp_assign_source_81);
        var_y = tmp_assign_source_81;
    }
    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_82;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
        tmp_assign_source_82 = tmp_tuple_unpack_7__element_2;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_82);
        var__ = tmp_assign_source_82;
    }
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;

    {
        PyObject *tmp_assign_source_83;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_3);
        tmp_assign_source_83 = tmp_tuple_unpack_7__element_3;
        {
            PyObject *old = var__;
            assert(old != NULL);
            var__ = tmp_assign_source_83;
            Py_INCREF(var__);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_3);
    tmp_tuple_unpack_7__element_3 = NULL;

    {
        PyObject *tmp_assign_source_84;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_4);
        tmp_assign_source_84 = tmp_tuple_unpack_7__element_4;
        {
            PyObject *old = var__;
            assert(old != NULL);
            var__ = tmp_assign_source_84;
            Py_INCREF(var__);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_4);
    tmp_tuple_unpack_7__element_4 = NULL;

    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_tuple_element_13;
        if (var_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[25]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_37 = var_B;
        tmp_tuple_element_13 = mod_consts[46];
        tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_stop_value_7;
            PyObject *tmp_add_expr_left_15;
            PyObject *tmp_add_expr_right_15;
            PyTuple_SET_ITEM0(tmp_subscript_value_12, 0, tmp_tuple_element_13);
            if (var_j == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[51]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 177;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_8;
            }

            tmp_add_expr_left_15 = var_j;
            tmp_add_expr_right_15 = const_int_pos_1;
            tmp_stop_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_15, tmp_add_expr_right_15);
            if (tmp_stop_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 177;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            tmp_tuple_element_13 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_7);
            Py_DECREF(tmp_stop_value_7);
            assert(!(tmp_tuple_element_13 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_12, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_subscript_value_12);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_assign_source_85 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_12);
        Py_DECREF(tmp_subscript_value_12);
        if (tmp_assign_source_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_B;
            var_B = tmp_assign_source_85;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_tuple_element_14;
        if (var_Q == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[29]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 179;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_14 = var_Q;
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 7);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_14);
        if (var_R == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[45]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 179;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_9;
        }

        tmp_tuple_element_14 = var_R;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_14);
        CHECK_OBJECT(var_B);
        tmp_tuple_element_14 = var_B;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_14);
        if (var_vs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[17]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 179;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_9;
        }

        tmp_tuple_element_14 = var_vs;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_14);
        if (var_zs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[42]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 179;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_9;
        }

        tmp_tuple_element_14 = var_zs;
        PyTuple_SET_ITEM0(tmp_return_value, 4, tmp_tuple_element_14);
        CHECK_OBJECT(var_y);
        tmp_tuple_element_14 = var_y;
        PyTuple_SET_ITEM0(tmp_return_value, 5, tmp_tuple_element_14);
        if (var_res == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[55]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 179;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_9;
        }

        tmp_tuple_element_14 = var_res;
        PyTuple_SET_ITEM0(tmp_return_value, 6, tmp_tuple_element_14);
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres,
        type_description_1,
        par_matvec,
        par_v0,
        par_m,
        par_atol,
        par_lpsolve,
        par_rpsolve,
        par_cs,
        par_outer_v,
        par_prepend_outer_v,
        var_axpy,
        var_dot,
        var_scal,
        var_nrm2,
        var_vs,
        var_zs,
        var_y,
        var_res,
        var_B,
        var_Q,
        var_R,
        var_eps,
        var_breakdown,
        var_j,
        var_z,
        var_w,
        var_w_norm,
        var_i,
        var_c,
        var_alpha,
        var_hcur,
        var_v,
        var_Q2,
        var_R2,
        var__
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres == cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres);
        cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres = NULL;
    }

    assertFrameObject(frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_m);
    par_m = NULL;
    Py_XDECREF(par_lpsolve);
    par_lpsolve = NULL;
    Py_XDECREF(par_rpsolve);
    par_rpsolve = NULL;
    Py_XDECREF(var_axpy);
    var_axpy = NULL;
    Py_XDECREF(var_dot);
    var_dot = NULL;
    Py_XDECREF(var_scal);
    var_scal = NULL;
    Py_XDECREF(var_nrm2);
    var_nrm2 = NULL;
    Py_XDECREF(var_vs);
    var_vs = NULL;
    Py_XDECREF(var_zs);
    var_zs = NULL;
    CHECK_OBJECT(var_y);
    Py_DECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
    CHECK_OBJECT(var_B);
    Py_DECREF(var_B);
    var_B = NULL;
    Py_XDECREF(var_Q);
    var_Q = NULL;
    Py_XDECREF(var_R);
    var_R = NULL;
    Py_XDECREF(var_eps);
    var_eps = NULL;
    Py_XDECREF(var_breakdown);
    var_breakdown = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_z);
    var_z = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
    Py_XDECREF(var_w_norm);
    var_w_norm = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_alpha);
    var_alpha = NULL;
    Py_XDECREF(var_hcur);
    var_hcur = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_Q2);
    var_Q2 = NULL;
    Py_XDECREF(var_R2);
    var_R2 = NULL;
    CHECK_OBJECT(var__);
    Py_DECREF(var__);
    var__ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_22 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_22 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(par_m);
    par_m = NULL;
    Py_XDECREF(par_lpsolve);
    par_lpsolve = NULL;
    Py_XDECREF(par_rpsolve);
    par_rpsolve = NULL;
    Py_XDECREF(var_axpy);
    var_axpy = NULL;
    Py_XDECREF(var_dot);
    var_dot = NULL;
    Py_XDECREF(var_scal);
    var_scal = NULL;
    Py_XDECREF(var_nrm2);
    var_nrm2 = NULL;
    Py_XDECREF(var_vs);
    var_vs = NULL;
    Py_XDECREF(var_zs);
    var_zs = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
    Py_XDECREF(var_B);
    var_B = NULL;
    Py_XDECREF(var_Q);
    var_Q = NULL;
    Py_XDECREF(var_R);
    var_R = NULL;
    Py_XDECREF(var_eps);
    var_eps = NULL;
    Py_XDECREF(var_breakdown);
    var_breakdown = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_z);
    var_z = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
    Py_XDECREF(var_w_norm);
    var_w_norm = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_alpha);
    var_alpha = NULL;
    Py_XDECREF(var_hcur);
    var_hcur = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_Q2);
    var_Q2 = NULL;
    Py_XDECREF(var_R2);
    var_R2 = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_22;
    exception_lineno = exception_keeper_lineno_22;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_matvec);
    Py_DECREF(par_matvec);
    CHECK_OBJECT(par_v0);
    Py_DECREF(par_v0);
    CHECK_OBJECT(par_atol);
    Py_DECREF(par_atol);
    CHECK_OBJECT(par_cs);
    Py_DECREF(par_cs);
    CHECK_OBJECT(par_outer_v);
    Py_DECREF(par_outer_v);
    CHECK_OBJECT(par_prepend_outer_v);
    Py_DECREF(par_prepend_outer_v);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_matvec);
    Py_DECREF(par_matvec);
    CHECK_OBJECT(par_v0);
    Py_DECREF(par_v0);
    CHECK_OBJECT(par_atol);
    Py_DECREF(par_atol);
    CHECK_OBJECT(par_cs);
    Py_DECREF(par_cs);
    CHECK_OBJECT(par_outer_v);
    Py_DECREF(par_outer_v);
    CHECK_OBJECT(par_prepend_outer_v);
    Py_DECREF(par_prepend_outer_v);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[0];
    PyObject *par_b = python_pars[1];
    PyObject *par_x0 = python_pars[2];
    PyObject *par_tol = python_pars[3];
    PyObject *par_maxiter = python_pars[4];
    PyObject *par_M = python_pars[5];
    PyObject *par_callback = python_pars[6];
    PyObject *par_m = python_pars[7];
    PyObject *par_k = python_pars[8];
    PyObject *par_CU = python_pars[9];
    PyObject *par_discard_C = python_pars[10];
    PyObject *par_truncate = python_pars[11];
    PyObject *par_atol = python_pars[12];
    PyObject *var_x = NULL;
    PyObject *var_postprocess = NULL;
    PyObject *var_matvec = NULL;
    PyObject *var_psolve = NULL;
    PyObject *var_axpy = NULL;
    PyObject *var_dot = NULL;
    PyObject *var_scal = NULL;
    PyObject *var_r = NULL;
    PyObject *var_nrm2 = NULL;
    PyObject *var_b_norm = NULL;
    PyObject *var_C = NULL;
    PyObject *var_us = NULL;
    PyObject *var_j = NULL;
    PyObject *var_c = NULL;
    PyObject *var_u = NULL;
    PyObject *var_Q = NULL;
    PyObject *var_R = NULL;
    PyObject *var_P = NULL;
    PyObject *var_cs = NULL;
    PyObject *var_new_us = NULL;
    PyObject *var_i = NULL;
    PyObject *var_yc = NULL;
    PyObject *var_j_outer = NULL;
    PyObject *var_beta = NULL;
    PyObject *var_beta_tol = NULL;
    PyObject *var_ml = NULL;
    PyObject *var_B = NULL;
    PyObject *var_vs = NULL;
    PyObject *var_zs = NULL;
    PyObject *var_y = NULL;
    PyObject *var_pres = NULL;
    PyObject *var_ux = NULL;
    PyObject *var_z = NULL;
    PyObject *var_by = NULL;
    PyObject *var_cu = NULL;
    PyObject *var_byc = NULL;
    PyObject *var_hy = NULL;
    PyObject *var_cx = NULL;
    PyObject *var_v = NULL;
    PyObject *var_hyc = NULL;
    PyObject *var_alpha = NULL;
    PyObject *var_gamma = NULL;
    PyObject *var_D = NULL;
    PyObject *var_W = NULL;
    PyObject *var_sigma = NULL;
    PyObject *var_V = NULL;
    PyObject *var_new_CU = NULL;
    PyObject *var_w = NULL;
    PyObject *var_cup = NULL;
    PyObject *var_wp = NULL;
    PyObject *var_cp = NULL;
    PyObject *var_up = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *outline_0_var_u = NULL;
    PyObject *outline_1_var_c = NULL;
    PyObject *outline_1_var_u = NULL;
    PyObject *outline_2_var_cz = NULL;
    PyObject *outline_2_var_uz = NULL;
    PyObject *tmp_for_loop_10__for_iterator = NULL;
    PyObject *tmp_for_loop_10__iter_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *tmp_for_loop_7__for_iterator = NULL;
    PyObject *tmp_for_loop_7__iter_value = NULL;
    PyObject *tmp_for_loop_8__for_iterator = NULL;
    PyObject *tmp_for_loop_8__iter_value = NULL;
    PyObject *tmp_for_loop_9__for_iterator = NULL;
    PyObject *tmp_for_loop_9__iter_value = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_10__element_1 = NULL;
    PyObject *tmp_tuple_unpack_10__element_2 = NULL;
    PyObject *tmp_tuple_unpack_10__source_iter = NULL;
    PyObject *tmp_tuple_unpack_11__element_1 = NULL;
    PyObject *tmp_tuple_unpack_11__element_2 = NULL;
    PyObject *tmp_tuple_unpack_11__source_iter = NULL;
    PyObject *tmp_tuple_unpack_12__element_1 = NULL;
    PyObject *tmp_tuple_unpack_12__element_2 = NULL;
    PyObject *tmp_tuple_unpack_12__source_iter = NULL;
    PyObject *tmp_tuple_unpack_13__element_1 = NULL;
    PyObject *tmp_tuple_unpack_13__element_2 = NULL;
    PyObject *tmp_tuple_unpack_13__element_3 = NULL;
    PyObject *tmp_tuple_unpack_13__source_iter = NULL;
    PyObject *tmp_tuple_unpack_14__element_1 = NULL;
    PyObject *tmp_tuple_unpack_14__element_2 = NULL;
    PyObject *tmp_tuple_unpack_14__source_iter = NULL;
    PyObject *tmp_tuple_unpack_15__element_1 = NULL;
    PyObject *tmp_tuple_unpack_15__element_2 = NULL;
    PyObject *tmp_tuple_unpack_15__source_iter = NULL;
    PyObject *tmp_tuple_unpack_16__element_1 = NULL;
    PyObject *tmp_tuple_unpack_16__element_2 = NULL;
    PyObject *tmp_tuple_unpack_16__source_iter = NULL;
    PyObject *tmp_tuple_unpack_17__element_1 = NULL;
    PyObject *tmp_tuple_unpack_17__element_2 = NULL;
    PyObject *tmp_tuple_unpack_17__source_iter = NULL;
    PyObject *tmp_tuple_unpack_18__element_1 = NULL;
    PyObject *tmp_tuple_unpack_18__element_2 = NULL;
    PyObject *tmp_tuple_unpack_18__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__element_4 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__element_3 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_tuple_unpack_8__element_3 = NULL;
    PyObject *tmp_tuple_unpack_8__element_4 = NULL;
    PyObject *tmp_tuple_unpack_8__element_5 = NULL;
    PyObject *tmp_tuple_unpack_8__element_6 = NULL;
    PyObject *tmp_tuple_unpack_8__element_7 = NULL;
    PyObject *tmp_tuple_unpack_8__source_iter = NULL;
    PyObject *tmp_tuple_unpack_9__element_1 = NULL;
    PyObject *tmp_tuple_unpack_9__element_2 = NULL;
    PyObject *tmp_tuple_unpack_9__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk)) {
        Py_XDECREF(cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk = MAKE_FUNCTION_FRAME(tstate, code_objects_3e84e27bf7ec34f459a2550e2cf8f919, module_scipy$sparse$linalg$isolve$_gcrotmk, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_type_description == NULL);
    frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk = cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk);
    assert(Py_REFCNT(frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_make_system(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[57]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_A);
        tmp_args_element_value_1 = par_A;
        CHECK_OBJECT(par_M);
        tmp_args_element_value_2 = par_M;
        CHECK_OBJECT(par_x0);
        tmp_args_element_value_3 = par_x0;
        CHECK_OBJECT(par_b);
        tmp_args_element_value_4 = par_b;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 264;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 5);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 5);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 5);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 5);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 4, 5);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 5);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
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
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_A;
            assert(old != NULL);
            par_A = tmp_assign_source_7;
            Py_INCREF(par_A);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_M;
            assert(old != NULL);
            par_M = tmp_assign_source_8;
            Py_INCREF(par_M);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        assert(var_x == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_x = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = par_b;
            assert(old != NULL);
            par_b = tmp_assign_source_10;
            Py_INCREF(par_b);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_5;
        assert(var_postprocess == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_postprocess = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_2 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_np(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 266;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_b);
        tmp_args_element_value_5 = par_b;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 266;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[38], tmp_args_element_value_5);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 266;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 266;
        tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[58]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 266;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 266;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        tmp_make_exception_arg_1 = mod_consts[59];
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 267;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_state.exception_type = tmp_raise_type_1;
        exception_lineno = 267;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_truncate);
        tmp_cmp_expr_left_1 = par_truncate;
        tmp_cmp_expr_right_1 = mod_consts[60];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 269;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        tmp_mod_expr_left_1 = mod_consts[61];
        CHECK_OBJECT(par_truncate);
        tmp_tuple_element_1 = par_truncate;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 270;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 270;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_state.exception_type = tmp_raise_type_2;
        exception_lineno = 270;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_atol);
        tmp_cmp_expr_left_2 = par_atol;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_expression_value_1 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_warnings(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[62]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[63]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_DeprecationWarning(tstate);
        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[64]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_2);

            exception_lineno = 276;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = mod_consts[28];
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 273;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, mod_consts[65], kw_values, mod_consts[66]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(par_tol);
        tmp_assign_source_12 = par_tol;
        {
            PyObject *old = par_atol;
            assert(old != NULL);
            par_atol = tmp_assign_source_12;
            Py_INCREF(par_atol);
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_A);
        tmp_expression_value_2 = par_A;
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[19]);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 279;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_matvec == NULL);
        var_matvec = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_M);
        tmp_expression_value_3 = par_M;
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[19]);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 280;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_psolve == NULL);
        var_psolve = tmp_assign_source_14;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_CU);
        tmp_cmp_expr_left_3 = par_CU;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_LIST_EMPTY(tstate, 0);
        {
            PyObject *old = par_CU;
            assert(old != NULL);
            par_CU = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_k);
        tmp_cmp_expr_left_4 = par_k;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(par_m);
        tmp_assign_source_16 = par_m;
        {
            PyObject *old = par_k;
            assert(old != NULL);
            par_k = tmp_assign_source_16;
            Py_INCREF(par_k);
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = mod_consts[37];
        tmp_assign_source_17 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        assert(!(tmp_assign_source_17 == NULL));
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_17;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 0, 3);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 288;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 1, 3);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 288;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 2, 3);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 288;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_3 == NULL);
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_20;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 3);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 288;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_21 = tmp_tuple_unpack_2__element_1;
        assert(var_axpy == NULL);
        Py_INCREF(tmp_assign_source_21);
        var_axpy = tmp_assign_source_21;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_22 = tmp_tuple_unpack_2__element_2;
        assert(var_dot == NULL);
        Py_INCREF(tmp_assign_source_22);
        var_dot = tmp_assign_source_22;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_23 = tmp_tuple_unpack_2__element_3;
        assert(var_scal == NULL);
        Py_INCREF(tmp_assign_source_23);
        var_scal = tmp_assign_source_23;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_b);
        tmp_sub_expr_left_1 = par_b;
        CHECK_OBJECT(var_matvec);
        tmp_called_value_3 = var_matvec;
        CHECK_OBJECT(var_x);
        tmp_args_element_value_6 = var_x;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 290;
        tmp_sub_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 290;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 290;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_24;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_tuple_element_2;
        tmp_called_value_4 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_get_blas_funcs(tstate);
        if (unlikely(tmp_called_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[2]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 292;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_7 = MAKE_LIST4(tstate, mod_consts[3]);
        CHECK_OBJECT(var_x);
        tmp_tuple_element_2 = var_x;
        tmp_args_element_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_8, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_r);
        tmp_tuple_element_2 = var_r;
        PyTuple_SET_ITEM0(tmp_args_element_value_8, 1, tmp_tuple_element_2);
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 292;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_25 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 292;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_25;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_26 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 0, 4);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 292;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_27 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 1, 4);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 292;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_28 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_11, 2, 4);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 292;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_3 == NULL);
        tmp_tuple_unpack_3__element_3 = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_29 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_12, 3, 4);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 292;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_4 == NULL);
        tmp_tuple_unpack_3__element_4 = tmp_assign_source_29;
    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 4);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 292;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_4);
    tmp_tuple_unpack_3__element_4 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_30 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_axpy;
            assert(old != NULL);
            var_axpy = tmp_assign_source_30;
            Py_INCREF(var_axpy);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_31 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_dot;
            assert(old != NULL);
            var_dot = tmp_assign_source_31;
            Py_INCREF(var_dot);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
        tmp_assign_source_32 = tmp_tuple_unpack_3__element_3;
        {
            PyObject *old = var_scal;
            assert(old != NULL);
            var_scal = tmp_assign_source_32;
            Py_INCREF(var_scal);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;

    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_4);
        tmp_assign_source_33 = tmp_tuple_unpack_3__element_4;
        assert(var_nrm2 == NULL);
        Py_INCREF(tmp_assign_source_33);
        var_nrm2 = tmp_assign_source_33;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_4);
    tmp_tuple_unpack_3__element_4 = NULL;

    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(var_nrm2);
        tmp_called_value_5 = var_nrm2;
        CHECK_OBJECT(par_b);
        tmp_args_element_value_9 = par_b;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 294;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_9);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 294;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_b_norm == NULL);
        var_b_norm = tmp_assign_source_34;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_discard_C);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_discard_C);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 296;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(par_CU);
            tmp_iter_arg_4 = par_CU;
            tmp_assign_source_35 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
            if (tmp_assign_source_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 297;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_35;
        }
        {
            PyObject *tmp_assign_source_36;
            tmp_assign_source_36 = MAKE_LIST_EMPTY(tstate, 0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_36;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_37;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_37 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_37 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 297;
                    goto try_except_handler_9;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_37;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_5 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_38 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 297;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_38;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_unpack_13;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_13 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_39 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_13, 0, 2);
            if (tmp_assign_source_39 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 297;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_39;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_unpack_14;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_14 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_40 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_14, 1, 2);
            if (tmp_assign_source_40 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 297;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_40;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_4;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_4 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 2);
            if (tmp_result == false) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 297;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
        }
        goto try_end_7;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_lineno_7 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_7 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_10;
        // End of try:
        try_end_7:;
        goto try_end_8;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_lineno_8 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_8 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        try_end_8:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_41;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_41 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_41;
                Py_INCREF(outline_0_var_c);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_42;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_42 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_u;
                outline_0_var_u = tmp_assign_source_42;
                Py_INCREF(outline_0_var_u);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_tuple_element_3;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_tuple_element_3 = Py_None;
            tmp_append_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
            PyTuple_SET_ITEM0(tmp_append_value_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(outline_0_var_u);
            tmp_tuple_element_3 = outline_0_var_u;
            PyTuple_SET_ITEM0(tmp_append_value_1, 1, tmp_tuple_element_3);
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 297;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 297;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_ass_subvalue_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_ass_subvalue_1);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_lineno_9 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_9 = exception_state;
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
        exception_state = exception_keeper_name_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
        Py_XDECREF(outline_0_var_u);
        outline_0_var_u = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_lineno_10 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_10 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
        Py_XDECREF(outline_0_var_u);
        outline_0_var_u = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 297;
        goto frame_exception_exit_1;
        outline_result_1:;
        CHECK_OBJECT(par_CU);
        tmp_ass_subscribed_1 = par_CU;
        tmp_ass_subscript_1 = mod_consts[46];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 297;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_CU);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_CU);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 300;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_value_0_2;
        CHECK_OBJECT(par_CU);
        tmp_expression_value_4 = par_CU;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[67]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 302;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }


        tmp_kw_call_value_0_2 = MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda(tstate);

        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 302;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

            tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts[69]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 302;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_5 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_np(tstate);
        if (unlikely(tmp_expression_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 305;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[70]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 305;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_A);
        tmp_expression_value_7 = par_A;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[27]);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 305;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = const_int_0;
        tmp_tuple_element_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 305;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_len_arg_1;
            PyTuple_SET_ITEM(tmp_kw_call_arg_value_0_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(par_CU);
            tmp_len_arg_1 = par_CU;
            tmp_tuple_element_4 = BUILTIN_LEN(tstate, tmp_len_arg_1);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 305;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_kw_call_arg_value_0_1, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        CHECK_OBJECT(var_r);
        tmp_expression_value_8 = var_r;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[7]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 305;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = mod_consts[43];
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 305;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts[44]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 305;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_C == NULL);
        var_C = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_LIST_EMPTY(tstate, 0);
        assert(var_us == NULL);
        var_us = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = const_int_0;
        assert(var_j == NULL);
        Py_INCREF(tmp_assign_source_45);
        var_j = tmp_assign_source_45;
    }
    loop_start_2:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        if (par_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 308;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_2 = par_CU;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 308;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    goto loop_end_2;
    branch_no_8:;
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_9;
        if (par_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 310;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_9 = par_CU;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[72]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 310;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 310;
        tmp_iter_arg_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts[73]);

        Py_DECREF(tmp_called_value_8);
        if (tmp_iter_arg_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 310;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_46 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 310;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_15 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_47 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_15, 0, 2);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 310;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_47;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_16 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_48 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_16, 1, 2);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 310;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_48;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_5 = tmp_tuple_unpack_4__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_5, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 310;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_lineno_11 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_11 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_12;
    // End of try:
    try_end_9:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_lineno_12 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_12 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_49;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_49 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_49;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_50 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_50;
            Py_INCREF(var_u);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_c);
        tmp_cmp_expr_left_5 = var_c;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_9 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_10;
        if (var_matvec == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[19]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 312;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_9 = var_matvec;
        CHECK_OBJECT(var_u);
        tmp_args_element_value_10 = var_u;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 312;
        tmp_assign_source_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_10);
        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 312;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_c;
            assert(old != NULL);
            var_c = tmp_assign_source_51;
            Py_DECREF(old);
        }

    }
    branch_no_9:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_tuple_element_5;
        CHECK_OBJECT(var_c);
        tmp_ass_subvalue_2 = var_c;
        if (var_C == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[74]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = var_C;
        tmp_tuple_element_5 = mod_consts[46];
        tmp_ass_subscript_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_ass_subscript_2, 0, tmp_tuple_element_5);
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[51]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_5 = var_j;
        PyTuple_SET_ITEM0(tmp_ass_subscript_2, 1, tmp_tuple_element_5);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_ass_subscript_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_iadd_expr_left_1;
        nuitka_digit tmp_iadd_expr_right_1;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[51]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_1 = var_j;
        tmp_iadd_expr_right_1 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        assert(!(tmp_result == false));
        tmp_assign_source_52 = tmp_iadd_expr_left_1;
        var_j = tmp_assign_source_52;

    }
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        if (var_us == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[75]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_value_1 = var_us;
        CHECK_OBJECT(var_u);
        tmp_item_value_1 = var_u;
        tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 308;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_10 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_qr(tstate);
        if (unlikely(tmp_called_value_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[76]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        if (var_C == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[74]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_tuple_element_6 = var_C;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_6);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[77]);
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 318;
        tmp_iter_arg_7 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_iter_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_53 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        assert(tmp_tuple_unpack_5__source_iter == NULL);
        tmp_tuple_unpack_5__source_iter = tmp_assign_source_53;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_17 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_54 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_17, 0, 3);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(tmp_tuple_unpack_5__element_1 == NULL);
        tmp_tuple_unpack_5__element_1 = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_18 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_55 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_18, 1, 3);
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(tmp_tuple_unpack_5__element_2 == NULL);
        tmp_tuple_unpack_5__element_2 = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_unpack_19;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_19 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_56 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_19, 2, 3);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        assert(tmp_tuple_unpack_5__element_3 == NULL);
        tmp_tuple_unpack_5__element_3 = tmp_assign_source_56;
    }
    {
        PyObject *tmp_iterator_name_6;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_6 = tmp_tuple_unpack_5__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_6, 3);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_lineno_13 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_13 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_14;
    // End of try:
    try_end_11:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_lineno_14 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_14 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_3);
    tmp_tuple_unpack_5__element_3 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_57 = tmp_tuple_unpack_5__element_1;
        assert(var_Q == NULL);
        Py_INCREF(tmp_assign_source_57);
        var_Q = tmp_assign_source_57;
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_58 = tmp_tuple_unpack_5__element_2;
        assert(var_R == NULL);
        Py_INCREF(tmp_assign_source_58);
        var_R = tmp_assign_source_58;
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_3);
        tmp_assign_source_59 = tmp_tuple_unpack_5__element_3;
        assert(var_P == NULL);
        Py_INCREF(tmp_assign_source_59);
        var_P = tmp_assign_source_59;
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_3);
    tmp_tuple_unpack_5__element_3 = NULL;

    tmp_result = var_C != NULL;
    if (likely(tmp_result)) {
        Py_DECREF(var_C);
        var_C = NULL;
    }

    if (tmp_result == false) {

        FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[74]);
        NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
        CHAIN_EXCEPTION(tstate, exception_state.exception_value);

        exception_lineno = 319;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(var_Q);
        tmp_expression_value_10 = var_Q;
        tmp_list_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[78]);
        if (tmp_list_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_60 = MAKE_LIST(tstate, tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cs == NULL);
        var_cs = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = MAKE_LIST_EMPTY(tstate, 0);
        assert(var_new_us == NULL);
        var_new_us = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(var_cs);
        tmp_len_arg_2 = var_cs;
        tmp_xrange_low_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        assert(!(tmp_xrange_low_1 == NULL));
        tmp_iter_arg_8 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 326;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_62 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
        Py_DECREF(tmp_iter_arg_8);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 326;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_62;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_63 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
        if (tmp_assign_source_63 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 326;
                goto try_except_handler_16;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_63;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_64 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_64;
            Py_INCREF(var_j);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_3;
        if (var_us == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[75]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_expression_value_11 = var_us;
        CHECK_OBJECT(var_P);
        tmp_expression_value_12 = var_P;
        CHECK_OBJECT(var_j);
        tmp_subscript_value_3 = var_j;
        tmp_subscript_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_3);
        if (tmp_subscript_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_assign_source_65 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_65;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_xrange_low_2;
        CHECK_OBJECT(var_j);
        tmp_xrange_low_2 = var_j;
        tmp_iter_arg_9 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_2);
        if (tmp_iter_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_assign_source_66 = MAKE_ITERATOR(tstate, tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_67;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_3 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_67 = ITERATOR_NEXT_ITERATOR(tmp_next_source_3);
        if (tmp_assign_source_67 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 328;
                goto try_except_handler_17;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_67;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_68;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_68 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_68;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_tuple_element_7;
        if (var_axpy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_called_value_11 = var_axpy;
        if (var_us == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[75]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_expression_value_13 = var_us;
        CHECK_OBJECT(var_P);
        tmp_expression_value_14 = var_P;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_5 = var_i;
        tmp_subscript_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_5);
        if (tmp_subscript_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_args_element_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        if (var_u == NULL) {
            Py_DECREF(tmp_args_element_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_args_element_value_12 = var_u;
        if (var_u == NULL) {
            Py_DECREF(tmp_args_element_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_expression_value_16 = var_u;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[27]);
        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_subscript_value_6 = const_int_0;
        tmp_args_element_value_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_6, 0);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        CHECK_OBJECT(var_R);
        tmp_expression_value_17 = var_R;
        CHECK_OBJECT(var_i);
        tmp_tuple_element_7 = var_i;
        tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_subscript_value_7, 0, tmp_tuple_element_7);
        CHECK_OBJECT(var_j);
        tmp_tuple_element_7 = var_j;
        PyTuple_SET_ITEM0(tmp_subscript_value_7, 1, tmp_tuple_element_7);
        tmp_operand_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_7);
        Py_DECREF(tmp_subscript_value_7);
        if (tmp_operand_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_args_element_value_14 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 329;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_69 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_69;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 328;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_17;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_lineno_15 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_15 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_16;
    // End of try:
    try_end_13:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_abs_arg_1;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_abs_arg_2;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_9;
        CHECK_OBJECT(var_R);
        tmp_expression_value_18 = var_R;
        CHECK_OBJECT(var_j);
        tmp_tuple_element_8 = var_j;
        tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_subscript_value_8, 0, tmp_tuple_element_8);
        CHECK_OBJECT(var_j);
        tmp_tuple_element_8 = var_j;
        PyTuple_SET_ITEM0(tmp_subscript_value_8, 1, tmp_tuple_element_8);
        tmp_abs_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_8);
        Py_DECREF(tmp_subscript_value_8);
        if (tmp_abs_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_cmp_expr_left_6 = BUILTIN_ABS(tmp_abs_arg_1);
        Py_DECREF(tmp_abs_arg_1);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_mult_expr_left_1 = mod_consts[80];
        CHECK_OBJECT(var_R);
        tmp_expression_value_19 = var_R;
        tmp_subscript_value_9 = mod_consts[81];
        tmp_abs_arg_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_9);
        if (tmp_abs_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_cmp_expr_left_6);

            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_mult_expr_right_1 = BUILTIN_ABS(tmp_abs_arg_2);
        Py_DECREF(tmp_abs_arg_2);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_cmp_expr_left_6);

            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_cmp_expr_right_6 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_cmp_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_cmp_expr_left_6);

            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_condition_result_10 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    goto loop_end_3;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_args_element_value_16;
        if (var_scal == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[40]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_called_value_12 = var_scal;
        tmp_truediv_expr_left_1 = mod_consts[82];
        CHECK_OBJECT(var_R);
        tmp_expression_value_20 = var_R;
        CHECK_OBJECT(var_j);
        tmp_tuple_element_9 = var_j;
        tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_9);
        CHECK_OBJECT(var_j);
        tmp_tuple_element_9 = var_j;
        PyTuple_SET_ITEM0(tmp_subscript_value_10, 1, tmp_tuple_element_9);
        tmp_truediv_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_10);
        Py_DECREF(tmp_subscript_value_10);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_args_element_value_15 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        if (var_u == NULL) {
            Py_DECREF(tmp_args_element_value_15);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_args_element_value_16 = var_u;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 333;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_assign_source_70 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_70;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        if (var_new_us == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 334;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_list_arg_value_2 = var_new_us;
        CHECK_OBJECT(var_u);
        tmp_item_value_2 = var_u;
        tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 326;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_lineno_16 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_16 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_list_arg_2;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_called_value_13 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(var_cs);
        tmp_args_element_value_17 = var_cs;
        if (var_new_us == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_18 = var_new_us;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 337;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_list_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
        }

        if (tmp_list_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_21 = MAKE_LIST(tstate, tmp_list_arg_2);
        Py_DECREF(tmp_list_arg_2);
        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = mod_consts[84];
        tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_11);
        Py_DECREF(tmp_expression_value_21);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_CU == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_3 = par_CU;
        tmp_ass_subscript_3 = mod_consts[46];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_3;
        if (par_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_3 = CHECK_IF_TRUE(par_CU);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_iter_arg_10;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_tuple_element_10;
        tmp_called_value_14 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_get_blas_funcs(tstate);
        if (unlikely(tmp_called_value_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[2]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_args_element_value_19 = MAKE_LIST2(tstate, mod_consts[26],mod_consts[23]);
        CHECK_OBJECT(var_r);
        tmp_tuple_element_10 = var_r;
        tmp_args_element_value_20 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_element_value_20, 0, tmp_tuple_element_10);
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 340;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_iter_arg_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
        }

        Py_DECREF(tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_iter_arg_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_assign_source_71 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_10);
        Py_DECREF(tmp_iter_arg_10);
        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        assert(tmp_tuple_unpack_6__source_iter == NULL);
        tmp_tuple_unpack_6__source_iter = tmp_assign_source_71;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_unpack_20;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_20 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_72 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_20, 0, 2);
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        assert(tmp_tuple_unpack_6__element_1 == NULL);
        tmp_tuple_unpack_6__element_1 = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_unpack_21;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_21 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_73 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_21, 1, 2);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        assert(tmp_tuple_unpack_6__element_2 == NULL);
        tmp_tuple_unpack_6__element_2 = tmp_assign_source_73;
    }
    {
        PyObject *tmp_iterator_name_7;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_iterator_name_7 = tmp_tuple_unpack_6__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_7, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_lineno_17 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_17 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_18;
    // End of try:
    try_end_15:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_lineno_18 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_18 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    {
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
        tmp_assign_source_74 = tmp_tuple_unpack_6__element_1;
        {
            PyObject *old = var_axpy;
            var_axpy = tmp_assign_source_74;
            Py_INCREF(var_axpy);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
        tmp_assign_source_75 = tmp_tuple_unpack_6__element_2;
        {
            PyObject *old = var_dot;
            assert(old != NULL);
            var_dot = tmp_assign_source_75;
            Py_INCREF(var_dot);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;

    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_iter_arg_11;
        if (par_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 350;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_11 = par_CU;
        tmp_assign_source_76 = MAKE_ITERATOR(tstate, tmp_iter_arg_11);
        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 350;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_76;
    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_77;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_4 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_77 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_77 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 350;
                goto try_except_handler_20;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_77;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_iter_arg_12;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_iter_arg_12 = tmp_for_loop_3__iter_value;
        tmp_assign_source_78 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_12);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 350;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__source_iter;
            tmp_tuple_unpack_7__source_iter = tmp_assign_source_78;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_unpack_22;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_22 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_79 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_22, 0, 2);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 350;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_1;
            tmp_tuple_unpack_7__element_1 = tmp_assign_source_79;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_unpack_23;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_23 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_80 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_23, 1, 2);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 350;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_2;
            tmp_tuple_unpack_7__element_2 = tmp_assign_source_80;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_8;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_iterator_name_8 = tmp_tuple_unpack_7__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_8, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 350;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_lineno_19 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_19 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_21;
    // End of try:
    try_end_17:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_lineno_20 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_20 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_20;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    {
        PyObject *tmp_assign_source_81;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
        tmp_assign_source_81 = tmp_tuple_unpack_7__element_1;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_81;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_82;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
        tmp_assign_source_82 = tmp_tuple_unpack_7__element_2;
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_82;
            Py_INCREF(var_u);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;

    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        if (var_dot == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 351;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_called_value_15 = var_dot;
        CHECK_OBJECT(var_c);
        tmp_args_element_value_21 = var_c;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[85]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 351;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_args_element_value_22 = var_r;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 351;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_assign_source_83 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
        }

        if (tmp_assign_source_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 351;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        {
            PyObject *old = var_yc;
            var_yc = tmp_assign_source_83;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_args_element_value_26;
        if (var_axpy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_called_value_16 = var_axpy;
        CHECK_OBJECT(var_u);
        tmp_args_element_value_23 = var_u;
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[86]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_args_element_value_24 = var_x;
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[86]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_expression_value_23 = var_x;
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[27]);
        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_subscript_value_12 = const_int_0;
        tmp_args_element_value_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_12, 0);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_args_element_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        CHECK_OBJECT(var_yc);
        tmp_args_element_value_26 = var_yc;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 352;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_assign_source_84 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_16, call_args);
        }

        Py_DECREF(tmp_args_element_value_25);
        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_84;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_operand_value_4;
        if (var_axpy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_called_value_17 = var_axpy;
        CHECK_OBJECT(var_c);
        tmp_args_element_value_27 = var_c;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[85]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_args_element_value_28 = var_r;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[85]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_expression_value_25 = var_r;
        tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[27]);
        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_subscript_value_13 = const_int_0;
        tmp_args_element_value_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_24, tmp_subscript_value_13, 0);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_args_element_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        CHECK_OBJECT(var_yc);
        tmp_operand_value_4 = var_yc;
        tmp_args_element_value_30 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_4);
        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 353;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_assign_source_85 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_17, call_args);
        }

        Py_DECREF(tmp_args_element_value_29);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_assign_source_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_85;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 350;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_20;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_lineno_21 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_21 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_iter_arg_13;
        PyObject *tmp_xrange_low_3;
        CHECK_OBJECT(par_maxiter);
        tmp_xrange_low_3 = par_maxiter;
        tmp_iter_arg_13 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_3);
        if (tmp_iter_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 356;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_86 = MAKE_ITERATOR(tstate, tmp_iter_arg_13);
        Py_DECREF(tmp_iter_arg_13);
        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 356;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_4__for_iterator == NULL);
        tmp_for_loop_4__for_iterator = tmp_assign_source_86;
    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_87;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_5 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_87 = ITERATOR_NEXT_ITERATOR(tmp_next_source_5);
        if (tmp_assign_source_87 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 356;
                goto try_except_handler_23;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_87;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_88;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_88 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_j_outer;
            var_j_outer = tmp_assign_source_88;
            Py_INCREF(var_j_outer);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        if (par_callback == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[87]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 358;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_cmp_expr_left_7 = par_callback;
        tmp_cmp_expr_right_7 = Py_None;
        tmp_condition_result_12 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_31;
        if (par_callback == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[87]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_called_value_18 = par_callback;
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[86]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_args_element_value_31 = var_x;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 359;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_31);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_12:;
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_32;
        if (var_nrm2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[21]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 361;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_called_value_19 = var_nrm2;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[85]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 361;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_args_element_value_32 = var_r;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 361;
        tmp_assign_source_89 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_32);
        if (tmp_assign_source_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 361;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_beta;
            var_beta = tmp_assign_source_89;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        tmp_called_value_20 = LOOKUP_BUILTIN(mod_consts[88]);
        assert(tmp_called_value_20 != NULL);
        CHECK_OBJECT(par_atol);
        tmp_args_element_value_33 = par_atol;
        if (par_tol == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[89]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_mult_expr_left_2 = par_tol;
        if (var_b_norm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[90]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_mult_expr_right_2 = var_b_norm;
        tmp_args_element_value_34 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_args_element_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 364;
        {
            PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
            tmp_assign_source_90 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
        }

        Py_DECREF(tmp_args_element_value_34);
        if (tmp_assign_source_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_beta_tol;
            var_beta_tol = tmp_assign_source_90;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_beta);
        tmp_cmp_expr_left_8 = var_beta;
        CHECK_OBJECT(var_beta_tol);
        tmp_cmp_expr_right_8 = var_beta_tol;
        tmp_and_left_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_j_outer);
        tmp_cmp_expr_left_9 = var_j_outer;
        tmp_cmp_expr_right_9 = const_int_0;
        tmp_or_left_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (par_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_truth_name_4 = CHECK_IF_TRUE(par_CU);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_or_right_value_1 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_right_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_right_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_condition_result_13 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_13 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_35;
        if (par_b == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[91]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 368;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_sub_expr_left_2 = par_b;
        if (var_matvec == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[19]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 368;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_called_value_21 = var_matvec;
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[86]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 368;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_args_element_value_35 = var_x;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 368;
        tmp_sub_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_35);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 368;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_91 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 368;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_91;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_36;
        if (var_nrm2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[21]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 369;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_called_value_22 = var_nrm2;
        CHECK_OBJECT(var_r);
        tmp_args_element_value_36 = var_r;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 369;
        tmp_assign_source_92 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_36);
        if (tmp_assign_source_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 369;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_beta;
            assert(old != NULL);
            var_beta = tmp_assign_source_92;
            Py_DECREF(old);
        }

    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(var_beta);
        tmp_cmp_expr_left_10 = var_beta;
        CHECK_OBJECT(var_beta_tol);
        tmp_cmp_expr_right_10 = var_beta_tol;
        tmp_condition_result_14 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 371;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = const_int_neg_1;
        {
            PyObject *old = var_j_outer;
            assert(old != NULL);
            var_j_outer = tmp_assign_source_93;
            Py_INCREF(var_j_outer);
            Py_DECREF(old);
        }

    }
    goto loop_end_6;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_args_element_value_38;
        if (par_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[16]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_add_expr_left_1 = par_m;
        tmp_called_value_23 = LOOKUP_BUILTIN(mod_consts[88]);
        assert(tmp_called_value_23 != NULL);
        if (par_k == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[92]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_sub_expr_left_3 = par_k;
        if (par_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_len_arg_3 = par_CU;
        tmp_sub_expr_right_3 = BUILTIN_LEN(tstate, tmp_len_arg_3);
        if (tmp_sub_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_args_element_value_37 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_right_3);
        if (tmp_args_element_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_args_element_value_38 = const_int_0;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 375;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
            tmp_add_expr_right_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_args_element_value_37);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_94 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_ml;
            var_ml = tmp_assign_source_94;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_95;
        // Tried code:
        {
            PyObject *tmp_assign_source_96;
            PyObject *tmp_iter_arg_14;
            if (par_CU == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[71]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 377;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_24;
            }

            tmp_iter_arg_14 = par_CU;
            tmp_assign_source_96 = MAKE_ITERATOR(tstate, tmp_iter_arg_14);
            if (tmp_assign_source_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 377;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_24;
            }
            {
                PyObject *old = tmp_listcomp_2__$0;
                tmp_listcomp_2__$0 = tmp_assign_source_96;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_97;
            tmp_assign_source_97 = MAKE_LIST_EMPTY(tstate, 0);
            {
                PyObject *old = tmp_listcomp_2__contraction;
                tmp_listcomp_2__contraction = tmp_assign_source_97;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_7:;
        {
            PyObject *tmp_next_source_6;
            PyObject *tmp_assign_source_98;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_6 = tmp_listcomp_2__$0;
            tmp_assign_source_98 = ITERATOR_NEXT(tmp_next_source_6);
            if (tmp_assign_source_98 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_7;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 377;
                    goto try_except_handler_25;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_98;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_99;
            PyObject *tmp_iter_arg_15;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_iter_arg_15 = tmp_listcomp_2__iter_value_0;
            tmp_assign_source_99 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_15);
            if (tmp_assign_source_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 377;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_26;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__source_iter;
                tmp_listcomp$tuple_unpack_2__source_iter = tmp_assign_source_99;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_100;
            PyObject *tmp_unpack_24;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_24 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_100 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_24, 0, 2);
            if (tmp_assign_source_100 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 377;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_27;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_1;
                tmp_listcomp$tuple_unpack_2__element_1 = tmp_assign_source_100;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_101;
            PyObject *tmp_unpack_25;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_25 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_101 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_25, 1, 2);
            if (tmp_assign_source_101 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 377;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_27;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_2;
                tmp_listcomp$tuple_unpack_2__element_2 = tmp_assign_source_101;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_9;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_iterator_name_9 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_9, 2);
            if (tmp_result == false) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 377;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_27;
            }
        }
        goto try_end_20;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_lineno_22 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_22 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_26;
        // End of try:
        try_end_20:;
        goto try_end_21;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_lineno_23 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_23 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_23;
        exception_lineno = exception_keeper_lineno_23;

        goto try_except_handler_25;
        // End of try:
        try_end_21:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        {
            PyObject *tmp_assign_source_102;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_1);
            tmp_assign_source_102 = tmp_listcomp$tuple_unpack_2__element_1;
            {
                PyObject *old = outline_1_var_c;
                outline_1_var_c = tmp_assign_source_102;
                Py_INCREF(outline_1_var_c);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_103;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_2);
            tmp_assign_source_103 = tmp_listcomp$tuple_unpack_2__element_2;
            {
                PyObject *old = outline_1_var_u;
                outline_1_var_u = tmp_assign_source_103;
                Py_INCREF(outline_1_var_u);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_c);
            tmp_append_value_2 = outline_1_var_c;
            tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 377;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_25;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 377;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
        goto loop_start_7;
        loop_end_7:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_95 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_95);
        goto try_return_handler_25;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto try_return_handler_24;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_lineno_24 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_24 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_24;
        exception_lineno = exception_keeper_lineno_24;

        goto try_except_handler_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_XDECREF(outline_1_var_c);
        outline_1_var_c = NULL;
        Py_XDECREF(outline_1_var_u);
        outline_1_var_u = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_lineno_25 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_25 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_1_var_c);
        outline_1_var_c = NULL;
        Py_XDECREF(outline_1_var_u);
        outline_1_var_u = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_25;
        exception_lineno = exception_keeper_lineno_25;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 377;
        goto try_except_handler_23;
        outline_result_2:;
        {
            PyObject *old = var_cs;
            var_cs = tmp_assign_source_95;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_iter_arg_16;
        PyObject *tmp_called_value_24;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_called_value_24 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$__fgmres(tstate);
        if (unlikely(tmp_called_value_24 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[93]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        if (var_matvec == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[19]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }

        tmp_kw_call_arg_value_0_2 = var_matvec;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[85]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 381;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }

        tmp_truediv_expr_left_2 = var_r;
        CHECK_OBJECT(var_beta);
        tmp_truediv_expr_right_2 = var_beta;
        tmp_kw_call_arg_value_1_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 381;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        CHECK_OBJECT(var_ml);
        tmp_kw_call_arg_value_2_1 = var_ml;
        if (var_psolve == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[94]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 383;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }

        tmp_kw_call_dict_value_0_2 = var_psolve;
        tmp_called_value_25 = LOOKUP_BUILTIN(mod_consts[88]);
        assert(tmp_called_value_25 != NULL);
        CHECK_OBJECT(par_atol);
        tmp_args_element_value_39 = par_atol;
        if (par_tol == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[89]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }

        tmp_mult_expr_left_3 = par_tol;
        if (var_b_norm == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[90]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }

        tmp_mult_expr_right_3 = var_b_norm;
        tmp_args_element_value_40 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_args_element_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 384;
        {
            PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40};
            tmp_truediv_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_25, call_args);
        }

        Py_DECREF(tmp_args_element_value_40);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        CHECK_OBJECT(var_beta);
        tmp_truediv_expr_right_3 = var_beta;
        tmp_kw_call_dict_value_1_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        if (tmp_kw_call_dict_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        CHECK_OBJECT(var_cs);
        tmp_kw_call_dict_value_2_1 = var_cs;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 380;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1};
            tmp_iter_arg_16 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_24, args, kw_values, mod_consts[95]);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_1_2);
        if (tmp_iter_arg_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        tmp_assign_source_104 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_16);
        Py_DECREF(tmp_iter_arg_16);
        if (tmp_assign_source_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__source_iter;
            tmp_tuple_unpack_8__source_iter = tmp_assign_source_104;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_unpack_26;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_26 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_105 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_26, 0, 7);
        if (tmp_assign_source_105 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_1;
            tmp_tuple_unpack_8__element_1 = tmp_assign_source_105;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_unpack_27;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_27 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_106 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_27, 1, 7);
        if (tmp_assign_source_106 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_2;
            tmp_tuple_unpack_8__element_2 = tmp_assign_source_106;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_unpack_28;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_28 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_107 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_28, 2, 7);
        if (tmp_assign_source_107 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_3;
            tmp_tuple_unpack_8__element_3 = tmp_assign_source_107;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_unpack_29;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_29 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_108 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_29, 3, 7);
        if (tmp_assign_source_108 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_4;
            tmp_tuple_unpack_8__element_4 = tmp_assign_source_108;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_unpack_30;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_30 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_109 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_30, 4, 7);
        if (tmp_assign_source_109 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_5;
            tmp_tuple_unpack_8__element_5 = tmp_assign_source_109;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_unpack_31;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_31 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_110 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_31, 5, 7);
        if (tmp_assign_source_110 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_6;
            tmp_tuple_unpack_8__element_6 = tmp_assign_source_110;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_unpack_32;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_32 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_111 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_32, 6, 7);
        if (tmp_assign_source_111 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_7;
            tmp_tuple_unpack_8__element_7 = tmp_assign_source_111;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_10;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_iterator_name_10 = tmp_tuple_unpack_8__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_10, 7);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_lineno_26 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_26 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
    Py_DECREF(tmp_tuple_unpack_8__source_iter);
    tmp_tuple_unpack_8__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_26;
    exception_lineno = exception_keeper_lineno_26;

    goto try_except_handler_29;
    // End of try:
    try_end_22:;
    goto try_end_23;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_lineno_27 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_27 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_8__element_1);
    tmp_tuple_unpack_8__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_2);
    tmp_tuple_unpack_8__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_3);
    tmp_tuple_unpack_8__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_4);
    tmp_tuple_unpack_8__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_5);
    tmp_tuple_unpack_8__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_6);
    tmp_tuple_unpack_8__element_6 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_7);
    tmp_tuple_unpack_8__element_7 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_27;
    exception_lineno = exception_keeper_lineno_27;

    goto try_except_handler_28;
    // End of try:
    try_end_23:;
    CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
    Py_DECREF(tmp_tuple_unpack_8__source_iter);
    tmp_tuple_unpack_8__source_iter = NULL;
    {
        PyObject *tmp_assign_source_112;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_1);
        tmp_assign_source_112 = tmp_tuple_unpack_8__element_1;
        {
            PyObject *old = var_Q;
            var_Q = tmp_assign_source_112;
            Py_INCREF(var_Q);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_8__element_1);
    tmp_tuple_unpack_8__element_1 = NULL;

    {
        PyObject *tmp_assign_source_113;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_2);
        tmp_assign_source_113 = tmp_tuple_unpack_8__element_2;
        {
            PyObject *old = var_R;
            var_R = tmp_assign_source_113;
            Py_INCREF(var_R);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_8__element_2);
    tmp_tuple_unpack_8__element_2 = NULL;

    {
        PyObject *tmp_assign_source_114;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_3);
        tmp_assign_source_114 = tmp_tuple_unpack_8__element_3;
        {
            PyObject *old = var_B;
            var_B = tmp_assign_source_114;
            Py_INCREF(var_B);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_8__element_3);
    tmp_tuple_unpack_8__element_3 = NULL;

    {
        PyObject *tmp_assign_source_115;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_4);
        tmp_assign_source_115 = tmp_tuple_unpack_8__element_4;
        {
            PyObject *old = var_vs;
            var_vs = tmp_assign_source_115;
            Py_INCREF(var_vs);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_8__element_4);
    tmp_tuple_unpack_8__element_4 = NULL;

    {
        PyObject *tmp_assign_source_116;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_5);
        tmp_assign_source_116 = tmp_tuple_unpack_8__element_5;
        {
            PyObject *old = var_zs;
            var_zs = tmp_assign_source_116;
            Py_INCREF(var_zs);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_8__element_5);
    tmp_tuple_unpack_8__element_5 = NULL;

    {
        PyObject *tmp_assign_source_117;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_6);
        tmp_assign_source_117 = tmp_tuple_unpack_8__element_6;
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_117;
            Py_INCREF(var_y);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_8__element_6);
    tmp_tuple_unpack_8__element_6 = NULL;

    {
        PyObject *tmp_assign_source_118;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_7);
        tmp_assign_source_118 = tmp_tuple_unpack_8__element_7;
        {
            PyObject *old = var_pres;
            var_pres = tmp_assign_source_118;
            Py_INCREF(var_pres);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_8__element_7);
    tmp_tuple_unpack_8__element_7 = NULL;

    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_imult_expr_left_1;
        PyObject *tmp_imult_expr_right_1;
        CHECK_OBJECT(var_y);
        tmp_imult_expr_left_1 = var_y;
        CHECK_OBJECT(var_beta);
        tmp_imult_expr_right_1 = var_beta;
        tmp_result = INPLACE_OPERATION_MULT_OBJECT_OBJECT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 386;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }
        tmp_assign_source_119 = tmp_imult_expr_left_1;
        var_y = tmp_assign_source_119;

    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_lineno_28 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_28 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_28);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk, exception_keeper_lineno_28);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_28, exception_tb);
        } else if (exception_keeper_lineno_28 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk, exception_keeper_lineno_28);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_28, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_28);
    // Tried code:
    {
        bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        tmp_cmp_expr_left_11 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_11 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_LinAlgError(tstate);
        if (unlikely(tmp_cmp_expr_right_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[52]);
        }

        if (tmp_cmp_expr_right_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 387;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 387;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
        tmp_condition_result_15 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    goto try_break_handler_31;
    goto branch_end_15;
    branch_no_15:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 379;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame)) {
            frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
    branch_end_15:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_lineno_29 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_29 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_29;
    exception_lineno = exception_keeper_lineno_29;

    goto try_except_handler_23;
    // try break handler code:
    try_break_handler_31:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto loop_end_6;
    // End of try:
    // End of try:
    try_end_24:;
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_15;
        CHECK_OBJECT(var_zs);
        tmp_expression_value_26 = var_zs;
        tmp_subscript_value_14 = const_int_0;
        tmp_mult_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_14, 0);
        if (tmp_mult_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 412;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_y);
        tmp_expression_value_27 = var_y;
        tmp_subscript_value_15 = const_int_0;
        tmp_mult_expr_right_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_27, tmp_subscript_value_15, 0);
        if (tmp_mult_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_4);

            exception_lineno = 412;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_120 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_left_4);
        Py_DECREF(tmp_mult_expr_right_4);
        if (tmp_assign_source_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 412;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_ux;
            var_ux = tmp_assign_source_120;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_iter_arg_17;
        PyObject *tmp_called_value_26;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_17;
        tmp_called_value_26 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(var_zs);
        tmp_expression_value_28 = var_zs;
        tmp_subscript_value_16 = mod_consts[96];
        tmp_args_element_value_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_16);
        if (tmp_args_element_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 413;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_y);
        tmp_expression_value_29 = var_y;
        tmp_subscript_value_17 = mod_consts[96];
        tmp_args_element_value_42 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_17);
        if (tmp_args_element_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_args_element_value_41);

            exception_lineno = 413;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 413;
        {
            PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42};
            tmp_iter_arg_17 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_26, call_args);
        }

        Py_DECREF(tmp_args_element_value_41);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_iter_arg_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 413;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_121 = MAKE_ITERATOR(tstate, tmp_iter_arg_17);
        Py_DECREF(tmp_iter_arg_17);
        if (tmp_assign_source_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 413;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = tmp_for_loop_5__for_iterator;
            tmp_for_loop_5__for_iterator = tmp_assign_source_121;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_8:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_122;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_7 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_122 = ITERATOR_NEXT(tmp_next_source_7);
        if (tmp_assign_source_122 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_8;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 413;
                goto try_except_handler_32;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_122;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_iter_arg_18;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_iter_arg_18 = tmp_for_loop_5__iter_value;
        tmp_assign_source_123 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_18);
        if (tmp_assign_source_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 413;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        {
            PyObject *old = tmp_tuple_unpack_9__source_iter;
            tmp_tuple_unpack_9__source_iter = tmp_assign_source_123;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_unpack_33;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_unpack_33 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_124 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_33, 0, 2);
        if (tmp_assign_source_124 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 413;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        {
            PyObject *old = tmp_tuple_unpack_9__element_1;
            tmp_tuple_unpack_9__element_1 = tmp_assign_source_124;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_unpack_34;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_unpack_34 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_125 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_34, 1, 2);
        if (tmp_assign_source_125 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 413;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        {
            PyObject *old = tmp_tuple_unpack_9__element_2;
            tmp_tuple_unpack_9__element_2 = tmp_assign_source_125;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_11;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_iterator_name_11 = tmp_tuple_unpack_9__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_11, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 413;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_lineno_30 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_30 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
    Py_DECREF(tmp_tuple_unpack_9__source_iter);
    tmp_tuple_unpack_9__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_30;
    exception_lineno = exception_keeper_lineno_30;

    goto try_except_handler_33;
    // End of try:
    try_end_25:;
    goto try_end_26;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_lineno_31 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_31 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_9__element_1);
    tmp_tuple_unpack_9__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_9__element_2);
    tmp_tuple_unpack_9__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_31;
    exception_lineno = exception_keeper_lineno_31;

    goto try_except_handler_32;
    // End of try:
    try_end_26:;
    CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
    Py_DECREF(tmp_tuple_unpack_9__source_iter);
    tmp_tuple_unpack_9__source_iter = NULL;
    {
        PyObject *tmp_assign_source_126;
        CHECK_OBJECT(tmp_tuple_unpack_9__element_1);
        tmp_assign_source_126 = tmp_tuple_unpack_9__element_1;
        {
            PyObject *old = var_z;
            var_z = tmp_assign_source_126;
            Py_INCREF(var_z);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_9__element_1);
    tmp_tuple_unpack_9__element_1 = NULL;

    {
        PyObject *tmp_assign_source_127;
        CHECK_OBJECT(tmp_tuple_unpack_9__element_2);
        tmp_assign_source_127 = tmp_tuple_unpack_9__element_2;
        {
            PyObject *old = var_yc;
            var_yc = tmp_assign_source_127;
            Py_INCREF(var_yc);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_9__element_2);
    tmp_tuple_unpack_9__element_2 = NULL;

    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_args_element_value_46;
        if (var_axpy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 414;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }

        tmp_called_value_27 = var_axpy;
        CHECK_OBJECT(var_z);
        tmp_args_element_value_43 = var_z;
        if (var_ux == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[97]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 414;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }

        tmp_args_element_value_44 = var_ux;
        if (var_ux == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[97]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 414;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }

        tmp_expression_value_31 = var_ux;
        tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[27]);
        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 414;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        tmp_subscript_value_18 = const_int_0;
        tmp_args_element_value_45 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_30, tmp_subscript_value_18, 0);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_args_element_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 414;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        CHECK_OBJECT(var_yc);
        tmp_args_element_value_46 = var_yc;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 414;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46};
            tmp_assign_source_128 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_27, call_args);
        }

        Py_DECREF(tmp_args_element_value_45);
        if (tmp_assign_source_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 414;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        {
            PyObject *old = var_ux;
            var_ux = tmp_assign_source_128;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 413;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_32;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_27;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_lineno_32 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_32 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_32;
    exception_lineno = exception_keeper_lineno_32;

    goto try_except_handler_23;
    // End of try:
    try_end_27:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_47;
        CHECK_OBJECT(var_B);
        tmp_called_instance_3 = var_B;
        CHECK_OBJECT(var_y);
        tmp_args_element_value_47 = var_y;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 415;
        tmp_assign_source_129 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[23], tmp_args_element_value_47);
        if (tmp_assign_source_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_by;
            var_by = tmp_assign_source_129;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_iter_arg_19;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        tmp_called_value_28 = (PyObject *)&PyZip_Type;
        if (par_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_args_element_value_48 = par_CU;
        CHECK_OBJECT(var_by);
        tmp_args_element_value_49 = var_by;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 416;
        {
            PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49};
            tmp_iter_arg_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_28, call_args);
        }

        if (tmp_iter_arg_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_130 = MAKE_ITERATOR(tstate, tmp_iter_arg_19);
        Py_DECREF(tmp_iter_arg_19);
        if (tmp_assign_source_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = tmp_for_loop_6__for_iterator;
            tmp_for_loop_6__for_iterator = tmp_assign_source_130;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_9:;
    {
        PyObject *tmp_next_source_8;
        PyObject *tmp_assign_source_131;
        CHECK_OBJECT(tmp_for_loop_6__for_iterator);
        tmp_next_source_8 = tmp_for_loop_6__for_iterator;
        tmp_assign_source_131 = ITERATOR_NEXT(tmp_next_source_8);
        if (tmp_assign_source_131 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_9;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 416;
                goto try_except_handler_35;
            }
        }

        {
            PyObject *old = tmp_for_loop_6__iter_value;
            tmp_for_loop_6__iter_value = tmp_assign_source_131;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_iter_arg_20;
        CHECK_OBJECT(tmp_for_loop_6__iter_value);
        tmp_iter_arg_20 = tmp_for_loop_6__iter_value;
        tmp_assign_source_132 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_20);
        if (tmp_assign_source_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__source_iter;
            tmp_tuple_unpack_10__source_iter = tmp_assign_source_132;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_unpack_35;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_unpack_35 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_133 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_35, 0, 2);
        if (tmp_assign_source_133 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_37;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__element_1;
            tmp_tuple_unpack_10__element_1 = tmp_assign_source_133;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_unpack_36;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_unpack_36 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_134 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_36, 1, 2);
        if (tmp_assign_source_134 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_37;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__element_2;
            tmp_tuple_unpack_10__element_2 = tmp_assign_source_134;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_12;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_iterator_name_12 = tmp_tuple_unpack_10__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_12, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_37;
        }
    }
    goto try_end_28;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_lineno_33 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_33 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
    Py_DECREF(tmp_tuple_unpack_10__source_iter);
    tmp_tuple_unpack_10__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_33;
    exception_lineno = exception_keeper_lineno_33;

    goto try_except_handler_36;
    // End of try:
    try_end_28:;
    goto try_end_29;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_lineno_34 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_34 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_10__element_1);
    tmp_tuple_unpack_10__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_10__element_2);
    tmp_tuple_unpack_10__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_34;
    exception_lineno = exception_keeper_lineno_34;

    goto try_except_handler_35;
    // End of try:
    try_end_29:;
    CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
    Py_DECREF(tmp_tuple_unpack_10__source_iter);
    tmp_tuple_unpack_10__source_iter = NULL;
    {
        PyObject *tmp_assign_source_135;
        CHECK_OBJECT(tmp_tuple_unpack_10__element_1);
        tmp_assign_source_135 = tmp_tuple_unpack_10__element_1;
        {
            PyObject *old = var_cu;
            var_cu = tmp_assign_source_135;
            Py_INCREF(var_cu);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_10__element_1);
    tmp_tuple_unpack_10__element_1 = NULL;

    {
        PyObject *tmp_assign_source_136;
        CHECK_OBJECT(tmp_tuple_unpack_10__element_2);
        tmp_assign_source_136 = tmp_tuple_unpack_10__element_2;
        {
            PyObject *old = var_byc;
            var_byc = tmp_assign_source_136;
            Py_INCREF(var_byc);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_10__element_2);
    tmp_tuple_unpack_10__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_iter_arg_21;
        CHECK_OBJECT(var_cu);
        tmp_iter_arg_21 = var_cu;
        tmp_assign_source_137 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_21);
        if (tmp_assign_source_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_38;
        }
        {
            PyObject *old = tmp_tuple_unpack_11__source_iter;
            tmp_tuple_unpack_11__source_iter = tmp_assign_source_137;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_unpack_37;
        CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
        tmp_unpack_37 = tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_138 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_37, 0, 2);
        if (tmp_assign_source_138 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        {
            PyObject *old = tmp_tuple_unpack_11__element_1;
            tmp_tuple_unpack_11__element_1 = tmp_assign_source_138;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_unpack_38;
        CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
        tmp_unpack_38 = tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_139 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_38, 1, 2);
        if (tmp_assign_source_139 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        {
            PyObject *old = tmp_tuple_unpack_11__element_2;
            tmp_tuple_unpack_11__element_2 = tmp_assign_source_139;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_13;
        CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
        tmp_iterator_name_13 = tmp_tuple_unpack_11__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_13, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
    }
    goto try_end_30;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_lineno_35 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_35 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
    Py_DECREF(tmp_tuple_unpack_11__source_iter);
    tmp_tuple_unpack_11__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_35;
    exception_lineno = exception_keeper_lineno_35;

    goto try_except_handler_38;
    // End of try:
    try_end_30:;
    goto try_end_31;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_lineno_36 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_36 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_11__element_1);
    tmp_tuple_unpack_11__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_11__element_2);
    tmp_tuple_unpack_11__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_36;
    exception_lineno = exception_keeper_lineno_36;

    goto try_except_handler_35;
    // End of try:
    try_end_31:;
    CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
    Py_DECREF(tmp_tuple_unpack_11__source_iter);
    tmp_tuple_unpack_11__source_iter = NULL;
    {
        PyObject *tmp_assign_source_140;
        CHECK_OBJECT(tmp_tuple_unpack_11__element_1);
        tmp_assign_source_140 = tmp_tuple_unpack_11__element_1;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_140;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_11__element_1);
    tmp_tuple_unpack_11__element_1 = NULL;

    {
        PyObject *tmp_assign_source_141;
        CHECK_OBJECT(tmp_tuple_unpack_11__element_2);
        tmp_assign_source_141 = tmp_tuple_unpack_11__element_2;
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_141;
            Py_INCREF(var_u);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_11__element_2);
    tmp_tuple_unpack_11__element_2 = NULL;

    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_operand_value_5;
        if (var_axpy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }

        tmp_called_value_29 = var_axpy;
        CHECK_OBJECT(var_u);
        tmp_args_element_value_50 = var_u;
        if (var_ux == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[97]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }

        tmp_args_element_value_51 = var_ux;
        if (var_ux == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[97]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }

        tmp_expression_value_33 = var_ux;
        tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[27]);
        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        tmp_subscript_value_19 = const_int_0;
        tmp_args_element_value_52 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_32, tmp_subscript_value_19, 0);
        Py_DECREF(tmp_expression_value_32);
        if (tmp_args_element_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        CHECK_OBJECT(var_byc);
        tmp_operand_value_5 = var_byc;
        tmp_args_element_value_53 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_5);
        if (tmp_args_element_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_args_element_value_52);

            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 418;
        {
            PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52, tmp_args_element_value_53};
            tmp_assign_source_142 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_29, call_args);
        }

        Py_DECREF(tmp_args_element_value_52);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_assign_source_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        {
            PyObject *old = var_ux;
            var_ux = tmp_assign_source_142;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 416;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_35;
    }
    goto loop_start_9;
    loop_end_9:;
    goto try_end_32;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_lineno_37 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_37 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_37;
    exception_lineno = exception_keeper_lineno_37;

    goto try_except_handler_23;
    // End of try:
    try_end_32:;
    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_55;
        CHECK_OBJECT(var_Q);
        tmp_expression_value_34 = var_Q;
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[23]);
        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 421;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_R);
        tmp_called_instance_4 = var_R;
        CHECK_OBJECT(var_y);
        tmp_args_element_value_55 = var_y;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 421;
        tmp_args_element_value_54 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[23], tmp_args_element_value_55);
        if (tmp_args_element_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 421;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 421;
        tmp_assign_source_143 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_54);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_assign_source_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 421;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_hy;
            var_hy = tmp_assign_source_143;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_21;
        CHECK_OBJECT(var_vs);
        tmp_expression_value_35 = var_vs;
        tmp_subscript_value_20 = const_int_0;
        tmp_mult_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_35, tmp_subscript_value_20, 0);
        if (tmp_mult_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 422;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_hy);
        tmp_expression_value_36 = var_hy;
        tmp_subscript_value_21 = const_int_0;
        tmp_mult_expr_right_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_36, tmp_subscript_value_21, 0);
        if (tmp_mult_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_5);

            exception_lineno = 422;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_144 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        Py_DECREF(tmp_mult_expr_left_5);
        Py_DECREF(tmp_mult_expr_right_5);
        if (tmp_assign_source_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 422;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_cx;
            var_cx = tmp_assign_source_144;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_iter_arg_22;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_23;
        tmp_called_value_31 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(var_vs);
        tmp_expression_value_37 = var_vs;
        tmp_subscript_value_22 = mod_consts[96];
        tmp_args_element_value_56 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_22);
        if (tmp_args_element_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 423;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_hy);
        tmp_expression_value_38 = var_hy;
        tmp_subscript_value_23 = mod_consts[96];
        tmp_args_element_value_57 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_23);
        if (tmp_args_element_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_args_element_value_56);

            exception_lineno = 423;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 423;
        {
            PyObject *call_args[] = {tmp_args_element_value_56, tmp_args_element_value_57};
            tmp_iter_arg_22 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_31, call_args);
        }

        Py_DECREF(tmp_args_element_value_56);
        Py_DECREF(tmp_args_element_value_57);
        if (tmp_iter_arg_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 423;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_145 = MAKE_ITERATOR(tstate, tmp_iter_arg_22);
        Py_DECREF(tmp_iter_arg_22);
        if (tmp_assign_source_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 423;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = tmp_for_loop_7__for_iterator;
            tmp_for_loop_7__for_iterator = tmp_assign_source_145;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_10:;
    {
        PyObject *tmp_next_source_9;
        PyObject *tmp_assign_source_146;
        CHECK_OBJECT(tmp_for_loop_7__for_iterator);
        tmp_next_source_9 = tmp_for_loop_7__for_iterator;
        tmp_assign_source_146 = ITERATOR_NEXT(tmp_next_source_9);
        if (tmp_assign_source_146 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_10;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 423;
                goto try_except_handler_40;
            }
        }

        {
            PyObject *old = tmp_for_loop_7__iter_value;
            tmp_for_loop_7__iter_value = tmp_assign_source_146;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_iter_arg_23;
        CHECK_OBJECT(tmp_for_loop_7__iter_value);
        tmp_iter_arg_23 = tmp_for_loop_7__iter_value;
        tmp_assign_source_147 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_23);
        if (tmp_assign_source_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 423;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_41;
        }
        {
            PyObject *old = tmp_tuple_unpack_12__source_iter;
            tmp_tuple_unpack_12__source_iter = tmp_assign_source_147;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_unpack_39;
        CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
        tmp_unpack_39 = tmp_tuple_unpack_12__source_iter;
        tmp_assign_source_148 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_39, 0, 2);
        if (tmp_assign_source_148 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 423;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_42;
        }
        {
            PyObject *old = tmp_tuple_unpack_12__element_1;
            tmp_tuple_unpack_12__element_1 = tmp_assign_source_148;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_unpack_40;
        CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
        tmp_unpack_40 = tmp_tuple_unpack_12__source_iter;
        tmp_assign_source_149 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_40, 1, 2);
        if (tmp_assign_source_149 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 423;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_42;
        }
        {
            PyObject *old = tmp_tuple_unpack_12__element_2;
            tmp_tuple_unpack_12__element_2 = tmp_assign_source_149;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_14;
        CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
        tmp_iterator_name_14 = tmp_tuple_unpack_12__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_14, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 423;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_42;
        }
    }
    goto try_end_33;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_lineno_38 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_38 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
    Py_DECREF(tmp_tuple_unpack_12__source_iter);
    tmp_tuple_unpack_12__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_38;
    exception_lineno = exception_keeper_lineno_38;

    goto try_except_handler_41;
    // End of try:
    try_end_33:;
    goto try_end_34;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_lineno_39 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_39 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_12__element_1);
    tmp_tuple_unpack_12__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_12__element_2);
    tmp_tuple_unpack_12__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_39;
    exception_lineno = exception_keeper_lineno_39;

    goto try_except_handler_40;
    // End of try:
    try_end_34:;
    CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
    Py_DECREF(tmp_tuple_unpack_12__source_iter);
    tmp_tuple_unpack_12__source_iter = NULL;
    {
        PyObject *tmp_assign_source_150;
        CHECK_OBJECT(tmp_tuple_unpack_12__element_1);
        tmp_assign_source_150 = tmp_tuple_unpack_12__element_1;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_150;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_12__element_1);
    tmp_tuple_unpack_12__element_1 = NULL;

    {
        PyObject *tmp_assign_source_151;
        CHECK_OBJECT(tmp_tuple_unpack_12__element_2);
        tmp_assign_source_151 = tmp_tuple_unpack_12__element_2;
        {
            PyObject *old = var_hyc;
            var_hyc = tmp_assign_source_151;
            Py_INCREF(var_hyc);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_12__element_2);
    tmp_tuple_unpack_12__element_2 = NULL;

    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_args_element_value_61;
        if (var_axpy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }

        tmp_called_value_32 = var_axpy;
        CHECK_OBJECT(var_v);
        tmp_args_element_value_58 = var_v;
        if (var_cx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[98]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }

        tmp_args_element_value_59 = var_cx;
        if (var_cx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[98]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }

        tmp_expression_value_40 = var_cx;
        tmp_expression_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[27]);
        if (tmp_expression_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        tmp_subscript_value_24 = const_int_0;
        tmp_args_element_value_60 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_39, tmp_subscript_value_24, 0);
        Py_DECREF(tmp_expression_value_39);
        if (tmp_args_element_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        CHECK_OBJECT(var_hyc);
        tmp_args_element_value_61 = var_hyc;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 424;
        {
            PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61};
            tmp_assign_source_152 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_32, call_args);
        }

        Py_DECREF(tmp_args_element_value_60);
        if (tmp_assign_source_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        {
            PyObject *old = var_cx;
            var_cx = tmp_assign_source_152;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 423;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_40;
    }
    goto loop_start_10;
    loop_end_10:;
    goto try_end_35;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_lineno_40 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_40 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_40;
    exception_lineno = exception_keeper_lineno_40;

    goto try_except_handler_23;
    // End of try:
    try_end_35:;
    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_62;
        tmp_truediv_expr_left_4 = const_int_pos_1;
        if (var_nrm2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[21]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 429;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }

        tmp_called_value_33 = var_nrm2;
        if (var_cx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[98]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 429;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }

        tmp_args_element_value_62 = var_cx;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 429;
        tmp_truediv_expr_right_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_62);
        if (tmp_truediv_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 429;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        tmp_assign_source_153 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_right_4);
        if (tmp_assign_source_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 429;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        {
            PyObject *old = var_alpha;
            var_alpha = tmp_assign_source_153;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_63;
        tmp_called_instance_5 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_np(tstate);
        if (unlikely(tmp_called_instance_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        CHECK_OBJECT(var_alpha);
        tmp_args_element_value_63 = var_alpha;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 430;
        tmp_operand_value_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[38], tmp_args_element_value_63);
        if (tmp_operand_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_raise_type_3;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 431;
        tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_FloatingPointError);
        assert(!(tmp_raise_type_3 == NULL));
        exception_state.exception_type = tmp_raise_type_3;
        exception_lineno = 431;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_43;
    }
    branch_no_16:;
    goto try_end_36;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_lineno_41 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_41 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_41);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk, exception_keeper_lineno_41);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_41, exception_tb);
        } else if (exception_keeper_lineno_41 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk, exception_keeper_lineno_41);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_41, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_41);
    // Tried code:
    {
        bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        tmp_cmp_expr_left_12 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_12 = mod_consts[99];
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 432;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_condition_result_17 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    goto try_continue_handler_44;
    goto branch_end_17;
    branch_no_17:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 428;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame)) {
            frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_44;
    branch_end_17:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_lineno_42 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_42 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    // Re-raise.
    exception_state = exception_keeper_name_42;
    exception_lineno = exception_keeper_lineno_42;

    goto try_except_handler_23;
    // try continue handler code:
    try_continue_handler_44:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    goto loop_start_6;
    // End of try:
    // End of try:
    try_end_36:;
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_args_element_value_65;
        if (var_scal == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[40]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 436;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_called_value_34 = var_scal;
        CHECK_OBJECT(var_alpha);
        tmp_args_element_value_64 = var_alpha;
        if (var_cx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[98]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 436;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_args_element_value_65 = var_cx;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 436;
        {
            PyObject *call_args[] = {tmp_args_element_value_64, tmp_args_element_value_65};
            tmp_assign_source_154 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_34, call_args);
        }

        if (tmp_assign_source_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 436;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_cx;
            var_cx = tmp_assign_source_154;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_args_element_value_67;
        if (var_scal == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[40]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_called_value_35 = var_scal;
        CHECK_OBJECT(var_alpha);
        tmp_args_element_value_66 = var_alpha;
        if (var_ux == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[97]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_args_element_value_67 = var_ux;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 437;
        {
            PyObject *call_args[] = {tmp_args_element_value_66, tmp_args_element_value_67};
            tmp_assign_source_155 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_35, call_args);
        }

        if (tmp_assign_source_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_ux;
            var_ux = tmp_assign_source_155;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        if (var_dot == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 440;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_called_value_36 = var_dot;
        CHECK_OBJECT(var_cx);
        tmp_args_element_value_68 = var_cx;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[85]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 440;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_args_element_value_69 = var_r;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 440;
        {
            PyObject *call_args[] = {tmp_args_element_value_68, tmp_args_element_value_69};
            tmp_assign_source_156 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_36, call_args);
        }

        if (tmp_assign_source_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 440;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_gamma;
            var_gamma = tmp_assign_source_156;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_operand_value_7;
        if (var_axpy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 441;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_called_value_37 = var_axpy;
        CHECK_OBJECT(var_cx);
        tmp_args_element_value_70 = var_cx;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[85]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 441;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_args_element_value_71 = var_r;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[85]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 441;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_expression_value_42 = var_r;
        tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[27]);
        if (tmp_expression_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 441;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_subscript_value_25 = const_int_0;
        tmp_args_element_value_72 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_41, tmp_subscript_value_25, 0);
        Py_DECREF(tmp_expression_value_41);
        if (tmp_args_element_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 441;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_gamma);
        tmp_operand_value_7 = var_gamma;
        tmp_args_element_value_73 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_7);
        if (tmp_args_element_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_args_element_value_72);

            exception_lineno = 441;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 441;
        {
            PyObject *call_args[] = {tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72, tmp_args_element_value_73};
            tmp_assign_source_157 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_37, call_args);
        }

        Py_DECREF(tmp_args_element_value_72);
        Py_DECREF(tmp_args_element_value_73);
        if (tmp_assign_source_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 441;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_157;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_args_element_value_77;
        if (var_axpy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_called_value_38 = var_axpy;
        CHECK_OBJECT(var_ux);
        tmp_args_element_value_74 = var_ux;
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[86]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_args_element_value_75 = var_x;
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[86]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_expression_value_44 = var_x;
        tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[27]);
        if (tmp_expression_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_subscript_value_26 = const_int_0;
        tmp_args_element_value_76 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_26, 0);
        Py_DECREF(tmp_expression_value_43);
        if (tmp_args_element_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_gamma);
        tmp_args_element_value_77 = var_gamma;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 442;
        {
            PyObject *call_args[] = {tmp_args_element_value_74, tmp_args_element_value_75, tmp_args_element_value_76, tmp_args_element_value_77};
            tmp_assign_source_158 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_38, call_args);
        }

        Py_DECREF(tmp_args_element_value_76);
        if (tmp_assign_source_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_158;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        CHECK_OBJECT(par_truncate);
        tmp_cmp_expr_left_13 = par_truncate;
        tmp_cmp_expr_right_13 = mod_consts[100];
        tmp_condition_result_18 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 445;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    loop_start_11:;
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_8;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        PyObject *tmp_len_arg_4;
        if (par_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_len_arg_4 = par_CU;
        tmp_cmp_expr_left_14 = BUILTIN_LEN(tstate, tmp_len_arg_4);
        if (tmp_cmp_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        if (par_k == NULL) {
            Py_DECREF(tmp_cmp_expr_left_14);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[92]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_cmp_expr_right_14 = par_k;
        tmp_and_left_value_2 = RICH_COMPARE_GE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        Py_DECREF(tmp_cmp_expr_left_14);
        if (tmp_and_left_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_and_left_value_2);

            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF(tmp_and_left_value_2);
        if (par_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_and_right_value_2 = par_CU;
        Py_INCREF(tmp_and_right_value_2);
        tmp_operand_value_8 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_operand_value_8 = tmp_and_left_value_2;
        and_end_2:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        Py_DECREF(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    goto loop_end_11;
    branch_no_19:;
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_delsubscr_subscript_1;
        if (par_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 447;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_delsubscr_target_1 = par_CU;
        tmp_delsubscr_subscript_1 = const_int_0;
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 447;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 446;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_23;
    }
    goto loop_start_11;
    loop_end_11:;
    goto branch_end_18;
    branch_no_18:;
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        CHECK_OBJECT(par_truncate);
        tmp_cmp_expr_left_15 = par_truncate;
        tmp_cmp_expr_right_15 = mod_consts[101];
        tmp_condition_result_20 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        nuitka_bool tmp_condition_result_21;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_len_arg_5;
        int tmp_truth_name_5;
        if (par_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_len_arg_5 = par_CU;
        tmp_cmp_expr_left_16 = BUILTIN_LEN(tstate, tmp_len_arg_5);
        if (tmp_cmp_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        if (par_k == NULL) {
            Py_DECREF(tmp_cmp_expr_left_16);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[92]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_cmp_expr_right_16 = par_k;
        tmp_and_left_value_3 = RICH_COMPARE_GE_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        Py_DECREF(tmp_cmp_expr_left_16);
        if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        if (par_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_truth_name_5 = CHECK_IF_TRUE(par_CU);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_and_right_value_3 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_condition_result_21 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_21 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_subscript_value_27;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_expression_value_48;
        tmp_called_value_39 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_solve(tstate);
        if (unlikely(tmp_called_value_39 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[102]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 451;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_R);
        tmp_expression_value_47 = var_R;
        tmp_subscript_value_27 = mod_consts[103];
        tmp_expression_value_46 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_27);
        if (tmp_expression_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 451;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_args_element_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[78]);
        Py_DECREF(tmp_expression_value_46);
        if (tmp_args_element_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 451;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_B);
        tmp_expression_value_48 = var_B;
        tmp_args_element_value_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[78]);
        if (tmp_args_element_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_args_element_value_78);

            exception_lineno = 451;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 451;
        {
            PyObject *call_args[] = {tmp_args_element_value_78, tmp_args_element_value_79};
            tmp_expression_value_45 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_39, call_args);
        }

        Py_DECREF(tmp_args_element_value_78);
        Py_DECREF(tmp_args_element_value_79);
        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 451;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_159 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[78]);
        Py_DECREF(tmp_expression_value_45);
        if (tmp_assign_source_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 451;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_D;
            var_D = tmp_assign_source_159;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_iter_arg_24;
        PyObject *tmp_called_value_40;
        PyObject *tmp_args_element_value_80;
        tmp_called_value_40 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$_svd(tstate);
        if (unlikely(tmp_called_value_40 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[104]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        CHECK_OBJECT(var_D);
        tmp_args_element_value_80 = var_D;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 452;
        tmp_iter_arg_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_80);
        if (tmp_iter_arg_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        tmp_assign_source_160 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_24);
        Py_DECREF(tmp_iter_arg_24);
        if (tmp_assign_source_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        {
            PyObject *old = tmp_tuple_unpack_13__source_iter;
            tmp_tuple_unpack_13__source_iter = tmp_assign_source_160;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_unpack_41;
        CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
        tmp_unpack_41 = tmp_tuple_unpack_13__source_iter;
        tmp_assign_source_161 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_41, 0, 3);
        if (tmp_assign_source_161 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
        {
            PyObject *old = tmp_tuple_unpack_13__element_1;
            tmp_tuple_unpack_13__element_1 = tmp_assign_source_161;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_unpack_42;
        CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
        tmp_unpack_42 = tmp_tuple_unpack_13__source_iter;
        tmp_assign_source_162 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_42, 1, 3);
        if (tmp_assign_source_162 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
        {
            PyObject *old = tmp_tuple_unpack_13__element_2;
            tmp_tuple_unpack_13__element_2 = tmp_assign_source_162;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_unpack_43;
        CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
        tmp_unpack_43 = tmp_tuple_unpack_13__source_iter;
        tmp_assign_source_163 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_43, 2, 3);
        if (tmp_assign_source_163 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
        {
            PyObject *old = tmp_tuple_unpack_13__element_3;
            tmp_tuple_unpack_13__element_3 = tmp_assign_source_163;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_15;
        CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
        tmp_iterator_name_15 = tmp_tuple_unpack_13__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_15, 3);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
    }
    goto try_end_37;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_lineno_43 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_43 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
    Py_DECREF(tmp_tuple_unpack_13__source_iter);
    tmp_tuple_unpack_13__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_43;
    exception_lineno = exception_keeper_lineno_43;

    goto try_except_handler_45;
    // End of try:
    try_end_37:;
    goto try_end_38;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_lineno_44 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_44 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_13__element_1);
    tmp_tuple_unpack_13__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_13__element_2);
    tmp_tuple_unpack_13__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_13__element_3);
    tmp_tuple_unpack_13__element_3 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_44;
    exception_lineno = exception_keeper_lineno_44;

    goto try_except_handler_23;
    // End of try:
    try_end_38:;
    CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
    Py_DECREF(tmp_tuple_unpack_13__source_iter);
    tmp_tuple_unpack_13__source_iter = NULL;
    {
        PyObject *tmp_assign_source_164;
        CHECK_OBJECT(tmp_tuple_unpack_13__element_1);
        tmp_assign_source_164 = tmp_tuple_unpack_13__element_1;
        {
            PyObject *old = var_W;
            var_W = tmp_assign_source_164;
            Py_INCREF(var_W);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_13__element_1);
    tmp_tuple_unpack_13__element_1 = NULL;

    {
        PyObject *tmp_assign_source_165;
        CHECK_OBJECT(tmp_tuple_unpack_13__element_2);
        tmp_assign_source_165 = tmp_tuple_unpack_13__element_2;
        {
            PyObject *old = var_sigma;
            var_sigma = tmp_assign_source_165;
            Py_INCREF(var_sigma);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_13__element_2);
    tmp_tuple_unpack_13__element_2 = NULL;

    {
        PyObject *tmp_assign_source_166;
        CHECK_OBJECT(tmp_tuple_unpack_13__element_3);
        tmp_assign_source_166 = tmp_tuple_unpack_13__element_3;
        {
            PyObject *old = var_V;
            var_V = tmp_assign_source_166;
            Py_INCREF(var_V);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_13__element_3);
    tmp_tuple_unpack_13__element_3 = NULL;

    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = MAKE_LIST_EMPTY(tstate, 0);
        {
            PyObject *old = var_new_CU;
            var_new_CU = tmp_assign_source_167;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_iter_arg_25;
        PyObject *tmp_called_value_41;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_subscript_value_28;
        PyObject *tmp_tuple_element_11;
        tmp_called_value_41 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(var_W);
        tmp_expression_value_50 = var_W;
        tmp_tuple_element_11 = mod_consts[46];
        tmp_subscript_value_28 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_stop_value_1;
            PyObject *tmp_sub_expr_left_4;
            PyObject *tmp_sub_expr_right_4;
            PyTuple_SET_ITEM0(tmp_subscript_value_28, 0, tmp_tuple_element_11);
            if (par_k == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[92]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 456;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }

            tmp_sub_expr_left_4 = par_k;
            tmp_sub_expr_right_4 = const_int_pos_1;
            tmp_stop_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
            if (tmp_stop_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 456;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_tuple_element_11 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
            Py_DECREF(tmp_stop_value_1);
            assert(!(tmp_tuple_element_11 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_28, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_subscript_value_28);
        goto try_except_handler_23;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_expression_value_49 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_28);
        Py_DECREF(tmp_subscript_value_28);
        if (tmp_expression_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_args_element_value_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[78]);
        Py_DECREF(tmp_expression_value_49);
        if (tmp_args_element_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 456;
        tmp_iter_arg_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_81);
        Py_DECREF(tmp_args_element_value_81);
        if (tmp_iter_arg_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_168 = MAKE_ITERATOR(tstate, tmp_iter_arg_25);
        Py_DECREF(tmp_iter_arg_25);
        if (tmp_assign_source_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = tmp_for_loop_8__for_iterator;
            tmp_for_loop_8__for_iterator = tmp_assign_source_168;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_12:;
    {
        PyObject *tmp_next_source_10;
        PyObject *tmp_assign_source_169;
        CHECK_OBJECT(tmp_for_loop_8__for_iterator);
        tmp_next_source_10 = tmp_for_loop_8__for_iterator;
        tmp_assign_source_169 = ITERATOR_NEXT(tmp_next_source_10);
        if (tmp_assign_source_169 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_12;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 456;
                goto try_except_handler_47;
            }
        }

        {
            PyObject *old = tmp_for_loop_8__iter_value;
            tmp_for_loop_8__iter_value = tmp_assign_source_169;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_iter_arg_26;
        CHECK_OBJECT(tmp_for_loop_8__iter_value);
        tmp_iter_arg_26 = tmp_for_loop_8__iter_value;
        tmp_assign_source_170 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_26);
        if (tmp_assign_source_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_48;
        }
        {
            PyObject *old = tmp_tuple_unpack_14__source_iter;
            tmp_tuple_unpack_14__source_iter = tmp_assign_source_170;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_unpack_44;
        CHECK_OBJECT(tmp_tuple_unpack_14__source_iter);
        tmp_unpack_44 = tmp_tuple_unpack_14__source_iter;
        tmp_assign_source_171 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_44, 0, 2);
        if (tmp_assign_source_171 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }
        {
            PyObject *old = tmp_tuple_unpack_14__element_1;
            tmp_tuple_unpack_14__element_1 = tmp_assign_source_171;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_unpack_45;
        CHECK_OBJECT(tmp_tuple_unpack_14__source_iter);
        tmp_unpack_45 = tmp_tuple_unpack_14__source_iter;
        tmp_assign_source_172 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_45, 1, 2);
        if (tmp_assign_source_172 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }
        {
            PyObject *old = tmp_tuple_unpack_14__element_2;
            tmp_tuple_unpack_14__element_2 = tmp_assign_source_172;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_16;
        CHECK_OBJECT(tmp_tuple_unpack_14__source_iter);
        tmp_iterator_name_16 = tmp_tuple_unpack_14__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_16, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }
    }
    goto try_end_39;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_lineno_45 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_45 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_14__source_iter);
    Py_DECREF(tmp_tuple_unpack_14__source_iter);
    tmp_tuple_unpack_14__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_45;
    exception_lineno = exception_keeper_lineno_45;

    goto try_except_handler_48;
    // End of try:
    try_end_39:;
    goto try_end_40;
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_lineno_46 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_46 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_14__element_1);
    tmp_tuple_unpack_14__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_14__element_2);
    tmp_tuple_unpack_14__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_46;
    exception_lineno = exception_keeper_lineno_46;

    goto try_except_handler_47;
    // End of try:
    try_end_40:;
    CHECK_OBJECT(tmp_tuple_unpack_14__source_iter);
    Py_DECREF(tmp_tuple_unpack_14__source_iter);
    tmp_tuple_unpack_14__source_iter = NULL;
    {
        PyObject *tmp_assign_source_173;
        CHECK_OBJECT(tmp_tuple_unpack_14__element_1);
        tmp_assign_source_173 = tmp_tuple_unpack_14__element_1;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_173;
            Py_INCREF(var_j);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_14__element_1);
    tmp_tuple_unpack_14__element_1 = NULL;

    {
        PyObject *tmp_assign_source_174;
        CHECK_OBJECT(tmp_tuple_unpack_14__element_2);
        tmp_assign_source_174 = tmp_tuple_unpack_14__element_2;
        {
            PyObject *old = var_w;
            var_w = tmp_assign_source_174;
            Py_INCREF(var_w);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_14__element_2);
    tmp_tuple_unpack_14__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_iter_arg_27;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_subscript_value_29;
        if (par_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_50;
        }

        tmp_expression_value_51 = par_CU;
        tmp_subscript_value_29 = const_int_0;
        tmp_iter_arg_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_51, tmp_subscript_value_29, 0);
        if (tmp_iter_arg_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_50;
        }
        tmp_assign_source_175 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_27);
        Py_DECREF(tmp_iter_arg_27);
        if (tmp_assign_source_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_50;
        }
        {
            PyObject *old = tmp_tuple_unpack_15__source_iter;
            tmp_tuple_unpack_15__source_iter = tmp_assign_source_175;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_unpack_46;
        CHECK_OBJECT(tmp_tuple_unpack_15__source_iter);
        tmp_unpack_46 = tmp_tuple_unpack_15__source_iter;
        tmp_assign_source_176 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_46, 0, 2);
        if (tmp_assign_source_176 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_51;
        }
        {
            PyObject *old = tmp_tuple_unpack_15__element_1;
            tmp_tuple_unpack_15__element_1 = tmp_assign_source_176;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_unpack_47;
        CHECK_OBJECT(tmp_tuple_unpack_15__source_iter);
        tmp_unpack_47 = tmp_tuple_unpack_15__source_iter;
        tmp_assign_source_177 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_47, 1, 2);
        if (tmp_assign_source_177 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_51;
        }
        {
            PyObject *old = tmp_tuple_unpack_15__element_2;
            tmp_tuple_unpack_15__element_2 = tmp_assign_source_177;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_17;
        CHECK_OBJECT(tmp_tuple_unpack_15__source_iter);
        tmp_iterator_name_17 = tmp_tuple_unpack_15__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_17, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_51;
        }
    }
    goto try_end_41;
    // Exception handler code:
    try_except_handler_51:;
    exception_keeper_lineno_47 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_47 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_15__source_iter);
    Py_DECREF(tmp_tuple_unpack_15__source_iter);
    tmp_tuple_unpack_15__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_47;
    exception_lineno = exception_keeper_lineno_47;

    goto try_except_handler_50;
    // End of try:
    try_end_41:;
    goto try_end_42;
    // Exception handler code:
    try_except_handler_50:;
    exception_keeper_lineno_48 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_48 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_15__element_1);
    tmp_tuple_unpack_15__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_15__element_2);
    tmp_tuple_unpack_15__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_48;
    exception_lineno = exception_keeper_lineno_48;

    goto try_except_handler_47;
    // End of try:
    try_end_42:;
    CHECK_OBJECT(tmp_tuple_unpack_15__source_iter);
    Py_DECREF(tmp_tuple_unpack_15__source_iter);
    tmp_tuple_unpack_15__source_iter = NULL;
    {
        PyObject *tmp_assign_source_178;
        CHECK_OBJECT(tmp_tuple_unpack_15__element_1);
        tmp_assign_source_178 = tmp_tuple_unpack_15__element_1;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_178;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_15__element_1);
    tmp_tuple_unpack_15__element_1 = NULL;

    {
        PyObject *tmp_assign_source_179;
        CHECK_OBJECT(tmp_tuple_unpack_15__element_2);
        tmp_assign_source_179 = tmp_tuple_unpack_15__element_2;
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_179;
            Py_INCREF(var_u);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_15__element_2);
    tmp_tuple_unpack_15__element_2 = NULL;

    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_subscript_value_30;
        CHECK_OBJECT(var_c);
        tmp_mult_expr_left_6 = var_c;
        CHECK_OBJECT(var_w);
        tmp_expression_value_52 = var_w;
        tmp_subscript_value_30 = const_int_0;
        tmp_mult_expr_right_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_52, tmp_subscript_value_30, 0);
        if (tmp_mult_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 458;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        tmp_assign_source_180 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        Py_DECREF(tmp_mult_expr_right_6);
        if (tmp_assign_source_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 458;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        {
            PyObject *old = var_c;
            assert(old != NULL);
            var_c = tmp_assign_source_180;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_subscript_value_31;
        CHECK_OBJECT(var_u);
        tmp_mult_expr_left_7 = var_u;
        CHECK_OBJECT(var_w);
        tmp_expression_value_53 = var_w;
        tmp_subscript_value_31 = const_int_0;
        tmp_mult_expr_right_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_53, tmp_subscript_value_31, 0);
        if (tmp_mult_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 459;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        tmp_assign_source_181 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        Py_DECREF(tmp_mult_expr_right_7);
        if (tmp_assign_source_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 459;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        {
            PyObject *old = var_u;
            assert(old != NULL);
            var_u = tmp_assign_source_181;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_iter_arg_28;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_subscript_value_32;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_33;
        tmp_called_value_42 = (PyObject *)&PyZip_Type;
        if (par_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 460;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }

        tmp_expression_value_54 = par_CU;
        tmp_subscript_value_32 = mod_consts[96];
        tmp_args_element_value_82 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_54, tmp_subscript_value_32);
        if (tmp_args_element_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 460;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        CHECK_OBJECT(var_w);
        tmp_expression_value_55 = var_w;
        tmp_subscript_value_33 = mod_consts[96];
        tmp_args_element_value_83 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_33);
        if (tmp_args_element_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_args_element_value_82);

            exception_lineno = 460;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 460;
        {
            PyObject *call_args[] = {tmp_args_element_value_82, tmp_args_element_value_83};
            tmp_iter_arg_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_42, call_args);
        }

        Py_DECREF(tmp_args_element_value_82);
        Py_DECREF(tmp_args_element_value_83);
        if (tmp_iter_arg_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 460;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        tmp_assign_source_182 = MAKE_ITERATOR(tstate, tmp_iter_arg_28);
        Py_DECREF(tmp_iter_arg_28);
        if (tmp_assign_source_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 460;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        {
            PyObject *old = tmp_for_loop_9__for_iterator;
            tmp_for_loop_9__for_iterator = tmp_assign_source_182;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_13:;
    {
        PyObject *tmp_next_source_11;
        PyObject *tmp_assign_source_183;
        CHECK_OBJECT(tmp_for_loop_9__for_iterator);
        tmp_next_source_11 = tmp_for_loop_9__for_iterator;
        tmp_assign_source_183 = ITERATOR_NEXT(tmp_next_source_11);
        if (tmp_assign_source_183 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_13;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 460;
                goto try_except_handler_52;
            }
        }

        {
            PyObject *old = tmp_for_loop_9__iter_value;
            tmp_for_loop_9__iter_value = tmp_assign_source_183;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_iter_arg_29;
        CHECK_OBJECT(tmp_for_loop_9__iter_value);
        tmp_iter_arg_29 = tmp_for_loop_9__iter_value;
        tmp_assign_source_184 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_29);
        if (tmp_assign_source_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 460;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_53;
        }
        {
            PyObject *old = tmp_tuple_unpack_16__source_iter;
            tmp_tuple_unpack_16__source_iter = tmp_assign_source_184;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_unpack_48;
        CHECK_OBJECT(tmp_tuple_unpack_16__source_iter);
        tmp_unpack_48 = tmp_tuple_unpack_16__source_iter;
        tmp_assign_source_185 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_48, 0, 2);
        if (tmp_assign_source_185 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 460;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_54;
        }
        {
            PyObject *old = tmp_tuple_unpack_16__element_1;
            tmp_tuple_unpack_16__element_1 = tmp_assign_source_185;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_unpack_49;
        CHECK_OBJECT(tmp_tuple_unpack_16__source_iter);
        tmp_unpack_49 = tmp_tuple_unpack_16__source_iter;
        tmp_assign_source_186 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_49, 1, 2);
        if (tmp_assign_source_186 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 460;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_54;
        }
        {
            PyObject *old = tmp_tuple_unpack_16__element_2;
            tmp_tuple_unpack_16__element_2 = tmp_assign_source_186;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_18;
        CHECK_OBJECT(tmp_tuple_unpack_16__source_iter);
        tmp_iterator_name_18 = tmp_tuple_unpack_16__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_18, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 460;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_54;
        }
    }
    goto try_end_43;
    // Exception handler code:
    try_except_handler_54:;
    exception_keeper_lineno_49 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_49 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_16__source_iter);
    Py_DECREF(tmp_tuple_unpack_16__source_iter);
    tmp_tuple_unpack_16__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_49;
    exception_lineno = exception_keeper_lineno_49;

    goto try_except_handler_53;
    // End of try:
    try_end_43:;
    goto try_end_44;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_lineno_50 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_50 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_16__element_1);
    tmp_tuple_unpack_16__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_16__element_2);
    tmp_tuple_unpack_16__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_50;
    exception_lineno = exception_keeper_lineno_50;

    goto try_except_handler_52;
    // End of try:
    try_end_44:;
    CHECK_OBJECT(tmp_tuple_unpack_16__source_iter);
    Py_DECREF(tmp_tuple_unpack_16__source_iter);
    tmp_tuple_unpack_16__source_iter = NULL;
    {
        PyObject *tmp_assign_source_187;
        CHECK_OBJECT(tmp_tuple_unpack_16__element_1);
        tmp_assign_source_187 = tmp_tuple_unpack_16__element_1;
        {
            PyObject *old = var_cup;
            var_cup = tmp_assign_source_187;
            Py_INCREF(var_cup);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_16__element_1);
    tmp_tuple_unpack_16__element_1 = NULL;

    {
        PyObject *tmp_assign_source_188;
        CHECK_OBJECT(tmp_tuple_unpack_16__element_2);
        tmp_assign_source_188 = tmp_tuple_unpack_16__element_2;
        {
            PyObject *old = var_wp;
            var_wp = tmp_assign_source_188;
            Py_INCREF(var_wp);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_16__element_2);
    tmp_tuple_unpack_16__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_iter_arg_30;
        CHECK_OBJECT(var_cup);
        tmp_iter_arg_30 = var_cup;
        tmp_assign_source_189 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_30);
        if (tmp_assign_source_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 461;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_55;
        }
        {
            PyObject *old = tmp_tuple_unpack_17__source_iter;
            tmp_tuple_unpack_17__source_iter = tmp_assign_source_189;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_unpack_50;
        CHECK_OBJECT(tmp_tuple_unpack_17__source_iter);
        tmp_unpack_50 = tmp_tuple_unpack_17__source_iter;
        tmp_assign_source_190 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_50, 0, 2);
        if (tmp_assign_source_190 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 461;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_56;
        }
        {
            PyObject *old = tmp_tuple_unpack_17__element_1;
            tmp_tuple_unpack_17__element_1 = tmp_assign_source_190;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_191;
        PyObject *tmp_unpack_51;
        CHECK_OBJECT(tmp_tuple_unpack_17__source_iter);
        tmp_unpack_51 = tmp_tuple_unpack_17__source_iter;
        tmp_assign_source_191 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_51, 1, 2);
        if (tmp_assign_source_191 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 461;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_56;
        }
        {
            PyObject *old = tmp_tuple_unpack_17__element_2;
            tmp_tuple_unpack_17__element_2 = tmp_assign_source_191;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_19;
        CHECK_OBJECT(tmp_tuple_unpack_17__source_iter);
        tmp_iterator_name_19 = tmp_tuple_unpack_17__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_19, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 461;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_56;
        }
    }
    goto try_end_45;
    // Exception handler code:
    try_except_handler_56:;
    exception_keeper_lineno_51 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_51 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_17__source_iter);
    Py_DECREF(tmp_tuple_unpack_17__source_iter);
    tmp_tuple_unpack_17__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_51;
    exception_lineno = exception_keeper_lineno_51;

    goto try_except_handler_55;
    // End of try:
    try_end_45:;
    goto try_end_46;
    // Exception handler code:
    try_except_handler_55:;
    exception_keeper_lineno_52 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_52 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_17__element_1);
    tmp_tuple_unpack_17__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_17__element_2);
    tmp_tuple_unpack_17__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_52;
    exception_lineno = exception_keeper_lineno_52;

    goto try_except_handler_52;
    // End of try:
    try_end_46:;
    CHECK_OBJECT(tmp_tuple_unpack_17__source_iter);
    Py_DECREF(tmp_tuple_unpack_17__source_iter);
    tmp_tuple_unpack_17__source_iter = NULL;
    {
        PyObject *tmp_assign_source_192;
        CHECK_OBJECT(tmp_tuple_unpack_17__element_1);
        tmp_assign_source_192 = tmp_tuple_unpack_17__element_1;
        {
            PyObject *old = var_cp;
            var_cp = tmp_assign_source_192;
            Py_INCREF(var_cp);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_17__element_1);
    tmp_tuple_unpack_17__element_1 = NULL;

    {
        PyObject *tmp_assign_source_193;
        CHECK_OBJECT(tmp_tuple_unpack_17__element_2);
        tmp_assign_source_193 = tmp_tuple_unpack_17__element_2;
        {
            PyObject *old = var_up;
            var_up = tmp_assign_source_193;
            Py_INCREF(var_up);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_17__element_2);
    tmp_tuple_unpack_17__element_2 = NULL;

    {
        PyObject *tmp_assign_source_194;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_34;
        PyObject *tmp_args_element_value_87;
        if (var_axpy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_52;
        }

        tmp_called_value_43 = var_axpy;
        CHECK_OBJECT(var_cp);
        tmp_args_element_value_84 = var_cp;
        if (var_c == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[105]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_52;
        }

        tmp_args_element_value_85 = var_c;
        if (var_c == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[105]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_52;
        }

        tmp_expression_value_57 = var_c;
        tmp_expression_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[27]);
        if (tmp_expression_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_52;
        }
        tmp_subscript_value_34 = const_int_0;
        tmp_args_element_value_86 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_56, tmp_subscript_value_34, 0);
        Py_DECREF(tmp_expression_value_56);
        if (tmp_args_element_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_52;
        }
        CHECK_OBJECT(var_wp);
        tmp_args_element_value_87 = var_wp;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 462;
        {
            PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85, tmp_args_element_value_86, tmp_args_element_value_87};
            tmp_assign_source_194 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_43, call_args);
        }

        Py_DECREF(tmp_args_element_value_86);
        if (tmp_assign_source_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_52;
        }
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_194;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_called_value_44;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_35;
        PyObject *tmp_args_element_value_91;
        if (var_axpy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 463;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_52;
        }

        tmp_called_value_44 = var_axpy;
        CHECK_OBJECT(var_up);
        tmp_args_element_value_88 = var_up;
        if (var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 463;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_52;
        }

        tmp_args_element_value_89 = var_u;
        if (var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 463;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_52;
        }

        tmp_expression_value_59 = var_u;
        tmp_expression_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[27]);
        if (tmp_expression_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 463;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_52;
        }
        tmp_subscript_value_35 = const_int_0;
        tmp_args_element_value_90 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_58, tmp_subscript_value_35, 0);
        Py_DECREF(tmp_expression_value_58);
        if (tmp_args_element_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 463;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_52;
        }
        CHECK_OBJECT(var_wp);
        tmp_args_element_value_91 = var_wp;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 463;
        {
            PyObject *call_args[] = {tmp_args_element_value_88, tmp_args_element_value_89, tmp_args_element_value_90, tmp_args_element_value_91};
            tmp_assign_source_195 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_44, call_args);
        }

        Py_DECREF(tmp_args_element_value_90);
        if (tmp_assign_source_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 463;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_52;
        }
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_195;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 460;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_52;
    }
    goto loop_start_13;
    loop_end_13:;
    goto try_end_47;
    // Exception handler code:
    try_except_handler_52:;
    exception_keeper_lineno_53 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_53 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_9__iter_value);
    tmp_for_loop_9__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_9__for_iterator);
    Py_DECREF(tmp_for_loop_9__for_iterator);
    tmp_for_loop_9__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_53;
    exception_lineno = exception_keeper_lineno_53;

    goto try_except_handler_47;
    // End of try:
    try_end_47:;
    Py_XDECREF(tmp_for_loop_9__iter_value);
    tmp_for_loop_9__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_9__for_iterator);
    Py_DECREF(tmp_for_loop_9__for_iterator);
    tmp_for_loop_9__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_iter_arg_31;
        if (var_new_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[106]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 468;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }

        tmp_iter_arg_31 = var_new_CU;
        tmp_assign_source_196 = MAKE_ITERATOR(tstate, tmp_iter_arg_31);
        if (tmp_assign_source_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 468;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        {
            PyObject *old = tmp_for_loop_10__for_iterator;
            tmp_for_loop_10__for_iterator = tmp_assign_source_196;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_14:;
    {
        PyObject *tmp_next_source_12;
        PyObject *tmp_assign_source_197;
        CHECK_OBJECT(tmp_for_loop_10__for_iterator);
        tmp_next_source_12 = tmp_for_loop_10__for_iterator;
        tmp_assign_source_197 = ITERATOR_NEXT_ITERATOR(tmp_next_source_12);
        if (tmp_assign_source_197 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_14;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 468;
                goto try_except_handler_57;
            }
        }

        {
            PyObject *old = tmp_for_loop_10__iter_value;
            tmp_for_loop_10__iter_value = tmp_assign_source_197;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_iter_arg_32;
        CHECK_OBJECT(tmp_for_loop_10__iter_value);
        tmp_iter_arg_32 = tmp_for_loop_10__iter_value;
        tmp_assign_source_198 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_32);
        if (tmp_assign_source_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 468;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_58;
        }
        {
            PyObject *old = tmp_tuple_unpack_18__source_iter;
            tmp_tuple_unpack_18__source_iter = tmp_assign_source_198;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_unpack_52;
        CHECK_OBJECT(tmp_tuple_unpack_18__source_iter);
        tmp_unpack_52 = tmp_tuple_unpack_18__source_iter;
        tmp_assign_source_199 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_52, 0, 2);
        if (tmp_assign_source_199 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 468;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_59;
        }
        {
            PyObject *old = tmp_tuple_unpack_18__element_1;
            tmp_tuple_unpack_18__element_1 = tmp_assign_source_199;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_unpack_53;
        CHECK_OBJECT(tmp_tuple_unpack_18__source_iter);
        tmp_unpack_53 = tmp_tuple_unpack_18__source_iter;
        tmp_assign_source_200 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_53, 1, 2);
        if (tmp_assign_source_200 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 468;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_59;
        }
        {
            PyObject *old = tmp_tuple_unpack_18__element_2;
            tmp_tuple_unpack_18__element_2 = tmp_assign_source_200;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_20;
        CHECK_OBJECT(tmp_tuple_unpack_18__source_iter);
        tmp_iterator_name_20 = tmp_tuple_unpack_18__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_20, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 468;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_59;
        }
    }
    goto try_end_48;
    // Exception handler code:
    try_except_handler_59:;
    exception_keeper_lineno_54 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_54 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_18__source_iter);
    Py_DECREF(tmp_tuple_unpack_18__source_iter);
    tmp_tuple_unpack_18__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_54;
    exception_lineno = exception_keeper_lineno_54;

    goto try_except_handler_58;
    // End of try:
    try_end_48:;
    goto try_end_49;
    // Exception handler code:
    try_except_handler_58:;
    exception_keeper_lineno_55 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_55 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_18__element_1);
    tmp_tuple_unpack_18__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_18__element_2);
    tmp_tuple_unpack_18__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_55;
    exception_lineno = exception_keeper_lineno_55;

    goto try_except_handler_57;
    // End of try:
    try_end_49:;
    CHECK_OBJECT(tmp_tuple_unpack_18__source_iter);
    Py_DECREF(tmp_tuple_unpack_18__source_iter);
    tmp_tuple_unpack_18__source_iter = NULL;
    {
        PyObject *tmp_assign_source_201;
        CHECK_OBJECT(tmp_tuple_unpack_18__element_1);
        tmp_assign_source_201 = tmp_tuple_unpack_18__element_1;
        {
            PyObject *old = var_cp;
            var_cp = tmp_assign_source_201;
            Py_INCREF(var_cp);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_18__element_1);
    tmp_tuple_unpack_18__element_1 = NULL;

    {
        PyObject *tmp_assign_source_202;
        CHECK_OBJECT(tmp_tuple_unpack_18__element_2);
        tmp_assign_source_202 = tmp_tuple_unpack_18__element_2;
        {
            PyObject *old = var_up;
            var_up = tmp_assign_source_202;
            Py_INCREF(var_up);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_18__element_2);
    tmp_tuple_unpack_18__element_2 = NULL;

    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_args_element_value_93;
        if (var_dot == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[23]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_57;
        }

        tmp_called_value_45 = var_dot;
        CHECK_OBJECT(var_cp);
        tmp_args_element_value_92 = var_cp;
        if (var_c == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[105]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_57;
        }

        tmp_args_element_value_93 = var_c;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 469;
        {
            PyObject *call_args[] = {tmp_args_element_value_92, tmp_args_element_value_93};
            tmp_assign_source_203 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_45, call_args);
        }

        if (tmp_assign_source_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_57;
        }
        {
            PyObject *old = var_alpha;
            var_alpha = tmp_assign_source_203;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_called_value_46;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_subscript_value_36;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_operand_value_9;
        if (var_axpy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_57;
        }

        tmp_called_value_46 = var_axpy;
        CHECK_OBJECT(var_cp);
        tmp_args_element_value_94 = var_cp;
        if (var_c == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[105]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_57;
        }

        tmp_args_element_value_95 = var_c;
        if (var_c == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[105]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_57;
        }

        tmp_expression_value_61 = var_c;
        tmp_expression_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[27]);
        if (tmp_expression_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_57;
        }
        tmp_subscript_value_36 = const_int_0;
        tmp_args_element_value_96 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_60, tmp_subscript_value_36, 0);
        Py_DECREF(tmp_expression_value_60);
        if (tmp_args_element_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_57;
        }
        CHECK_OBJECT(var_alpha);
        tmp_operand_value_9 = var_alpha;
        tmp_args_element_value_97 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_9);
        if (tmp_args_element_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_args_element_value_96);

            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_57;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 470;
        {
            PyObject *call_args[] = {tmp_args_element_value_94, tmp_args_element_value_95, tmp_args_element_value_96, tmp_args_element_value_97};
            tmp_assign_source_204 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_46, call_args);
        }

        Py_DECREF(tmp_args_element_value_96);
        Py_DECREF(tmp_args_element_value_97);
        if (tmp_assign_source_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_57;
        }
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_204;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_called_value_47;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_subscript_value_37;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_operand_value_10;
        if (var_axpy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 471;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_57;
        }

        tmp_called_value_47 = var_axpy;
        CHECK_OBJECT(var_up);
        tmp_args_element_value_98 = var_up;
        if (var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 471;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_57;
        }

        tmp_args_element_value_99 = var_u;
        if (var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 471;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_57;
        }

        tmp_expression_value_63 = var_u;
        tmp_expression_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[27]);
        if (tmp_expression_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 471;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_57;
        }
        tmp_subscript_value_37 = const_int_0;
        tmp_args_element_value_100 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_62, tmp_subscript_value_37, 0);
        Py_DECREF(tmp_expression_value_62);
        if (tmp_args_element_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 471;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_57;
        }
        CHECK_OBJECT(var_alpha);
        tmp_operand_value_10 = var_alpha;
        tmp_args_element_value_101 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_10);
        if (tmp_args_element_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_args_element_value_100);

            exception_lineno = 471;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_57;
        }
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 471;
        {
            PyObject *call_args[] = {tmp_args_element_value_98, tmp_args_element_value_99, tmp_args_element_value_100, tmp_args_element_value_101};
            tmp_assign_source_205 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_47, call_args);
        }

        Py_DECREF(tmp_args_element_value_100);
        Py_DECREF(tmp_args_element_value_101);
        if (tmp_assign_source_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 471;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_57;
        }
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_205;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 468;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_57;
    }
    goto loop_start_14;
    loop_end_14:;
    goto try_end_50;
    // Exception handler code:
    try_except_handler_57:;
    exception_keeper_lineno_56 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_56 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_10__iter_value);
    tmp_for_loop_10__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_10__for_iterator);
    Py_DECREF(tmp_for_loop_10__for_iterator);
    tmp_for_loop_10__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_56;
    exception_lineno = exception_keeper_lineno_56;

    goto try_except_handler_47;
    // End of try:
    try_end_50:;
    Py_XDECREF(tmp_for_loop_10__iter_value);
    tmp_for_loop_10__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_10__for_iterator);
    Py_DECREF(tmp_for_loop_10__for_iterator);
    tmp_for_loop_10__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_206;
        PyObject *tmp_called_value_48;
        PyObject *tmp_args_element_value_102;
        if (var_nrm2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[21]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }

        tmp_called_value_48 = var_nrm2;
        if (var_c == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[105]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }

        tmp_args_element_value_102 = var_c;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 472;
        tmp_assign_source_206 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_102);
        if (tmp_assign_source_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        {
            PyObject *old = var_alpha;
            var_alpha = tmp_assign_source_206;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_207;
        PyObject *tmp_called_value_49;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_truediv_expr_left_5;
        PyObject *tmp_truediv_expr_right_5;
        PyObject *tmp_args_element_value_104;
        if (var_scal == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[40]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 473;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }

        tmp_called_value_49 = var_scal;
        tmp_truediv_expr_left_5 = mod_consts[82];
        CHECK_OBJECT(var_alpha);
        tmp_truediv_expr_right_5 = var_alpha;
        tmp_args_element_value_103 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
        if (tmp_args_element_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 473;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        if (var_c == NULL) {
            Py_DECREF(tmp_args_element_value_103);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[105]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 473;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }

        tmp_args_element_value_104 = var_c;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 473;
        {
            PyObject *call_args[] = {tmp_args_element_value_103, tmp_args_element_value_104};
            tmp_assign_source_207 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_49, call_args);
        }

        Py_DECREF(tmp_args_element_value_103);
        if (tmp_assign_source_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 473;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_207;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_208;
        PyObject *tmp_called_value_50;
        PyObject *tmp_args_element_value_105;
        PyObject *tmp_truediv_expr_left_6;
        PyObject *tmp_truediv_expr_right_6;
        PyObject *tmp_args_element_value_106;
        if (var_scal == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[40]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 474;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }

        tmp_called_value_50 = var_scal;
        tmp_truediv_expr_left_6 = mod_consts[82];
        CHECK_OBJECT(var_alpha);
        tmp_truediv_expr_right_6 = var_alpha;
        tmp_args_element_value_105 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
        if (tmp_args_element_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 474;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        if (var_u == NULL) {
            Py_DECREF(tmp_args_element_value_105);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 474;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }

        tmp_args_element_value_106 = var_u;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 474;
        {
            PyObject *call_args[] = {tmp_args_element_value_105, tmp_args_element_value_106};
            tmp_assign_source_208 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_50, call_args);
        }

        Py_DECREF(tmp_args_element_value_105);
        if (tmp_assign_source_208 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 474;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_208;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_tuple_element_12;
        if (var_new_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[106]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }

        tmp_expression_value_64 = var_new_CU;
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[41]);
        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        CHECK_OBJECT(var_c);
        tmp_tuple_element_12 = var_c;
        tmp_args_element_value_107 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_107, 0, tmp_tuple_element_12);
        CHECK_OBJECT(var_u);
        tmp_tuple_element_12 = var_u;
        PyTuple_SET_ITEM0(tmp_args_element_value_107, 1, tmp_tuple_element_12);
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 476;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_51, tmp_args_element_value_107);
        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_element_value_107);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 456;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_47;
    }
    goto loop_start_12;
    loop_end_12:;
    goto try_end_51;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_lineno_57 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_57 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_8__iter_value);
    tmp_for_loop_8__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_8__for_iterator);
    Py_DECREF(tmp_for_loop_8__for_iterator);
    tmp_for_loop_8__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_57;
    exception_lineno = exception_keeper_lineno_57;

    goto try_except_handler_23;
    // End of try:
    try_end_51:;
    Py_XDECREF(tmp_for_loop_8__iter_value);
    tmp_for_loop_8__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_8__for_iterator);
    Py_DECREF(tmp_for_loop_8__for_iterator);
    tmp_for_loop_8__for_iterator = NULL;
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        if (var_new_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[106]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 477;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_ass_subvalue_4 = var_new_CU;
        if (par_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 477;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_ass_subscribed_4 = par_CU;
        tmp_ass_subscript_4 = mod_consts[46];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 477;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
    }
    branch_no_21:;
    branch_no_20:;
    branch_end_18:;
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_108;
        PyObject *tmp_tuple_element_13;
        if (par_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 480;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_expression_value_65 = par_CU;
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[41]);
        if (tmp_called_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 480;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_cx);
        tmp_tuple_element_13 = var_cx;
        tmp_args_element_value_108 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_108, 0, tmp_tuple_element_13);
        CHECK_OBJECT(var_ux);
        tmp_tuple_element_13 = var_ux;
        PyTuple_SET_ITEM0(tmp_args_element_value_108, 1, tmp_tuple_element_13);
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 480;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_108);
        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_element_value_108);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 480;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 356;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_23;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_52;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_lineno_58 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_58 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_58;
    exception_lineno = exception_keeper_lineno_58;

    goto frame_exception_exit_1;
    // End of try:
    try_end_52:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    {
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_tuple_element_14;
        if (par_CU == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 483;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_66 = par_CU;
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[41]);
        if (tmp_called_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 483;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_14 = Py_None;
        tmp_args_element_value_109 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_called_value_54;
            PyObject *tmp_expression_value_67;
            PyTuple_SET_ITEM0(tmp_args_element_value_109, 0, tmp_tuple_element_14);
            if (var_x == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[86]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 483;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }

            tmp_expression_value_67 = var_x;
            tmp_called_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[20]);
            if (tmp_called_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 483;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 483;
            tmp_tuple_element_14 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_54);
            Py_DECREF(tmp_called_value_54);
            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 483;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_109, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_53);
        Py_DECREF(tmp_args_element_value_109);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 483;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_53, tmp_args_element_value_109);
        Py_DECREF(tmp_called_value_53);
        Py_DECREF(tmp_args_element_value_109);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 483;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        nuitka_bool tmp_condition_result_22;
        int tmp_truth_name_6;
        CHECK_OBJECT(par_discard_C);
        tmp_truth_name_6 = CHECK_IF_TRUE(par_discard_C);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 484;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_22 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        // Tried code:
        {
            PyObject *tmp_assign_source_209;
            PyObject *tmp_iter_arg_33;
            if (par_CU == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[71]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 485;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_60;
            }

            tmp_iter_arg_33 = par_CU;
            tmp_assign_source_209 = MAKE_ITERATOR(tstate, tmp_iter_arg_33);
            if (tmp_assign_source_209 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 485;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_60;
            }
            assert(tmp_listcomp_3__$0 == NULL);
            tmp_listcomp_3__$0 = tmp_assign_source_209;
        }
        {
            PyObject *tmp_assign_source_210;
            tmp_assign_source_210 = MAKE_LIST_EMPTY(tstate, 0);
            assert(tmp_listcomp_3__contraction == NULL);
            tmp_listcomp_3__contraction = tmp_assign_source_210;
        }
        // Tried code:
        loop_start_15:;
        {
            PyObject *tmp_next_source_13;
            PyObject *tmp_assign_source_211;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_13 = tmp_listcomp_3__$0;
            tmp_assign_source_211 = ITERATOR_NEXT(tmp_next_source_13);
            if (tmp_assign_source_211 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_15;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 485;
                    goto try_except_handler_61;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_211;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_212;
            PyObject *tmp_iter_arg_34;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_iter_arg_34 = tmp_listcomp_3__iter_value_0;
            tmp_assign_source_212 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_34);
            if (tmp_assign_source_212 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 485;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_62;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_3__source_iter;
                tmp_listcomp$tuple_unpack_3__source_iter = tmp_assign_source_212;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_213;
            PyObject *tmp_unpack_54;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
            tmp_unpack_54 = tmp_listcomp$tuple_unpack_3__source_iter;
            tmp_assign_source_213 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_54, 0, 2);
            if (tmp_assign_source_213 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 485;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_63;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_3__element_1;
                tmp_listcomp$tuple_unpack_3__element_1 = tmp_assign_source_213;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_214;
            PyObject *tmp_unpack_55;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
            tmp_unpack_55 = tmp_listcomp$tuple_unpack_3__source_iter;
            tmp_assign_source_214 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_55, 1, 2);
            if (tmp_assign_source_214 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 485;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_63;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_3__element_2;
                tmp_listcomp$tuple_unpack_3__element_2 = tmp_assign_source_214;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_21;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
            tmp_iterator_name_21 = tmp_listcomp$tuple_unpack_3__source_iter;
            tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_21, 2);
            if (tmp_result == false) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 485;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_63;
            }
        }
        goto try_end_53;
        // Exception handler code:
        try_except_handler_63:;
        exception_keeper_lineno_59 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_59 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_3__source_iter);
        tmp_listcomp$tuple_unpack_3__source_iter = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_59;
        exception_lineno = exception_keeper_lineno_59;

        goto try_except_handler_62;
        // End of try:
        try_end_53:;
        goto try_end_54;
        // Exception handler code:
        try_except_handler_62:;
        exception_keeper_lineno_60 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_60 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_1);
        tmp_listcomp$tuple_unpack_3__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_2);
        tmp_listcomp$tuple_unpack_3__element_2 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_60;
        exception_lineno = exception_keeper_lineno_60;

        goto try_except_handler_61;
        // End of try:
        try_end_54:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_3__source_iter);
        tmp_listcomp$tuple_unpack_3__source_iter = NULL;
        {
            PyObject *tmp_assign_source_215;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__element_1);
            tmp_assign_source_215 = tmp_listcomp$tuple_unpack_3__element_1;
            {
                PyObject *old = outline_2_var_cz;
                outline_2_var_cz = tmp_assign_source_215;
                Py_INCREF(outline_2_var_cz);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_1);
        tmp_listcomp$tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_216;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__element_2);
            tmp_assign_source_216 = tmp_listcomp$tuple_unpack_3__element_2;
            {
                PyObject *old = outline_2_var_uz;
                outline_2_var_uz = tmp_assign_source_216;
                Py_INCREF(outline_2_var_uz);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_2);
        tmp_listcomp$tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_tuple_element_15;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            tmp_tuple_element_15 = Py_None;
            tmp_append_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
            PyTuple_SET_ITEM0(tmp_append_value_3, 0, tmp_tuple_element_15);
            CHECK_OBJECT(outline_2_var_uz);
            tmp_tuple_element_15 = outline_2_var_uz;
            PyTuple_SET_ITEM0(tmp_append_value_3, 1, tmp_tuple_element_15);
            tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 485;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_61;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 485;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_61;
        }
        goto loop_start_15;
        loop_end_15:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_ass_subvalue_5 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_ass_subvalue_5);
        goto try_return_handler_61;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_61:;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        goto try_return_handler_60;
        // Exception handler code:
        try_except_handler_61:;
        exception_keeper_lineno_61 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_61 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_61;
        exception_lineno = exception_keeper_lineno_61;

        goto try_except_handler_60;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_60:;
        Py_XDECREF(outline_2_var_cz);
        outline_2_var_cz = NULL;
        Py_XDECREF(outline_2_var_uz);
        outline_2_var_uz = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_60:;
        exception_keeper_lineno_62 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_62 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_2_var_cz);
        outline_2_var_cz = NULL;
        Py_XDECREF(outline_2_var_uz);
        outline_2_var_uz = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_62;
        exception_lineno = exception_keeper_lineno_62;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 485;
        goto frame_exception_exit_1;
        outline_result_3:;
        if (par_CU == NULL) {
            Py_DECREF(tmp_ass_subvalue_5);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[71]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 485;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_5 = par_CU;
        tmp_ass_subscript_5 = mod_consts[46];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 485;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_22:;
    {
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_called_value_55;
        PyObject *tmp_args_element_value_110;
        CHECK_OBJECT(var_postprocess);
        tmp_called_value_55 = var_postprocess;
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[86]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 487;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_110 = var_x;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame.f_lineno = 487;
        tmp_tuple_element_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_55, tmp_args_element_value_110);
        if (tmp_tuple_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 487;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_add_expr_left_2;
            PyObject *tmp_add_expr_right_2;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_16);
            if (var_j_outer == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[107]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 487;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }

            tmp_add_expr_left_2 = var_j_outer;
            tmp_add_expr_right_2 = const_int_pos_1;
            tmp_tuple_element_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
            if (tmp_tuple_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 487;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_16);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk,
        type_description_1,
        par_A,
        par_b,
        par_x0,
        par_tol,
        par_maxiter,
        par_M,
        par_callback,
        par_m,
        par_k,
        par_CU,
        par_discard_C,
        par_truncate,
        par_atol,
        var_x,
        var_postprocess,
        var_matvec,
        var_psolve,
        var_axpy,
        var_dot,
        var_scal,
        var_r,
        var_nrm2,
        var_b_norm,
        var_C,
        var_us,
        var_j,
        var_c,
        var_u,
        var_Q,
        var_R,
        var_P,
        var_cs,
        var_new_us,
        var_i,
        var_yc,
        var_j_outer,
        var_beta,
        var_beta_tol,
        var_ml,
        var_B,
        var_vs,
        var_zs,
        var_y,
        var_pres,
        var_ux,
        var_z,
        var_by,
        var_cu,
        var_byc,
        var_hy,
        var_cx,
        var_v,
        var_hyc,
        var_alpha,
        var_gamma,
        var_D,
        var_W,
        var_sigma,
        var_V,
        var_new_CU,
        var_w,
        var_cup,
        var_wp,
        var_cp,
        var_up
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk == cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk);
        cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk = NULL;
    }

    assertFrameObject(frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    par_A = NULL;
    Py_XDECREF(par_b);
    par_b = NULL;
    CHECK_OBJECT(par_M);
    Py_DECREF(par_M);
    par_M = NULL;
    Py_XDECREF(par_k);
    par_k = NULL;
    Py_XDECREF(par_CU);
    par_CU = NULL;
    CHECK_OBJECT(par_atol);
    Py_DECREF(par_atol);
    par_atol = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    CHECK_OBJECT(var_postprocess);
    Py_DECREF(var_postprocess);
    var_postprocess = NULL;
    Py_XDECREF(var_matvec);
    var_matvec = NULL;
    Py_XDECREF(var_psolve);
    var_psolve = NULL;
    Py_XDECREF(var_axpy);
    var_axpy = NULL;
    Py_XDECREF(var_dot);
    var_dot = NULL;
    Py_XDECREF(var_scal);
    var_scal = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_nrm2);
    var_nrm2 = NULL;
    Py_XDECREF(var_b_norm);
    var_b_norm = NULL;
    Py_XDECREF(var_us);
    var_us = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_u);
    var_u = NULL;
    Py_XDECREF(var_Q);
    var_Q = NULL;
    Py_XDECREF(var_R);
    var_R = NULL;
    Py_XDECREF(var_P);
    var_P = NULL;
    Py_XDECREF(var_cs);
    var_cs = NULL;
    Py_XDECREF(var_new_us);
    var_new_us = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_yc);
    var_yc = NULL;
    Py_XDECREF(var_j_outer);
    var_j_outer = NULL;
    Py_XDECREF(var_beta);
    var_beta = NULL;
    Py_XDECREF(var_beta_tol);
    var_beta_tol = NULL;
    Py_XDECREF(var_ml);
    var_ml = NULL;
    Py_XDECREF(var_B);
    var_B = NULL;
    Py_XDECREF(var_vs);
    var_vs = NULL;
    Py_XDECREF(var_zs);
    var_zs = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_pres);
    var_pres = NULL;
    Py_XDECREF(var_ux);
    var_ux = NULL;
    Py_XDECREF(var_z);
    var_z = NULL;
    Py_XDECREF(var_by);
    var_by = NULL;
    Py_XDECREF(var_cu);
    var_cu = NULL;
    Py_XDECREF(var_byc);
    var_byc = NULL;
    Py_XDECREF(var_hy);
    var_hy = NULL;
    Py_XDECREF(var_cx);
    var_cx = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_hyc);
    var_hyc = NULL;
    Py_XDECREF(var_alpha);
    var_alpha = NULL;
    Py_XDECREF(var_gamma);
    var_gamma = NULL;
    Py_XDECREF(var_D);
    var_D = NULL;
    Py_XDECREF(var_W);
    var_W = NULL;
    Py_XDECREF(var_sigma);
    var_sigma = NULL;
    Py_XDECREF(var_V);
    var_V = NULL;
    Py_XDECREF(var_new_CU);
    var_new_CU = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
    Py_XDECREF(var_cup);
    var_cup = NULL;
    Py_XDECREF(var_wp);
    var_wp = NULL;
    Py_XDECREF(var_cp);
    var_cp = NULL;
    Py_XDECREF(var_up);
    var_up = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_63 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_63 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(par_A);
    par_A = NULL;
    Py_XDECREF(par_b);
    par_b = NULL;
    Py_XDECREF(par_M);
    par_M = NULL;
    Py_XDECREF(par_k);
    par_k = NULL;
    Py_XDECREF(par_CU);
    par_CU = NULL;
    CHECK_OBJECT(par_atol);
    Py_DECREF(par_atol);
    par_atol = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_postprocess);
    var_postprocess = NULL;
    Py_XDECREF(var_matvec);
    var_matvec = NULL;
    Py_XDECREF(var_psolve);
    var_psolve = NULL;
    Py_XDECREF(var_axpy);
    var_axpy = NULL;
    Py_XDECREF(var_dot);
    var_dot = NULL;
    Py_XDECREF(var_scal);
    var_scal = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_nrm2);
    var_nrm2 = NULL;
    Py_XDECREF(var_b_norm);
    var_b_norm = NULL;
    Py_XDECREF(var_C);
    var_C = NULL;
    Py_XDECREF(var_us);
    var_us = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_u);
    var_u = NULL;
    Py_XDECREF(var_Q);
    var_Q = NULL;
    Py_XDECREF(var_R);
    var_R = NULL;
    Py_XDECREF(var_P);
    var_P = NULL;
    Py_XDECREF(var_cs);
    var_cs = NULL;
    Py_XDECREF(var_new_us);
    var_new_us = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_yc);
    var_yc = NULL;
    Py_XDECREF(var_j_outer);
    var_j_outer = NULL;
    Py_XDECREF(var_beta);
    var_beta = NULL;
    Py_XDECREF(var_beta_tol);
    var_beta_tol = NULL;
    Py_XDECREF(var_ml);
    var_ml = NULL;
    Py_XDECREF(var_B);
    var_B = NULL;
    Py_XDECREF(var_vs);
    var_vs = NULL;
    Py_XDECREF(var_zs);
    var_zs = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_pres);
    var_pres = NULL;
    Py_XDECREF(var_ux);
    var_ux = NULL;
    Py_XDECREF(var_z);
    var_z = NULL;
    Py_XDECREF(var_by);
    var_by = NULL;
    Py_XDECREF(var_cu);
    var_cu = NULL;
    Py_XDECREF(var_byc);
    var_byc = NULL;
    Py_XDECREF(var_hy);
    var_hy = NULL;
    Py_XDECREF(var_cx);
    var_cx = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_hyc);
    var_hyc = NULL;
    Py_XDECREF(var_alpha);
    var_alpha = NULL;
    Py_XDECREF(var_gamma);
    var_gamma = NULL;
    Py_XDECREF(var_D);
    var_D = NULL;
    Py_XDECREF(var_W);
    var_W = NULL;
    Py_XDECREF(var_sigma);
    var_sigma = NULL;
    Py_XDECREF(var_V);
    var_V = NULL;
    Py_XDECREF(var_new_CU);
    var_new_CU = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
    Py_XDECREF(var_cup);
    var_cup = NULL;
    Py_XDECREF(var_wp);
    var_wp = NULL;
    Py_XDECREF(var_cp);
    var_cp = NULL;
    Py_XDECREF(var_up);
    var_up = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_63;
    exception_lineno = exception_keeper_lineno_63;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_discard_C);
    Py_DECREF(par_discard_C);
    CHECK_OBJECT(par_truncate);
    Py_DECREF(par_truncate);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_discard_C);
    Py_DECREF(par_discard_C);
    CHECK_OBJECT(par_truncate);
    Py_DECREF(par_truncate);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cu = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda)) {
        Py_XDECREF(cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_ef779e5f517e187bd0a77120fc491084, module_scipy$sparse$linalg$isolve$_gcrotmk, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda->m_type_description == NULL);
    frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda = cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda);
    assert(Py_REFCNT(frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_cu);
        tmp_expression_value_1 = par_cu;
        tmp_subscript_value_1 = const_int_0;
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 302;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_return_value = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_INCREF(tmp_return_value);
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
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda,
        type_description_1,
        par_cu
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda == cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda);
        cache_frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda = NULL;
    }

    assertFrameObject(frame_frame_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cu);
    Py_DECREF(par_cu);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cu);
    Py_DECREF(par_cu);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0865852ff1b2b73d429a9f776713007f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$isolve$_gcrotmk,
        mod_consts[56],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres$$$function__1_lambda,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[1],
#endif
        code_objects_d0ef514b3ddff8184b1a1cd85cd7fda7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$isolve$_gcrotmk,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres$$$function__2_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres$$$function__2_lambda,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[1],
#endif
        code_objects_b34a4ccbd9e3edf9d6a47ff5caf85b46,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$isolve$_gcrotmk,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3e84e27bf7ec34f459a2550e2cf8f919,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$isolve$_gcrotmk,
        mod_consts[108],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[68],
#endif
        code_objects_ef779e5f517e187bd0a77120fc491084,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$isolve$_gcrotmk,
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

static function_impl_code const function_table_scipy$sparse$linalg$isolve$_gcrotmk[] = {
    impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres$$$function__1_lambda,
    impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres$$$function__2_lambda,
    impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk$$$function__1_lambda,
    impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres,
    impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_scipy$sparse$linalg$isolve$_gcrotmk);

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
        module_scipy$sparse$linalg$isolve$_gcrotmk,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_scipy$sparse$linalg$isolve$_gcrotmk,
        sizeof(function_table_scipy$sparse$linalg$isolve$_gcrotmk) / sizeof(function_impl_code)
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
static char const *module_full_name = "scipy.sparse.linalg.isolve._gcrotmk";
#endif

// Internal entry point for module code.
PyObject *modulecode_scipy$sparse$linalg$isolve$_gcrotmk(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy$sparse$linalg$isolve$_gcrotmk");

    // Store the module for future use.
    module_scipy$sparse$linalg$isolve$_gcrotmk = module;

    moduledict_scipy$sparse$linalg$isolve$_gcrotmk = MODULE_DICT(module_scipy$sparse$linalg$isolve$_gcrotmk);

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
        PRINT_STRING("scipy$sparse$linalg$isolve$_gcrotmk: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy$sparse$linalg$isolve$_gcrotmk: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("scipy$sparse$linalg$isolve$_gcrotmk: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "scipy.sparse.linalg.isolve._gcrotmk" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initscipy$sparse$linalg$isolve$_gcrotmk\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$sparse$linalg$isolve$_gcrotmk,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$sparse$linalg$isolve$_gcrotmk,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[131]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$sparse$linalg$isolve$_gcrotmk,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$linalg$isolve$_gcrotmk,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$linalg$isolve$_gcrotmk,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$sparse$linalg$isolve$_gcrotmk);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_scipy$sparse$linalg$isolve$_gcrotmk);
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

        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$sparse$linalg$isolve$_gcrotmk;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_2);
    }
    frame_frame_scipy$sparse$linalg$isolve$_gcrotmk = MAKE_MODULE_FRAME(code_objects_bcd98bd1261cbea0bf2aa6ffd7a85f51, module_scipy$sparse$linalg$isolve$_gcrotmk);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$sparse$linalg$isolve$_gcrotmk);
    assert(Py_REFCNT(frame_frame_scipy$sparse$linalg$isolve$_gcrotmk) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$___spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[111], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = module_var_accessor_scipy$sparse$linalg$isolve$_gcrotmk_$$___spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[112], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[62];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$sparse$linalg$isolve$_gcrotmk;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = const_int_0;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk->m_frame.f_lineno = 4;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[114];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_scipy$sparse$linalg$isolve$_gcrotmk;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = const_int_0;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk->m_frame.f_lineno = 5;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[115];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_scipy$sparse$linalg$isolve$_gcrotmk;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[116];
        tmp_level_value_3 = const_int_0;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk->m_frame.f_lineno = 6;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$sparse$linalg$isolve$_gcrotmk,
                mod_consts[52],
                const_int_0
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[52]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[117];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_scipy$sparse$linalg$isolve$_gcrotmk;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[118];
        tmp_level_value_4 = const_int_0;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk->m_frame.f_lineno = 7;
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
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_scipy$sparse$linalg$isolve$_gcrotmk,
                mod_consts[2],
                const_int_0
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[2]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_scipy$sparse$linalg$isolve$_gcrotmk,
                mod_consts[76],
                const_int_0
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[76]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_scipy$sparse$linalg$isolve$_gcrotmk,
                mod_consts[102],
                const_int_0
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[102]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_scipy$sparse$linalg$isolve$_gcrotmk,
                mod_consts[104],
                const_int_0
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[104]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_scipy$sparse$linalg$isolve$_gcrotmk,
                mod_consts[47],
                const_int_0
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[47]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_scipy$sparse$linalg$isolve$_gcrotmk,
                mod_consts[53],
                const_int_0
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[53]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_13);
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[119];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_scipy$sparse$linalg$isolve$_gcrotmk;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[120];
        tmp_level_value_5 = const_int_0;
        frame_frame_scipy$sparse$linalg$isolve$_gcrotmk->m_frame.f_lineno = 8;
        tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_scipy$sparse$linalg$isolve$_gcrotmk,
                mod_consts[57],
                const_int_0
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[57]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_14);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$sparse$linalg$isolve$_gcrotmk, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$sparse$linalg$isolve$_gcrotmk->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$sparse$linalg$isolve$_gcrotmk, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_scipy$sparse$linalg$isolve$_gcrotmk);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_LIST1(tstate, mod_consts[121]);
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[123];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_16 = MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function__1__fgmres(tstate, tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[124];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_17 = MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function__2_gcrotmk(tstate, tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_17);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy$sparse$linalg$isolve$_gcrotmk", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "scipy.sparse.linalg.isolve._gcrotmk" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_scipy$sparse$linalg$isolve$_gcrotmk);
    return module_scipy$sparse$linalg$isolve$_gcrotmk;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$sparse$linalg$isolve$_gcrotmk", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
