/* Generated code for Python module 'sklearn$manifold$_locally_linear'
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

/* The "module_sklearn$manifold$_locally_linear" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sklearn$manifold$_locally_linear;
PyDictObject *moduledict_sklearn$manifold$_locally_linear;

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
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("sklearn.manifold._locally_linear"));
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
void checkModuleConstants_sklearn$manifold$_locally_linear(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 209; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 23
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
static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_BaseEstimator(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[157]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[157])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[157], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[157])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[157], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[157]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[157]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[157]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_FLOAT_DTYPES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[1]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[1]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[1]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[1]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_NearestNeighbors(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[22]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[22])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[22], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[22])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[22], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[22]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[22]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[22]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_TransformerMixin(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[158]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[158])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[158], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[158])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[158], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[158]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[158]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[158]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$__UnstableArchMixin(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[159]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[159])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[159], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[159])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[159], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[159]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[159]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[159]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$___spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[208]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[208]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[208]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[208]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$__init_arpack_v0(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[42]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[42])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[42], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[42])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[42], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[42]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[42]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[42]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_barycenter_kneighbors_graph(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[63]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[63]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[63]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[63]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_barycenter_weights(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[30]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[30])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[30], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[30])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[30], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[30]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[30]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[30]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_check_array(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[0]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[0])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[0], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[0])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[0], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[0]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[0]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[0]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_check_is_fitted(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[137]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[137])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[137], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[137])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[137], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[137]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[137]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[137]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_check_random_state(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[127]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[127])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[127], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[127])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[127], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[127]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[127]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[127]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_csr_matrix(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[33]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[33])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[33], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[33])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[33], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[33]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[33]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[33]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_eigh(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[48]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[48])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[48], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[48])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[48], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[48]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[48]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[48]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_eigsh(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[43]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[43])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[43], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[43])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[43], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[43]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[43]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[43]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_eye(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[65]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[65])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[65], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[65])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[65], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[65]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[65]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[65]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_locally_linear_embedding(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[130]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[130])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[130], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[130])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[130], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[130]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[130]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[130]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[5]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[5]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[5]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_null_space(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[113]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[113])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[113], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[113])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[113], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[113]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[113]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[113]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_qr(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[83]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[83])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[83], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[83])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[83], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[83]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[83]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[83]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_solve(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[15]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[15])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[15], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[15])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[15], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[15]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[15]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[15]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_stable_cumsum(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[100]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[100]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[100]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[100]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$manifold$_locally_linear_$$_svd(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$manifold$_locally_linear->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$manifold$_locally_linear->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[77]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$manifold$_locally_linear->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[77])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[77], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[77])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[77], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[77]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[77]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[77]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_43b032e7925edaca7c3276dc68c238af;
static PyCodeObject *code_objects_0f5622cbb6ad05478ec327b34df4fed3;
static PyCodeObject *code_objects_30a6dca4028299600dd6b80c80e393a4;
static PyCodeObject *code_objects_cd8ef109e29a77387c08daecc163856b;
static PyCodeObject *code_objects_b843a4db13aad88fe9c414ba3d42c292;
static PyCodeObject *code_objects_88c51a192473e8b8a74975bc867cf313;
static PyCodeObject *code_objects_72c0ccef093113aa4ad4b797aa3e3250;
static PyCodeObject *code_objects_e2f20b2128127067498b5a3b841f3b94;
static PyCodeObject *code_objects_e8756097c0789e376f94020ec6b63593;
static PyCodeObject *code_objects_75c97f0e69354b307f90c383e069ed45;
static PyCodeObject *code_objects_ea16d2e03837db281f8b6e5c47b97c37;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[196]); CHECK_OBJECT(module_filename_obj);
    code_objects_43b032e7925edaca7c3276dc68c238af = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[197], mod_consts[197], NULL, NULL, 0, 0, 0);
    code_objects_0f5622cbb6ad05478ec327b34df4fed3 = MAKE_CODE_OBJECT(module_filename_obj, 545, CO_NOFREE, mod_consts[176], mod_consts[176], mod_consts[198], NULL, 0, 0, 0);
    code_objects_30a6dca4028299600dd6b80c80e393a4 = MAKE_CODE_OBJECT(module_filename_obj, 678, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[186], mod_consts[187], mod_consts[199], NULL, 1, 12, 0);
    code_objects_cd8ef109e29a77387c08daecc163856b = MAKE_CODE_OBJECT(module_filename_obj, 707, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[188], mod_consts[200], NULL, 2, 0, 0);
    code_objects_b843a4db13aad88fe9c414ba3d42c292 = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[201], NULL, 4, 0, 0);
    code_objects_88c51a192473e8b8a74975bc867cf313 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[30], mod_consts[202], NULL, 4, 0, 0);
    code_objects_72c0ccef093113aa4ad4b797aa3e3250 = MAKE_CODE_OBJECT(module_filename_obj, 732, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[190], mod_consts[203], NULL, 3, 0, 0);
    code_objects_e2f20b2128127067498b5a3b841f3b94 = MAKE_CODE_OBJECT(module_filename_obj, 751, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[191], mod_consts[192], mod_consts[203], NULL, 3, 0, 0);
    code_objects_e8756097c0789e376f94020ec6b63593 = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[130], mod_consts[130], mod_consts[204], NULL, 1, 11, 0);
    code_objects_75c97f0e69354b307f90c383e069ed45 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[205], NULL, 7, 0, 0);
    code_objects_ea16d2e03837db281f8b6e5c47b97c37 = MAKE_CODE_OBJECT(module_filename_obj, 770, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[193], mod_consts[194], mod_consts[206], NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__3_null_space(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding(PyThreadState *tstate, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__5___init__(PyThreadState *tstate, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__6__fit_transform(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__7_fit(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__8_fit_transform(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__9_transform(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_X = python_pars[0];
    PyObject *par_Y = python_pars[1];
    PyObject *par_indices = python_pars[2];
    PyObject *par_reg = python_pars[3];
    PyObject *var_n_samples = NULL;
    PyObject *var_n_neighbors = NULL;
    PyObject *var_B = NULL;
    PyObject *var_v = NULL;
    PyObject *var_i = NULL;
    PyObject *var_ind = NULL;
    PyObject *var_A = NULL;
    PyObject *var_C = NULL;
    PyObject *var_G = NULL;
    PyObject *var_trace = NULL;
    PyObject *var_R = NULL;
    PyObject *var_w = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscript_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscript_1__target = NULL;
    PyObject *tmp_inplace_assign_subscript_1__value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights)) {
        Py_XDECREF(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights = MAKE_FUNCTION_FRAME(tstate, code_objects_88c51a192473e8b8a74975bc867cf313, module_sklearn$manifold$_locally_linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights->m_type_description == NULL);
    frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights = cache_frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights);
    assert(Py_REFCNT(frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_1 = module_var_accessor_sklearn$manifold$_locally_linear_$$_check_array(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 48;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_X);
        tmp_kw_call_arg_value_0_1 = par_X;
        tmp_kw_call_dict_value_0_1 = module_var_accessor_sklearn$manifold$_locally_linear_$$_FLOAT_DTYPES(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[1]);
        }

        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 48;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights->m_frame.f_lineno = 48;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 48;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_X;
            assert(old != NULL);
            par_X = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_called_value_2 = module_var_accessor_sklearn$manifold$_locally_linear_$$_check_array(tstate);
        if (unlikely(tmp_called_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[0]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 49;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_Y);
        tmp_kw_call_arg_value_0_2 = par_Y;
        tmp_kw_call_dict_value_0_2 = module_var_accessor_sklearn$manifold$_locally_linear_$$_FLOAT_DTYPES(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[1]);
        }

        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 49;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights->m_frame.f_lineno = 49;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[2]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 49;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_Y;
            assert(old != NULL);
            par_Y = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_3 = module_var_accessor_sklearn$manifold$_locally_linear_$$_check_array(tstate);
        if (unlikely(tmp_called_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[0]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 50;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_indices);
        tmp_tuple_element_1 = par_indices;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[3]);
        frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights->m_frame.f_lineno = 50;
        tmp_assign_source_3 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 50;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_indices;
            assert(old != NULL);
            par_indices = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_indices);
        tmp_expression_value_1 = par_indices;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 52;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 52;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 52;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 52;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 52;
            type_description_1 = "oooooooooooooooo";
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
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert(var_n_samples == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_n_samples = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_n_neighbors == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_n_neighbors = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_X);
        tmp_expression_value_3 = par_X;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[4]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 53;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = const_int_0;
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 53;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n_samples);
        tmp_cmp_expr_right_1 = var_n_samples;
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 53;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 53;
            type_description_1 = "oooooooooooooooo";
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
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_state.exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 53;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_4 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 55;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[6]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n_samples);
        tmp_tuple_element_2 = var_n_samples;
        tmp_kw_call_arg_value_0_3 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_3, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_n_neighbors);
        tmp_tuple_element_2 = var_n_neighbors;
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_3, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_X);
        tmp_expression_value_5 = par_X;
        tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[7]);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 55;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights->m_frame.f_lineno = 55;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_B == NULL);
        var_B = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_6 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 56;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[8]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 56;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n_neighbors);
        tmp_kw_call_arg_value_0_4 = var_n_neighbors;
        CHECK_OBJECT(par_X);
        tmp_expression_value_7 = par_X;
        tmp_kw_call_dict_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[7]);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 56;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights->m_frame.f_lineno = 56;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 56;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_v == NULL);
        var_v = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_6 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_indices);
        tmp_args_element_value_1 = par_indices;
        frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights->m_frame.f_lineno = 60;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_12 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "oooooooooooooooo";
                exception_lineno = 60;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
        tmp_assign_source_13 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 60;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 60;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_15;
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



            exception_lineno = 60;
            type_description_1 = "oooooooooooooooo";
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
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_16;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_ind;
            var_ind = tmp_assign_source_17;
            Py_INCREF(var_ind);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_Y);
        tmp_expression_value_8 = par_Y;
        CHECK_OBJECT(var_ind);
        tmp_subscript_value_2 = var_ind;
        tmp_assign_source_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_2);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_A;
            var_A = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_A);
        tmp_sub_expr_left_1 = var_A;
        CHECK_OBJECT(par_X);
        tmp_expression_value_9 = par_X;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_3 = var_i;
        tmp_sub_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_3);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_19 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_C;
            var_C = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_11;
        tmp_expression_value_10 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 63;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[9]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_C);
        tmp_args_element_value_2 = var_C;
        CHECK_OBJECT(var_C);
        tmp_expression_value_11 = var_C;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[10]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 63;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_G;
            var_G = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_1 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 64;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_G);
        tmp_args_element_value_4 = var_G;
        frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights->m_frame.f_lineno = 64;
        tmp_assign_source_21 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[11], tmp_args_element_value_4);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 64;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_trace;
            var_trace = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_trace);
        tmp_cmp_expr_left_2 = var_trace;
        tmp_cmp_expr_right_2 = const_int_0;
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        if (par_reg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[12]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 66;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_mult_expr_left_1 = par_reg;
        CHECK_OBJECT(var_trace);
        tmp_mult_expr_right_1 = var_trace;
        tmp_assign_source_22 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 66;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_R;
            var_R = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_23;
        if (par_reg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[12]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 68;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_assign_source_23 = par_reg;
        {
            PyObject *old = var_R;
            var_R = tmp_assign_source_23;
            Py_INCREF(var_R);
            Py_XDECREF(old);
        }

    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(var_G);
        tmp_expression_value_12 = var_G;
        tmp_assign_source_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[13]);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_inplace_assign_subscript_1__target;
            tmp_inplace_assign_subscript_1__target = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_step_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_start_value_1 = Py_None;
        tmp_stop_value_1 = Py_None;
        if (var_n_neighbors == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[14]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 69;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_add_expr_left_1 = var_n_neighbors;
        tmp_add_expr_right_1 = const_int_pos_1;
        tmp_step_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_step_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_25 = MAKE_SLICE_OBJECT3(tstate, tmp_start_value_1, tmp_stop_value_1, tmp_step_value_1);
        Py_DECREF(tmp_step_value_1);
        assert(!(tmp_assign_source_25 == NULL));
        {
            PyObject *old = tmp_inplace_assign_subscript_1__subscript;
            tmp_inplace_assign_subscript_1__subscript = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
        tmp_expression_value_13 = tmp_inplace_assign_subscript_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
        tmp_subscript_value_4 = tmp_inplace_assign_subscript_1__subscript;
        tmp_assign_source_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_4);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_inplace_assign_subscript_1__value;
            tmp_inplace_assign_subscript_1__value = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_subscript_1__value;
        CHECK_OBJECT(var_R);
        tmp_iadd_expr_right_1 = var_R;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_27 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_subscript_1__value = tmp_assign_source_27;

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
        tmp_ass_subvalue_1 = tmp_inplace_assign_subscript_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscript_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
        tmp_ass_subscript_1 = tmp_inplace_assign_subscript_1__subscript;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooo";
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

    CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
    Py_DECREF(tmp_inplace_assign_subscript_1__target);
    tmp_inplace_assign_subscript_1__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_1__subscript);
    tmp_inplace_assign_subscript_1__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_1__value);
    tmp_inplace_assign_subscript_1__value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_4;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
    Py_DECREF(tmp_inplace_assign_subscript_1__target);
    tmp_inplace_assign_subscript_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscript_1__subscript);
    tmp_inplace_assign_subscript_1__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
    Py_DECREF(tmp_inplace_assign_subscript_1__value);
    tmp_inplace_assign_subscript_1__value = NULL;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_2;
        tmp_called_value_8 = module_var_accessor_sklearn$manifold$_locally_linear_$$_solve(tstate);
        if (unlikely(tmp_called_value_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 70;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_G);
        tmp_tuple_element_3 = var_G;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
        if (var_v == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[16]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 70;
            type_description_1 = "oooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_3 = var_v;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_args_value_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts[17]);
        frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights->m_frame.f_lineno = 70;
        tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 70;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_w;
            var_w = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT(var_w);
        tmp_truediv_expr_left_1 = var_w;
        tmp_called_instance_2 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 71;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_w);
        tmp_args_element_value_5 = var_w;
        frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights->m_frame.f_lineno = 71;
        tmp_truediv_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[18], tmp_args_element_value_5);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_ass_subvalue_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_B == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[19]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 71;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_ass_subscribed_2 = var_B;
        CHECK_OBJECT(var_i);
        tmp_tuple_element_4 = var_i;
        tmp_ass_subscript_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_ass_subscript_2, 0, tmp_tuple_element_4);
        tmp_tuple_element_4 = mod_consts[20];
        PyTuple_SET_ITEM0(tmp_ass_subscript_2, 1, tmp_tuple_element_4);
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 60;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_B == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[19]);
        NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
        CHAIN_EXCEPTION(tstate, exception_state.exception_value);

        exception_lineno = 72;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_B;
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
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights,
        type_description_1,
        par_X,
        par_Y,
        par_indices,
        par_reg,
        var_n_samples,
        var_n_neighbors,
        var_B,
        var_v,
        var_i,
        var_ind,
        var_A,
        var_C,
        var_G,
        var_trace,
        var_R,
        var_w
    );


    // Release cached frame if used for exception.
    if (frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights == cache_frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights);
        cache_frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights = NULL;
    }

    assertFrameObject(frame_frame_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_X);
    Py_DECREF(par_X);
    par_X = NULL;
    CHECK_OBJECT(par_Y);
    Py_DECREF(par_Y);
    par_Y = NULL;
    CHECK_OBJECT(par_indices);
    Py_DECREF(par_indices);
    par_indices = NULL;
    CHECK_OBJECT(var_n_samples);
    Py_DECREF(var_n_samples);
    var_n_samples = NULL;
    Py_XDECREF(var_n_neighbors);
    var_n_neighbors = NULL;
    Py_XDECREF(var_B);
    var_B = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_ind);
    var_ind = NULL;
    Py_XDECREF(var_A);
    var_A = NULL;
    Py_XDECREF(var_C);
    var_C = NULL;
    Py_XDECREF(var_G);
    var_G = NULL;
    Py_XDECREF(var_trace);
    var_trace = NULL;
    Py_XDECREF(var_R);
    var_R = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_7 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_7 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(par_X);
    par_X = NULL;
    Py_XDECREF(par_Y);
    par_Y = NULL;
    Py_XDECREF(par_indices);
    par_indices = NULL;
    Py_XDECREF(var_n_samples);
    var_n_samples = NULL;
    Py_XDECREF(var_n_neighbors);
    var_n_neighbors = NULL;
    Py_XDECREF(var_B);
    var_B = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_ind);
    var_ind = NULL;
    Py_XDECREF(var_A);
    var_A = NULL;
    Py_XDECREF(var_C);
    var_C = NULL;
    Py_XDECREF(var_G);
    var_G = NULL;
    Py_XDECREF(var_trace);
    var_trace = NULL;
    Py_XDECREF(var_R);
    var_R = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_reg);
    Py_DECREF(par_reg);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_reg);
    Py_DECREF(par_reg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_X = python_pars[0];
    PyObject *par_n_neighbors = python_pars[1];
    PyObject *par_reg = python_pars[2];
    PyObject *par_n_jobs = python_pars[3];
    PyObject *var_knn = NULL;
    PyObject *var_n_samples = NULL;
    PyObject *var_ind = NULL;
    PyObject *var_data = NULL;
    PyObject *var_indptr = NULL;
    struct Nuitka_FrameObject *frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph)) {
        Py_XDECREF(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph = MAKE_FUNCTION_FRAME(tstate, code_objects_b843a4db13aad88fe9c414ba3d42c292, module_sklearn$manifold$_locally_linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph->m_type_description == NULL);
    frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph = cache_frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph);
    assert(Py_REFCNT(frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = module_var_accessor_sklearn$manifold$_locally_linear_$$_NearestNeighbors(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[22]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n_neighbors);
        tmp_add_expr_left_1 = par_n_neighbors;
        tmp_add_expr_right_1 = const_int_pos_1;
        tmp_kw_call_value_0_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n_jobs);
        tmp_kw_call_value_1_1 = par_n_jobs;
        frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph->m_frame.f_lineno = 108;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_called_instance_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[23]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_X);
        tmp_args_element_value_1 = par_X;
        frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph->m_frame.f_lineno = 108;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[24], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_knn == NULL);
        var_knn = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_knn);
        tmp_expression_value_1 = var_knn;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[25]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 109;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_X;
            assert(old != NULL);
            par_X = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_knn);
        tmp_expression_value_2 = var_knn;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[26]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 110;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n_samples == NULL);
        var_n_samples = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_knn);
        tmp_expression_value_4 = var_knn;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[27]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 111;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_X);
        tmp_tuple_element_1 = par_X;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[28]);
        frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph->m_frame.f_lineno = 111;
        tmp_expression_value_3 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 111;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[29];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 111;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ind == NULL);
        var_ind = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_3 = module_var_accessor_sklearn$manifold$_locally_linear_$$_barycenter_weights(tstate);
        if (unlikely(tmp_called_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[30]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 112;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_X);
        tmp_kw_call_arg_value_0_1 = par_X;
        CHECK_OBJECT(par_X);
        tmp_kw_call_arg_value_1_1 = par_X;
        CHECK_OBJECT(var_ind);
        tmp_kw_call_arg_value_2_1 = var_ind;
        CHECK_OBJECT(par_reg);
        tmp_kw_call_dict_value_0_1 = par_reg;
        frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph->m_frame.f_lineno = 112;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[31]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 112;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_5 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 113;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[32]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 113;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = const_int_0;
        CHECK_OBJECT(var_n_samples);
        tmp_mult_expr_left_1 = var_n_samples;
        CHECK_OBJECT(par_n_neighbors);
        tmp_mult_expr_right_1 = par_n_neighbors;
        tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 113;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = const_int_pos_1;
        tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 113;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n_neighbors);
        tmp_args_element_value_4 = par_n_neighbors;
        frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 113;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_indptr == NULL);
        var_indptr = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_tuple_element_3;
        tmp_called_value_5 = module_var_accessor_sklearn$manifold$_locally_linear_$$_csr_matrix(tstate);
        if (unlikely(tmp_called_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[33]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 114;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_called_instance_2 = var_data;
        frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph->m_frame.f_lineno = 114;
        tmp_tuple_element_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[34]);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 114;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_2 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_called_instance_3;
            PyTuple_SET_ITEM(tmp_kw_call_arg_value_0_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_ind);
            tmp_called_instance_3 = var_ind;
            frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph->m_frame.f_lineno = 114;
            tmp_tuple_element_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[34]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 114;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_kw_call_arg_value_0_2, 1, tmp_tuple_element_2);
            CHECK_OBJECT(var_indptr);
            tmp_tuple_element_2 = var_indptr;
            PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        CHECK_OBJECT(var_n_samples);
        tmp_tuple_element_3 = var_n_samples;
        tmp_kw_call_dict_value_0_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_n_samples);
        tmp_tuple_element_3 = var_n_samples;
        PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_2, 1, tmp_tuple_element_3);
        frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph->m_frame.f_lineno = 114;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts[35]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 114;
            type_description_1 = "ooooooooo";
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
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph,
        type_description_1,
        par_X,
        par_n_neighbors,
        par_reg,
        par_n_jobs,
        var_knn,
        var_n_samples,
        var_ind,
        var_data,
        var_indptr
    );


    // Release cached frame if used for exception.
    if (frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph == cache_frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph);
        cache_frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph = NULL;
    }

    assertFrameObject(frame_frame_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_X);
    Py_DECREF(par_X);
    par_X = NULL;
    CHECK_OBJECT(var_knn);
    Py_DECREF(var_knn);
    var_knn = NULL;
    CHECK_OBJECT(var_n_samples);
    Py_DECREF(var_n_samples);
    var_n_samples = NULL;
    CHECK_OBJECT(var_ind);
    Py_DECREF(var_ind);
    var_ind = NULL;
    CHECK_OBJECT(var_data);
    Py_DECREF(var_data);
    var_data = NULL;
    CHECK_OBJECT(var_indptr);
    Py_DECREF(var_indptr);
    var_indptr = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(par_X);
    par_X = NULL;
    Py_XDECREF(var_knn);
    var_knn = NULL;
    Py_XDECREF(var_n_samples);
    var_n_samples = NULL;
    Py_XDECREF(var_ind);
    var_ind = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_indptr);
    var_indptr = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_n_neighbors);
    Py_DECREF(par_n_neighbors);
    CHECK_OBJECT(par_reg);
    Py_DECREF(par_reg);
    CHECK_OBJECT(par_n_jobs);
    Py_DECREF(par_n_jobs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n_neighbors);
    Py_DECREF(par_n_neighbors);
    CHECK_OBJECT(par_reg);
    Py_DECREF(par_reg);
    CHECK_OBJECT(par_n_jobs);
    Py_DECREF(par_n_jobs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sklearn$manifold$_locally_linear$$$function__3_null_space(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_M = python_pars[0];
    PyObject *par_k = python_pars[1];
    PyObject *par_k_skip = python_pars[2];
    PyObject *par_eigen_solver = python_pars[3];
    PyObject *par_tol = python_pars[4];
    PyObject *par_max_iter = python_pars[5];
    PyObject *par_random_state = python_pars[6];
    PyObject *var_v0 = NULL;
    PyObject *var_eigen_values = NULL;
    PyObject *var_eigen_vectors = NULL;
    PyObject *var_e = NULL;
    PyObject *var_index = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space)) {
        Py_XDECREF(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space = MAKE_FUNCTION_FRAME(tstate, code_objects_75c97f0e69354b307f90c383e069ed45, module_sklearn$manifold$_locally_linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space->m_type_description == NULL);
    frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space = cache_frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space);
    assert(Py_REFCNT(frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_eigen_solver);
        tmp_cmp_expr_left_1 = par_eigen_solver;
        tmp_cmp_expr_right_1 = mod_consts[37];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 159;
            type_description_1 = "oooooooooooo";
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
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_M);
        tmp_expression_value_2 = par_M;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[4]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = const_int_0;
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[38];
        tmp_and_left_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_k);
        tmp_add_expr_left_1 = par_k;
        CHECK_OBJECT(par_k_skip);
        tmp_add_expr_right_1 = par_k_skip;
        tmp_cmp_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[39];
        tmp_and_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "oooooooooooo";
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
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[40];
        {
            PyObject *old = par_eigen_solver;
            assert(old != NULL);
            par_eigen_solver = tmp_assign_source_1;
            Py_INCREF(par_eigen_solver);
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[41];
        {
            PyObject *old = par_eigen_solver;
            assert(old != NULL);
            par_eigen_solver = tmp_assign_source_2;
            Py_INCREF(par_eigen_solver);
            Py_DECREF(old);
        }

    }
    branch_end_2:;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_eigen_solver);
        tmp_cmp_expr_left_4 = par_eigen_solver;
        tmp_cmp_expr_right_4 = mod_consts[40];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 165;
            type_description_1 = "oooooooooooo";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = module_var_accessor_sklearn$manifold$_locally_linear_$$__init_arpack_v0(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[42]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 166;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_M);
        tmp_expression_value_4 = par_M;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[4]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 166;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = const_int_0;
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 166;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_random_state);
        tmp_args_element_value_2 = par_random_state;
        frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 166;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_v0 == NULL);
        var_v0 = tmp_assign_source_3;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        tmp_called_value_2 = module_var_accessor_sklearn$manifold$_locally_linear_$$_eigsh(tstate);
        if (unlikely(tmp_called_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 168;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_M);
        tmp_kw_call_arg_value_0_1 = par_M;
        CHECK_OBJECT(par_k);
        tmp_add_expr_left_2 = par_k;
        CHECK_OBJECT(par_k_skip);
        tmp_add_expr_right_2 = par_k_skip;
        tmp_kw_call_arg_value_1_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 169;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_dict_value_0_1 = mod_consts[44];
        CHECK_OBJECT(par_tol);
        tmp_kw_call_dict_value_1_1 = par_tol;
        CHECK_OBJECT(par_max_iter);
        tmp_kw_call_dict_value_2_1 = par_max_iter;
        CHECK_OBJECT(var_v0);
        tmp_kw_call_dict_value_3_1 = var_v0;
        frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space->m_frame.f_lineno = 168;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[45]);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 168;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 168;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 168;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 168;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 168;
            type_description_1 = "oooooooooooo";
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
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space, exception_keeper_lineno_3);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
        } else if (exception_keeper_lineno_3 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space, exception_keeper_lineno_3);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_5 = PyExc_RuntimeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_assign_source_7); 
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_e = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_raise_cause_1;
        tmp_mod_expr_left_1 = mod_consts[46];
        CHECK_OBJECT(var_e);
        tmp_mod_expr_right_1 = var_e;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 177;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space->m_frame.f_lineno = 172;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        CHECK_OBJECT(var_e);
        tmp_raise_cause_1 = var_e;
        exception_state.exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_cause_1);
        exception_lineno = 178;
        RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
        type_description_1 = "oooooooooooo";
        goto try_except_handler_6;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 167;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space->m_frame)) {
            frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
    branch_end_4:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        assert(var_eigen_values == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_eigen_values = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert(var_eigen_vectors == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_eigen_vectors = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_eigen_vectors);
        tmp_expression_value_5 = var_eigen_vectors;
        tmp_tuple_element_2 = mod_consts[20];
        tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_start_value_1;
            PyObject *tmp_stop_value_1;
            PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_k_skip);
            tmp_start_value_1 = par_k_skip;
            tmp_stop_value_1 = Py_None;
            tmp_tuple_element_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
            assert(!(tmp_tuple_element_2 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_2);
        }
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 180;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_start_value_2;
            PyObject *tmp_stop_value_2;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            tmp_expression_value_6 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
            if (unlikely(tmp_expression_value_6 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 180;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[18]);
            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 180;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_eigen_values);
            tmp_expression_value_7 = var_eigen_values;
            CHECK_OBJECT(par_k_skip);
            tmp_start_value_2 = par_k_skip;
            tmp_stop_value_2 = Py_None;
            tmp_subscript_value_4 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
            assert(!(tmp_subscript_value_4 == NULL));
            tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_4);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_args_element_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 180;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_1;
            }
            frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space->m_frame.f_lineno = 180;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 180;
                type_description_1 = "oooooooooooo";
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
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_eigen_solver);
        tmp_cmp_expr_left_6 = par_eigen_solver;
        tmp_cmp_expr_right_6 = mod_consts[41];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 181;
            type_description_1 = "oooooooooooo";
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
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_M);
        tmp_expression_value_8 = par_M;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[47]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 182;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_M);
        tmp_called_instance_1 = par_M;
        frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space->m_frame.f_lineno = 183;
        tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[47]);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 183;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_M;
            assert(old != NULL);
            par_M = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_call_dict_value_1_2;
        tmp_called_value_4 = module_var_accessor_sklearn$manifold$_locally_linear_$$_eigh(tstate);
        if (unlikely(tmp_called_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[48]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 184;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_7;
        }
        if (par_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[49]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 185;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_7;
        }

        tmp_kw_call_arg_value_0_2 = par_M;
        CHECK_OBJECT(par_k_skip);
        tmp_tuple_element_3 = par_k_skip;
        tmp_kw_call_dict_value_0_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_add_expr_left_3;
            PyObject *tmp_add_expr_right_3;
            PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_k);
            tmp_add_expr_left_3 = par_k;
            CHECK_OBJECT(par_k_skip);
            tmp_add_expr_right_3 = par_k_skip;
            tmp_sub_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
            if (tmp_sub_expr_left_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 185;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_sub_expr_right_1 = const_int_pos_1;
            tmp_tuple_element_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            Py_DECREF(tmp_sub_expr_left_1);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 185;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_kw_call_dict_value_0_2, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_kw_call_dict_value_1_2 = Py_True;
        frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space->m_frame.f_lineno = 184;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[50]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 184;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 184;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 184;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_8;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 184;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_8;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 184;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_8;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_lineno_7 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_7 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;
        assert(var_eigen_values == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_eigen_values = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_2;
        assert(var_eigen_vectors == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_eigen_vectors = tmp_assign_source_15;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_9 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 187;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[51]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 187;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_5);

            exception_lineno = 187;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_eigen_values);
        tmp_args_element_value_5 = var_eigen_values;
        frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space->m_frame.f_lineno = 187;
        tmp_args_element_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[52], tmp_args_element_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 187;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space->m_frame.f_lineno = 187;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 187;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_index == NULL);
        var_index = tmp_assign_source_16;
    }
    {
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_tuple_element_5;
        CHECK_OBJECT(var_eigen_vectors);
        tmp_expression_value_10 = var_eigen_vectors;
        tmp_tuple_element_5 = mod_consts[20];
        tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_5);
        CHECK_OBJECT(var_index);
        tmp_tuple_element_5 = var_index;
        PyTuple_SET_ITEM0(tmp_subscript_value_5, 1, tmp_tuple_element_5);
        tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 188;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_6;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_4);
            tmp_called_instance_3 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
            if (unlikely(tmp_called_instance_3 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 188;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_3;
            }
            CHECK_OBJECT(var_eigen_values);
            tmp_args_element_value_6 = var_eigen_values;
            frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space->m_frame.f_lineno = 188;
            tmp_tuple_element_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[18], tmp_args_element_value_6);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 188;
                type_description_1 = "oooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        goto frame_return_exit_1;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        tmp_mod_expr_left_2 = mod_consts[53];
        CHECK_OBJECT(par_eigen_solver);
        tmp_mod_expr_right_2 = par_eigen_solver;
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 190;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space->m_frame.f_lineno = 190;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_state.exception_type = tmp_raise_type_2;
        exception_lineno = 190;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_5:;
    branch_end_3:;


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
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space,
        type_description_1,
        par_M,
        par_k,
        par_k_skip,
        par_eigen_solver,
        par_tol,
        par_max_iter,
        par_random_state,
        var_v0,
        var_eigen_values,
        var_eigen_vectors,
        var_e,
        var_index
    );


    // Release cached frame if used for exception.
    if (frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space == cache_frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space);
        cache_frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space = NULL;
    }

    assertFrameObject(frame_frame_sklearn$manifold$_locally_linear$$$function__3_null_space);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_M);
    par_M = NULL;
    CHECK_OBJECT(par_eigen_solver);
    Py_DECREF(par_eigen_solver);
    par_eigen_solver = NULL;
    Py_XDECREF(var_v0);
    var_v0 = NULL;
    Py_XDECREF(var_eigen_values);
    var_eigen_values = NULL;
    CHECK_OBJECT(var_eigen_vectors);
    Py_DECREF(var_eigen_vectors);
    var_eigen_vectors = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_8 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_8 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(par_M);
    par_M = NULL;
    Py_XDECREF(par_eigen_solver);
    par_eigen_solver = NULL;
    Py_XDECREF(var_v0);
    var_v0 = NULL;
    Py_XDECREF(var_eigen_values);
    var_eigen_values = NULL;
    Py_XDECREF(var_eigen_vectors);
    var_eigen_vectors = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_k);
    Py_DECREF(par_k);
    CHECK_OBJECT(par_k_skip);
    Py_DECREF(par_k_skip);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    CHECK_OBJECT(par_max_iter);
    Py_DECREF(par_max_iter);
    CHECK_OBJECT(par_random_state);
    Py_DECREF(par_random_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_k);
    Py_DECREF(par_k);
    CHECK_OBJECT(par_k_skip);
    Py_DECREF(par_k_skip);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    CHECK_OBJECT(par_max_iter);
    Py_DECREF(par_max_iter);
    CHECK_OBJECT(par_random_state);
    Py_DECREF(par_random_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_X = python_pars[0];
    PyObject *par_n_neighbors = python_pars[1];
    PyObject *par_n_components = python_pars[2];
    PyObject *par_reg = python_pars[3];
    PyObject *par_eigen_solver = python_pars[4];
    PyObject *par_tol = python_pars[5];
    PyObject *par_max_iter = python_pars[6];
    PyObject *par_method = python_pars[7];
    PyObject *par_hessian_tol = python_pars[8];
    PyObject *par_modified_tol = python_pars[9];
    PyObject *par_random_state = python_pars[10];
    PyObject *par_n_jobs = python_pars[11];
    PyObject *var_nbrs = NULL;
    PyObject *var_N = NULL;
    PyObject *var_d_in = NULL;
    PyObject *var_M_sparse = NULL;
    PyObject *var_W = NULL;
    PyObject *var_M = NULL;
    PyObject *var_dp = NULL;
    PyObject *var_neighbors = NULL;
    PyObject *var_Yi = NULL;
    PyObject *var_use_svd = NULL;
    PyObject *var_i = NULL;
    PyObject *var_Gi = NULL;
    PyObject *var_U = NULL;
    PyObject *var_Ci = NULL;
    PyObject *var_j = NULL;
    PyObject *var_k = NULL;
    PyObject *var_Q = NULL;
    PyObject *var_R = NULL;
    PyObject *var_w = NULL;
    PyObject *var_S = NULL;
    PyObject *var_nbrs_x = NULL;
    PyObject *var_nbrs_y = NULL;
    PyObject *var_V = NULL;
    PyObject *var_nev = NULL;
    PyObject *var_evals = NULL;
    PyObject *var_X_nbrs = NULL;
    PyObject *var__ = NULL;
    PyObject *var_C_nbrs = NULL;
    PyObject *var_evi = NULL;
    PyObject *var_vi = NULL;
    PyObject *var_tmp = NULL;
    PyObject *var_w_reg = NULL;
    PyObject *var_rho = NULL;
    PyObject *var_eta = NULL;
    PyObject *var_s_range = NULL;
    PyObject *var_evals_cumsum = NULL;
    PyObject *var_eta_range = NULL;
    PyObject *var_s_i = NULL;
    PyObject *var_Vi = NULL;
    PyObject *var_alpha_i = NULL;
    PyObject *var_h = NULL;
    PyObject *var_norm_h = NULL;
    PyObject *var_Wi = NULL;
    PyObject *var_Wi_sum1 = NULL;
    PyObject *var_Xi = NULL;
    PyObject *var_v = NULL;
    PyObject *var_GiGiT = NULL;
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
    PyObject *tmp_inplace_assign_subscript_10__subscript = NULL;
    PyObject *tmp_inplace_assign_subscript_10__target = NULL;
    PyObject *tmp_inplace_assign_subscript_10__value = NULL;
    PyObject *tmp_inplace_assign_subscript_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscript_1__target = NULL;
    PyObject *tmp_inplace_assign_subscript_1__value = NULL;
    PyObject *tmp_inplace_assign_subscript_2__subscript = NULL;
    PyObject *tmp_inplace_assign_subscript_2__target = NULL;
    PyObject *tmp_inplace_assign_subscript_2__value = NULL;
    PyObject *tmp_inplace_assign_subscript_3__subscript = NULL;
    PyObject *tmp_inplace_assign_subscript_3__target = NULL;
    PyObject *tmp_inplace_assign_subscript_3__value = NULL;
    PyObject *tmp_inplace_assign_subscript_4__subscript = NULL;
    PyObject *tmp_inplace_assign_subscript_4__target = NULL;
    PyObject *tmp_inplace_assign_subscript_4__value = NULL;
    PyObject *tmp_inplace_assign_subscript_5__subscript = NULL;
    PyObject *tmp_inplace_assign_subscript_5__target = NULL;
    PyObject *tmp_inplace_assign_subscript_5__value = NULL;
    PyObject *tmp_inplace_assign_subscript_6__subscript = NULL;
    PyObject *tmp_inplace_assign_subscript_6__target = NULL;
    PyObject *tmp_inplace_assign_subscript_6__value = NULL;
    PyObject *tmp_inplace_assign_subscript_7__subscript = NULL;
    PyObject *tmp_inplace_assign_subscript_7__target = NULL;
    PyObject *tmp_inplace_assign_subscript_7__value = NULL;
    PyObject *tmp_inplace_assign_subscript_8__subscript = NULL;
    PyObject *tmp_inplace_assign_subscript_8__target = NULL;
    PyObject *tmp_inplace_assign_subscript_8__value = NULL;
    PyObject *tmp_inplace_assign_subscript_9__subscript = NULL;
    PyObject *tmp_inplace_assign_subscript_9__target = NULL;
    PyObject *tmp_inplace_assign_subscript_9__value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__element_3 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding)) {
        Py_XDECREF(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding = MAKE_FUNCTION_FRAME(tstate, code_objects_e8756097c0789e376f94020ec6b63593, module_sklearn$manifold$_locally_linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_type_description == NULL);
    frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding = cache_frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding);
    assert(Py_REFCNT(frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_eigen_solver);
        tmp_cmp_expr_left_1 = par_eigen_solver;
        tmp_cmp_expr_right_1 = mod_consts[55];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[56];
        CHECK_OBJECT(par_eigen_solver);
        tmp_mod_expr_right_1 = par_eigen_solver;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 304;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 304;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_state.exception_type = tmp_raise_type_1;
        exception_lineno = 304;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_method);
        tmp_cmp_expr_left_2 = par_method;
        tmp_cmp_expr_right_2 = mod_consts[57];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 306;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        tmp_mod_expr_left_2 = mod_consts[58];
        CHECK_OBJECT(par_method);
        tmp_mod_expr_right_2 = par_method;
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 307;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 307;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_state.exception_type = tmp_raise_type_2;
        exception_lineno = 307;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_1 = module_var_accessor_sklearn$manifold$_locally_linear_$$_NearestNeighbors(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[22]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 309;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n_neighbors);
        tmp_add_expr_left_1 = par_n_neighbors;
        tmp_add_expr_right_1 = const_int_pos_1;
        tmp_kw_call_value_0_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 309;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n_jobs);
        tmp_kw_call_value_1_1 = par_n_jobs;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 309;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[23]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 309;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nbrs == NULL);
        var_nbrs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_nbrs);
        tmp_called_instance_1 = var_nbrs;
        CHECK_OBJECT(par_X);
        tmp_args_element_value_1 = par_X;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 310;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[24], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 310;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_nbrs);
        tmp_expression_value_1 = var_nbrs;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[25]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 311;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_X;
            assert(old != NULL);
            par_X = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_X);
        tmp_expression_value_2 = par_X;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[4]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_N == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_N = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_d_in == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_d_in = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_n_components);
        tmp_cmp_expr_left_3 = par_n_components;
        CHECK_OBJECT(var_d_in);
        tmp_cmp_expr_right_3 = var_d_in;
        tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[59];
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 316;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_state.exception_type = tmp_raise_type_3;
        exception_lineno = 316;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_n_neighbors);
        tmp_cmp_expr_left_4 = par_n_neighbors;
        CHECK_OBJECT(var_N);
        tmp_cmp_expr_right_4 = var_N;
        tmp_condition_result_4 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 319;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_1;
        tmp_mod_expr_left_3 = mod_consts[60];
        CHECK_OBJECT(var_N);
        tmp_tuple_element_1 = var_N;
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_n_neighbors);
        tmp_tuple_element_1 = par_n_neighbors;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 1, tmp_tuple_element_1);
        tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_make_exception_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 320;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_4);
        Py_DECREF(tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_state.exception_type = tmp_raise_type_4;
        exception_lineno = 320;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_n_neighbors);
        tmp_cmp_expr_left_5 = par_n_neighbors;
        tmp_cmp_expr_right_5 = const_int_0;
        tmp_condition_result_5 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 325;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_raise_type_5;
        PyObject *tmp_make_exception_arg_5;
        tmp_make_exception_arg_5 = mod_consts[61];
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 326;
        tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_5);
        assert(!(tmp_raise_type_5 == NULL));
        exception_state.exception_type = tmp_raise_type_5;
        exception_lineno = 326;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_eigen_solver);
        tmp_cmp_expr_left_6 = par_eigen_solver;
        tmp_cmp_expr_right_6 = mod_consts[41];
        tmp_assign_source_8 = RICH_COMPARE_NE_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_M_sparse == NULL);
        var_M_sparse = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(par_method);
        tmp_cmp_expr_left_7 = par_method;
        tmp_cmp_expr_right_7 = mod_consts[62];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_called_value_2 = module_var_accessor_sklearn$manifold$_locally_linear_$$_barycenter_kneighbors_graph(tstate);
        if (unlikely(tmp_called_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[63]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 331;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_nbrs);
        tmp_kw_call_arg_value_0_1 = var_nbrs;
        CHECK_OBJECT(par_n_neighbors);
        tmp_kw_call_dict_value_0_1 = par_n_neighbors;
        CHECK_OBJECT(par_reg);
        tmp_kw_call_dict_value_1_1 = par_reg;
        CHECK_OBJECT(par_n_jobs);
        tmp_kw_call_dict_value_2_1 = par_n_jobs;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 331;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[64]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 331;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_W == NULL);
        var_W = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_M_sparse);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_M_sparse);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_direct_call_arg1_1;
        PyObject *tmp_direct_call_arg2_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_direct_call_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_4;
        tmp_direct_call_arg1_1 = module_var_accessor_sklearn$manifold$_locally_linear_$$_eye(tstate);
        if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[65]);
        }

        if (tmp_direct_call_arg1_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 338;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_W);
        tmp_expression_value_3 = var_W;
        tmp_direct_call_arg2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[4]);
        if (tmp_direct_call_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 338;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[66];
        CHECK_OBJECT(var_W);
        tmp_expression_value_4 = var_W;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[66]);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_direct_call_arg2_1);

            exception_lineno = 338;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_direct_call_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_direct_call_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
            tmp_sub_expr_left_1 = impl___main__$$$helper_function_complex_call_helper_keywords_star_list(tstate, dir_call_args);
        }
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 338;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_W);
        tmp_sub_expr_right_1 = var_W;
        tmp_assign_source_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 338;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_M == NULL);
        var_M = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_M);
        tmp_expression_value_5 = var_M;
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[10]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_M);
        tmp_mult_expr_right_1 = var_M;
        tmp_called_instance_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 339;
        tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[67]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_M;
            assert(old != NULL);
            var_M = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_W);
        tmp_expression_value_6 = var_W;
        tmp_mult_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[10]);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_W);
        tmp_mult_expr_right_2 = var_W;
        tmp_sub_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_W);
        tmp_expression_value_7 = var_W;
        tmp_sub_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[10]);
        if (tmp_sub_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_3);

            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        Py_DECREF(tmp_sub_expr_right_3);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_W);
        tmp_sub_expr_right_2 = var_W;
        tmp_called_instance_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 341;
        tmp_assign_source_12 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[47]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_M == NULL);
        var_M = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_M);
        tmp_expression_value_8 = var_M;
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[13]);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_subscript_1__target == NULL);
        tmp_inplace_assign_subscript_1__target = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_step_value_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_1;
        tmp_start_value_1 = Py_None;
        tmp_stop_value_1 = Py_None;
        CHECK_OBJECT(var_M);
        tmp_expression_value_10 = var_M;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[4]);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_subscript_value_1 = const_int_0;
        tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_add_expr_right_2 = const_int_pos_1;
        tmp_step_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_step_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_14 = MAKE_SLICE_OBJECT3(tstate, tmp_start_value_1, tmp_stop_value_1, tmp_step_value_1);
        Py_DECREF(tmp_step_value_1);
        assert(!(tmp_assign_source_14 == NULL));
        assert(tmp_inplace_assign_subscript_1__subscript == NULL);
        tmp_inplace_assign_subscript_1__subscript = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
        tmp_expression_value_11 = tmp_inplace_assign_subscript_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
        tmp_subscript_value_2 = tmp_inplace_assign_subscript_1__subscript;
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_2);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_inplace_assign_subscript_1__value == NULL);
        tmp_inplace_assign_subscript_1__value = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_subscript_1__value;
        tmp_iadd_expr_right_1 = const_int_pos_1;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_16 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_subscript_1__value = tmp_assign_source_16;

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
        tmp_ass_subvalue_1 = tmp_inplace_assign_subscript_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscript_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
        tmp_ass_subscript_1 = tmp_inplace_assign_subscript_1__subscript;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
    Py_DECREF(tmp_inplace_assign_subscript_1__target);
    tmp_inplace_assign_subscript_1__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_1__subscript);
    tmp_inplace_assign_subscript_1__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_1__value);
    tmp_inplace_assign_subscript_1__value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
    Py_DECREF(tmp_inplace_assign_subscript_1__target);
    tmp_inplace_assign_subscript_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscript_1__subscript);
    tmp_inplace_assign_subscript_1__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
    Py_DECREF(tmp_inplace_assign_subscript_1__value);
    tmp_inplace_assign_subscript_1__value = NULL;
    branch_end_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(par_method);
        tmp_cmp_expr_left_8 = par_method;
        tmp_cmp_expr_right_8 = mod_consts[68];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 344;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        CHECK_OBJECT(par_n_components);
        tmp_mult_expr_left_3 = par_n_components;
        CHECK_OBJECT(par_n_components);
        tmp_add_expr_left_3 = par_n_components;
        tmp_add_expr_right_3 = const_int_pos_1;
        tmp_mult_expr_right_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_mult_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 345;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_floordiv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_right_3);
        if (tmp_floordiv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 345;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_floordiv_expr_right_1 = mod_consts[69];
        tmp_assign_source_17 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_left_1);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 345;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dp == NULL);
        var_dp = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        CHECK_OBJECT(par_n_neighbors);
        tmp_cmp_expr_left_9 = par_n_neighbors;
        CHECK_OBJECT(par_n_components);
        tmp_add_expr_left_4 = par_n_components;
        CHECK_OBJECT(var_dp);
        tmp_add_expr_right_4 = var_dp;
        tmp_cmp_expr_right_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_cmp_expr_right_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 347;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_right_9);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 347;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_make_exception_arg_6;
        tmp_make_exception_arg_6 = mod_consts[70];
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 348;
        tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_6);
        assert(!(tmp_raise_type_6 == NULL));
        exception_state.exception_type = tmp_raise_type_6;
        exception_lineno = 348;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_9:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_kw_call_dict_value_1_2;
        CHECK_OBJECT(var_nbrs);
        tmp_expression_value_12 = var_nbrs;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[27]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 354;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_X);
        tmp_kw_call_arg_value_0_2 = par_X;
        CHECK_OBJECT(par_n_neighbors);
        tmp_add_expr_left_5 = par_n_neighbors;
        tmp_add_expr_right_5 = const_int_pos_1;
        tmp_kw_call_dict_value_0_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 355;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_2 = Py_False;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 354;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 354;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_neighbors == NULL);
        var_neighbors = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_neighbors);
        tmp_expression_value_13 = var_neighbors;
        tmp_subscript_value_3 = mod_consts[29];
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_3);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 357;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_neighbors;
            assert(old != NULL);
            var_neighbors = tmp_assign_source_19;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_expression_value_15;
        tmp_expression_value_14 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[6]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n_neighbors);
        tmp_tuple_element_2 = par_n_neighbors;
        tmp_kw_call_arg_value_0_3 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_add_expr_left_6;
            PyObject *tmp_add_expr_right_6;
            PyObject *tmp_add_expr_left_7;
            PyObject *tmp_add_expr_right_7;
            PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_3, 0, tmp_tuple_element_2);
            tmp_add_expr_left_7 = const_int_pos_1;
            CHECK_OBJECT(par_n_components);
            tmp_add_expr_right_7 = par_n_components;
            tmp_add_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
            if (tmp_add_expr_left_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 359;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_dp);
            tmp_add_expr_right_6 = var_dp;
            tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
            Py_DECREF(tmp_add_expr_left_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 359;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_kw_call_arg_value_0_3, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_expression_value_15 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[72]);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 359;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_Yi == NULL);
        var_Yi = tmp_assign_source_20;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = const_int_pos_1;
        CHECK_OBJECT(var_Yi);
        tmp_ass_subscribed_2 = var_Yi;
        tmp_ass_subscript_2 = mod_consts[73];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 360;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_expression_value_17;
        tmp_expression_value_16 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 362;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[74]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 362;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_tuple_element_3 = var_N;
        tmp_kw_call_arg_value_0_4 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_4, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_N);
        tmp_tuple_element_3 = var_N;
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_4, 1, tmp_tuple_element_3);
        tmp_expression_value_17 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_0_4);

            exception_lineno = 362;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[72]);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_0_4);

            exception_lineno = 362;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 362;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_arg_value_0_4);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 362;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_M == NULL);
        var_M = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(par_n_neighbors);
        tmp_cmp_expr_left_10 = par_n_neighbors;
        CHECK_OBJECT(var_d_in);
        tmp_cmp_expr_right_10 = var_d_in;
        tmp_assign_source_22 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_use_svd == NULL);
        var_use_svd = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT(var_N);
        tmp_xrange_low_1 = var_N;
        tmp_iter_arg_2 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_23;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_24 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
        if (tmp_assign_source_24 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 366;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_25 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_25;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(par_X);
        tmp_expression_value_18 = par_X;
        CHECK_OBJECT(var_neighbors);
        tmp_expression_value_19 = var_neighbors;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_5 = var_i;
        tmp_subscript_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_5);
        if (tmp_subscript_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 367;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 367;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_Gi;
            var_Gi = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(var_Gi);
        tmp_isub_expr_left_1 = var_Gi;
        CHECK_OBJECT(var_Gi);
        tmp_called_instance_4 = var_Gi;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 368;
        tmp_isub_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_4,
            mod_consts[75],
            PyTuple_GET_ITEM(mod_consts[76], 0)
        );

        if (tmp_isub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 368;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        Py_DECREF(tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 368;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_27 = tmp_isub_expr_left_1;
        var_Gi = tmp_assign_source_27;

    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_use_svd);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_use_svd);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 371;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_10 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_subscript_value_6;
        tmp_called_value_6 = module_var_accessor_sklearn$manifold$_locally_linear_$$_svd(tstate);
        if (unlikely(tmp_called_value_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[77]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 372;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_Gi);
        tmp_tuple_element_4 = var_Gi;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_4);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[78]);
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 372;
        tmp_expression_value_20 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 372;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_6 = const_int_0;
        tmp_assign_source_28 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_6, 0);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 372;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_U;
            var_U = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_22;
        tmp_expression_value_21 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_21 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[9]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_Gi);
        tmp_args_element_value_2 = var_Gi;
        CHECK_OBJECT(var_Gi);
        tmp_expression_value_22 = var_Gi;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[10]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 374;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_Ci;
            var_Ci = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_subscript_value_8;
        tmp_called_value_8 = module_var_accessor_sklearn$manifold$_locally_linear_$$_eigh(tstate);
        if (unlikely(tmp_called_value_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[48]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_Ci);
        tmp_args_element_value_4 = var_Ci;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 375;
        tmp_expression_value_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_4);
        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_7 = const_int_pos_1;
        tmp_expression_value_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_24, tmp_subscript_value_7, 1);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_8 = mod_consts[79];
        tmp_assign_source_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_8);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_U;
            var_U = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    branch_end_10:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_tuple_element_6;
        CHECK_OBJECT(var_U);
        tmp_expression_value_25 = var_U;
        tmp_tuple_element_5 = mod_consts[20];
        tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_stop_value_2;
            PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_5);
            if (par_n_components == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[80]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 377;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_stop_value_2 = par_n_components;
            tmp_tuple_element_5 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_2);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_9, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_subscript_value_9);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 377;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (var_Yi == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 377;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_ass_subscribed_3 = var_Yi;
        tmp_tuple_element_6 = mod_consts[20];
        tmp_ass_subscript_3 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_start_value_2;
            PyObject *tmp_stop_value_3;
            PyObject *tmp_add_expr_left_8;
            PyObject *tmp_add_expr_right_8;
            PyTuple_SET_ITEM0(tmp_ass_subscript_3, 0, tmp_tuple_element_6);
            tmp_start_value_2 = const_int_pos_1;
            tmp_add_expr_left_8 = const_int_pos_1;
            if (par_n_components == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[80]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 377;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }

            tmp_add_expr_right_8 = par_n_components;
            tmp_stop_value_3 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
            if (tmp_stop_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 377;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_tuple_element_6 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_3);
            Py_DECREF(tmp_stop_value_3);
            assert(!(tmp_tuple_element_6 == NULL));
            PyTuple_SET_ITEM(tmp_ass_subscript_3, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscript_3);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscript_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 377;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        tmp_add_expr_left_9 = const_int_pos_1;
        if (par_n_components == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[80]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 379;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_add_expr_right_9 = par_n_components;
        tmp_assign_source_31 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 379;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_xrange_low_2;
        if (par_n_components == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[80]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_xrange_low_2 = par_n_components;
        tmp_iter_arg_3 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_2);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_32 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_32;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_33 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
        if (tmp_assign_source_33 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 380;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_34 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_34;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        PyObject *tmp_tuple_element_9;
        CHECK_OBJECT(var_U);
        tmp_expression_value_26 = var_U;
        tmp_tuple_element_7 = mod_consts[20];
        tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_start_value_3;
            PyObject *tmp_stop_value_4;
            PyObject *tmp_add_expr_left_10;
            PyObject *tmp_add_expr_right_10;
            PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_7);
            CHECK_OBJECT(var_k);
            tmp_start_value_3 = var_k;
            CHECK_OBJECT(var_k);
            tmp_add_expr_left_10 = var_k;
            tmp_add_expr_right_10 = const_int_pos_1;
            tmp_stop_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_10, tmp_add_expr_right_10);
            if (tmp_stop_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 381;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_tuple_element_7 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_3, tmp_stop_value_4);
            Py_DECREF(tmp_stop_value_4);
            assert(!(tmp_tuple_element_7 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_10, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_subscript_value_10);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_mult_expr_left_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_10);
        Py_DECREF(tmp_subscript_value_10);
        if (tmp_mult_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 381;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_U);
        tmp_expression_value_27 = var_U;
        tmp_tuple_element_8 = mod_consts[20];
        tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_start_value_4;
            PyObject *tmp_stop_value_5;
            PyTuple_SET_ITEM0(tmp_subscript_value_11, 0, tmp_tuple_element_8);
            CHECK_OBJECT(var_k);
            tmp_start_value_4 = var_k;
            if (par_n_components == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[80]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 381;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }

            tmp_stop_value_5 = par_n_components;
            tmp_tuple_element_8 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_4, tmp_stop_value_5);
            assert(!(tmp_tuple_element_8 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_11, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mult_expr_left_4);
        Py_DECREF(tmp_subscript_value_11);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_mult_expr_right_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_11);
        Py_DECREF(tmp_subscript_value_11);
        if (tmp_mult_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_4);

            exception_lineno = 381;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_ass_subvalue_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_left_4);
        Py_DECREF(tmp_mult_expr_right_4);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 381;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_Yi == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 381;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_4 = var_Yi;
        tmp_tuple_element_9 = mod_consts[20];
        tmp_ass_subscript_4 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_start_value_5;
            PyObject *tmp_stop_value_6;
            PyObject *tmp_sub_expr_left_4;
            PyObject *tmp_sub_expr_right_4;
            PyObject *tmp_add_expr_left_11;
            PyObject *tmp_add_expr_right_11;
            PyTuple_SET_ITEM0(tmp_ass_subscript_4, 0, tmp_tuple_element_9);
            if (var_j == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[82]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 381;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }

            tmp_start_value_5 = var_j;
            if (var_j == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[82]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 381;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }

            tmp_add_expr_left_11 = var_j;
            if (par_n_components == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[80]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 381;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }

            tmp_add_expr_right_11 = par_n_components;
            tmp_sub_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
            if (tmp_sub_expr_left_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 381;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            CHECK_OBJECT(var_k);
            tmp_sub_expr_right_4 = var_k;
            tmp_stop_value_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
            Py_DECREF(tmp_sub_expr_left_4);
            if (tmp_stop_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 381;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_tuple_element_9 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_5, tmp_stop_value_6);
            Py_DECREF(tmp_stop_value_6);
            assert(!(tmp_tuple_element_9 == NULL));
            PyTuple_SET_ITEM(tmp_ass_subscript_4, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscript_4);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscript_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 381;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        if (var_j == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[82]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 382;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_iadd_expr_left_2 = var_j;
        if (par_n_components == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[80]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 382;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_sub_expr_left_5 = par_n_components;
        CHECK_OBJECT(var_k);
        tmp_sub_expr_right_5 = var_k;
        tmp_iadd_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 382;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 382;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_35 = tmp_iadd_expr_left_2;
        var_j = tmp_assign_source_35;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 380;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_9 = module_var_accessor_sklearn$manifold$_locally_linear_$$_qr(tstate);
        if (unlikely(tmp_called_value_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[83]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        if (var_Yi == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_value_5 = var_Yi;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 384;
        tmp_iter_arg_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_5);
        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_36 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_37 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_38 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_38;
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



            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_5;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_39;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_39 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_Q;
            var_Q = tmp_assign_source_39;
            Py_INCREF(var_Q);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_40 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_R;
            var_R = tmp_assign_source_40;
            Py_INCREF(var_R);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_tuple_element_10;
        CHECK_OBJECT(var_Q);
        tmp_expression_value_28 = var_Q;
        tmp_tuple_element_10 = mod_consts[20];
        tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_start_value_6;
            PyObject *tmp_add_expr_left_12;
            PyObject *tmp_add_expr_right_12;
            PyObject *tmp_stop_value_7;
            PyTuple_SET_ITEM0(tmp_subscript_value_12, 0, tmp_tuple_element_10);
            if (par_n_components == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[80]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 386;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }

            tmp_add_expr_left_12 = par_n_components;
            tmp_add_expr_right_12 = const_int_pos_1;
            tmp_start_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_12, tmp_add_expr_right_12);
            if (tmp_start_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 386;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            tmp_stop_value_7 = Py_None;
            tmp_tuple_element_10 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_6, tmp_stop_value_7);
            Py_DECREF(tmp_start_value_6);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_12, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_subscript_value_12);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_assign_source_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_12);
        Py_DECREF(tmp_subscript_value_12);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 386;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_w;
            var_w = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(var_w);
        tmp_called_instance_5 = var_w;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 387;
        tmp_assign_source_42 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_5,
            mod_consts[18],
            PyTuple_GET_ITEM(mod_consts[76], 0)
        );

        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 387;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_S;
            var_S = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_abs_arg_1;
        tmp_ass_subvalue_5 = const_int_pos_1;
        CHECK_OBJECT(var_S);
        tmp_ass_subscribed_5 = var_S;
        tmp_expression_value_29 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_29 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 389;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[84]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 389;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_S);
        tmp_abs_arg_1 = var_S;
        tmp_cmp_expr_left_11 = BUILTIN_ABS(tmp_abs_arg_1);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 389;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(par_hessian_tol);
        tmp_cmp_expr_right_11 = par_hessian_tol;
        tmp_args_element_value_6 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 389;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 389;
        tmp_ass_subscript_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_ass_subscript_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 389;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subscript_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 389;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_itruediv_expr_left_1;
        PyObject *tmp_itruediv_expr_right_1;
        CHECK_OBJECT(var_w);
        tmp_itruediv_expr_left_1 = var_w;
        CHECK_OBJECT(var_S);
        tmp_itruediv_expr_right_1 = var_S;
        tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_1, tmp_itruediv_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_43 = tmp_itruediv_expr_left_1;
        var_w = tmp_assign_source_43;

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_14;
        tmp_expression_value_30 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_30 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[85]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_neighbors);
        tmp_expression_value_31 = var_neighbors;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_13 = var_i;
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_13);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_neighbors);
        tmp_expression_value_32 = var_neighbors;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_14 = var_i;
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_14);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 392;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_iter_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_44 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_45 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_46 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_46;
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



            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_lineno_7 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_7 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_9;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_lineno_8 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_8 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_5;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_47 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_nbrs_x;
            var_nbrs_x = tmp_assign_source_47;
            Py_INCREF(var_nbrs_x);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_48;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_48 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_nbrs_y;
            var_nbrs_y = tmp_assign_source_48;
            Py_INCREF(var_nbrs_y);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_49;
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[49]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_assign_source_49 = var_M;
        {
            PyObject *old = tmp_inplace_assign_subscript_2__target;
            tmp_inplace_assign_subscript_2__target = tmp_assign_source_49;
            Py_INCREF(tmp_inplace_assign_subscript_2__target);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_tuple_element_11;
        CHECK_OBJECT(var_nbrs_x);
        tmp_tuple_element_11 = var_nbrs_x;
        tmp_assign_source_50 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_assign_source_50, 0, tmp_tuple_element_11);
        CHECK_OBJECT(var_nbrs_y);
        tmp_tuple_element_11 = var_nbrs_y;
        PyTuple_SET_ITEM0(tmp_assign_source_50, 1, tmp_tuple_element_11);
        {
            PyObject *old = tmp_inplace_assign_subscript_2__subscript;
            tmp_inplace_assign_subscript_2__subscript = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_15;
        CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
        tmp_expression_value_33 = tmp_inplace_assign_subscript_2__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
        tmp_subscript_value_15 = tmp_inplace_assign_subscript_2__subscript;
        tmp_assign_source_51 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_15);
        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_inplace_assign_subscript_2__value;
            tmp_inplace_assign_subscript_2__value = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
        tmp_iadd_expr_left_3 = tmp_inplace_assign_subscript_2__value;
        tmp_expression_value_34 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_34 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[9]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT(var_w);
        tmp_args_element_value_9 = var_w;
        CHECK_OBJECT(var_w);
        tmp_expression_value_35 = var_w;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[10]);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 393;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_iadd_expr_right_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_iadd_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_52 = tmp_iadd_expr_left_3;
        tmp_inplace_assign_subscript_2__value = tmp_assign_source_52;

    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
        tmp_ass_subvalue_6 = tmp_inplace_assign_subscript_2__value;
        CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
        tmp_ass_subscribed_6 = tmp_inplace_assign_subscript_2__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
        tmp_ass_subscript_6 = tmp_inplace_assign_subscript_2__subscript;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_lineno_9 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_9 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
    Py_DECREF(tmp_inplace_assign_subscript_2__target);
    tmp_inplace_assign_subscript_2__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
    Py_DECREF(tmp_inplace_assign_subscript_2__subscript);
    tmp_inplace_assign_subscript_2__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_2__value);
    tmp_inplace_assign_subscript_2__value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_5;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
    Py_DECREF(tmp_inplace_assign_subscript_2__target);
    tmp_inplace_assign_subscript_2__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
    Py_DECREF(tmp_inplace_assign_subscript_2__subscript);
    tmp_inplace_assign_subscript_2__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
    Py_DECREF(tmp_inplace_assign_subscript_2__value);
    tmp_inplace_assign_subscript_2__value = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 366;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_10 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_10 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_M_sparse);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_M_sparse);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 395;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_13 = module_var_accessor_sklearn$manifold$_locally_linear_$$_csr_matrix(tstate);
        if (unlikely(tmp_called_value_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[33]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 396;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[49]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 396;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_11 = var_M;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 396;
        tmp_assign_source_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_11);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 396;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_M;
            var_M = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    branch_no_11:;
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        CHECK_OBJECT(par_method);
        tmp_cmp_expr_left_12 = par_method;
        tmp_cmp_expr_right_12 = mod_consts[86];
        tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        CHECK_OBJECT(par_n_neighbors);
        tmp_cmp_expr_left_13 = par_n_neighbors;
        CHECK_OBJECT(par_n_components);
        tmp_cmp_expr_right_13 = par_n_components;
        tmp_condition_result_13 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_make_exception_arg_7;
        tmp_make_exception_arg_7 = mod_consts[87];
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 400;
        tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_7);
        assert(!(tmp_raise_type_7 == NULL));
        exception_state.exception_type = tmp_raise_type_7;
        exception_lineno = 400;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_13:;
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        PyObject *tmp_kw_call_dict_value_1_3;
        CHECK_OBJECT(var_nbrs);
        tmp_expression_value_36 = var_nbrs;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[27]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 402;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_X);
        tmp_kw_call_arg_value_0_5 = par_X;
        CHECK_OBJECT(par_n_neighbors);
        tmp_add_expr_left_13 = par_n_neighbors;
        tmp_add_expr_right_13 = const_int_pos_1;
        tmp_kw_call_dict_value_0_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_13, tmp_add_expr_right_13);
        if (tmp_kw_call_dict_value_0_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 403;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_3 = Py_False;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 402;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_3};
            tmp_assign_source_54 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_14, args, kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_kw_call_dict_value_0_5);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 402;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_neighbors == NULL);
        var_neighbors = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_16;
        CHECK_OBJECT(var_neighbors);
        tmp_expression_value_37 = var_neighbors;
        tmp_subscript_value_16 = mod_consts[29];
        tmp_assign_source_55 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_16);
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 405;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_neighbors;
            assert(old != NULL);
            var_neighbors = tmp_assign_source_55;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_tuple_element_12;
        tmp_called_instance_6 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_called_instance_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_tuple_element_12 = var_N;
        tmp_args_element_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
        PyTuple_SET_ITEM0(tmp_args_element_value_12, 0, tmp_tuple_element_12);
        CHECK_OBJECT(par_n_neighbors);
        tmp_tuple_element_12 = par_n_neighbors;
        PyTuple_SET_ITEM0(tmp_args_element_value_12, 1, tmp_tuple_element_12);
        CHECK_OBJECT(par_n_neighbors);
        tmp_tuple_element_12 = par_n_neighbors;
        PyTuple_SET_ITEM0(tmp_args_element_value_12, 2, tmp_tuple_element_12);
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 410;
        tmp_assign_source_56 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts[74], tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_V == NULL);
        var_V = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_15 = LOOKUP_BUILTIN(mod_consts[88]);
        assert(tmp_called_value_15 != NULL);
        CHECK_OBJECT(var_d_in);
        tmp_args_element_value_13 = var_d_in;
        CHECK_OBJECT(par_n_neighbors);
        tmp_args_element_value_14 = par_n_neighbors;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 411;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
        }

        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 411;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nev == NULL);
        var_nev = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_list_element_1;
        tmp_called_instance_7 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_called_instance_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 412;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_list_element_1 = var_N;
        tmp_args_element_value_15 = MAKE_LIST_EMPTY(tstate, 2);
        PyList_SET_ITEM0(tmp_args_element_value_15, 0, tmp_list_element_1);
        CHECK_OBJECT(var_nev);
        tmp_list_element_1 = var_nev;
        PyList_SET_ITEM0(tmp_args_element_value_15, 1, tmp_list_element_1);
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 412;
        tmp_assign_source_58 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts[74], tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 412;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_evals == NULL);
        var_evals = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        CHECK_OBJECT(par_n_neighbors);
        tmp_cmp_expr_left_14 = par_n_neighbors;
        CHECK_OBJECT(var_d_in);
        tmp_cmp_expr_right_14 = var_d_in;
        tmp_assign_source_59 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_use_svd == NULL);
        var_use_svd = tmp_assign_source_59;
    }
    {
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_use_svd);
        tmp_truth_name_4 = CHECK_IF_TRUE(var_use_svd);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_xrange_low_3;
        CHECK_OBJECT(var_N);
        tmp_xrange_low_3 = var_N;
        tmp_iter_arg_6 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_3);
        if (tmp_iter_arg_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_60 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_60;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_61;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_61 = ITERATOR_NEXT_ITERATOR(tmp_next_source_3);
        if (tmp_assign_source_61 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 418;
                goto try_except_handler_12;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_61;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_62;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_62 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_62;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_sub_expr_left_6;
        PyObject *tmp_sub_expr_right_6;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_19;
        CHECK_OBJECT(par_X);
        tmp_expression_value_38 = par_X;
        CHECK_OBJECT(var_neighbors);
        tmp_expression_value_39 = var_neighbors;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_18 = var_i;
        tmp_subscript_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_18);
        if (tmp_subscript_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_sub_expr_left_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_17);
        Py_DECREF(tmp_subscript_value_17);
        if (tmp_sub_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(par_X);
        tmp_expression_value_40 = par_X;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_19 = var_i;
        tmp_sub_expr_right_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_19);
        if (tmp_sub_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_6);

            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_63 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
        Py_DECREF(tmp_sub_expr_left_6);
        Py_DECREF(tmp_sub_expr_right_6);
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_X_nbrs;
            var_X_nbrs = tmp_assign_source_63;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kwargs_value_2;
        tmp_called_value_16 = module_var_accessor_sklearn$manifold$_locally_linear_$$_svd(tstate);
        if (unlikely(tmp_called_value_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[77]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 420;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        CHECK_OBJECT(var_X_nbrs);
        tmp_tuple_element_13 = var_X_nbrs;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_13);
        tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts[89]);
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 420;
        tmp_iter_arg_7 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_iter_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 420;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assign_source_64 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 420;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_64;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_65 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 3);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 420;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_65;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_66 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 3);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 420;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_67 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 2, 3);
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 420;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_3;
            tmp_tuple_unpack_4__element_3 = tmp_assign_source_67;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 3);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 420;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_14:;
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

    goto try_except_handler_13;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_ass_subvalue_7 = tmp_tuple_unpack_4__element_1;
        if (var_V == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[90]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 420;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_ass_subscribed_7 = var_V;
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_7 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 420;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_ass_subvalue_8 = tmp_tuple_unpack_4__element_2;
        if (var_evals == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[91]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 420;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_ass_subscribed_8 = var_evals;
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_8 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 420;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_lineno_12 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_12 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_3);
    tmp_tuple_unpack_4__element_3 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_12;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_68;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_3);
        tmp_assign_source_68 = tmp_tuple_unpack_4__element_3;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_68;
            Py_INCREF(var__);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_3);
    tmp_tuple_unpack_4__element_3 = NULL;

    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 418;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_12;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_lineno_13 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_13 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_ipow_expr_left_1;
        PyObject *tmp_ipow_expr_right_1;
        if (var_evals == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[91]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 421;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ipow_expr_left_1 = var_evals;
        tmp_ipow_expr_right_1 = mod_consts[69];
        tmp_result = INPLACE_OPERATION_POW_OBJECT_LONG(&tmp_ipow_expr_left_1, tmp_ipow_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 421;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_69 = tmp_ipow_expr_left_1;
        var_evals = tmp_assign_source_69;

    }
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_xrange_low_4;
        CHECK_OBJECT(var_N);
        tmp_xrange_low_4 = var_N;
        tmp_iter_arg_8 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_4);
        if (tmp_iter_arg_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 423;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_70 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
        Py_DECREF(tmp_iter_arg_8);
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 423;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_4__for_iterator == NULL);
        tmp_for_loop_4__for_iterator = tmp_assign_source_70;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_71;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_71 = ITERATOR_NEXT_ITERATOR(tmp_next_source_4);
        if (tmp_assign_source_71 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 423;
                goto try_except_handler_15;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_71;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_72;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_72 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_72;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_sub_expr_left_7;
        PyObject *tmp_sub_expr_right_7;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_22;
        CHECK_OBJECT(par_X);
        tmp_expression_value_41 = par_X;
        CHECK_OBJECT(var_neighbors);
        tmp_expression_value_42 = var_neighbors;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_21 = var_i;
        tmp_subscript_value_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_21);
        if (tmp_subscript_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_sub_expr_left_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_20);
        Py_DECREF(tmp_subscript_value_20);
        if (tmp_sub_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(par_X);
        tmp_expression_value_43 = par_X;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_22 = var_i;
        tmp_sub_expr_right_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_22);
        if (tmp_sub_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);

            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_assign_source_73 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
        Py_DECREF(tmp_sub_expr_left_7);
        Py_DECREF(tmp_sub_expr_right_7);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = var_X_nbrs;
            var_X_nbrs = tmp_assign_source_73;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_45;
        tmp_expression_value_44 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_44 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 425;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[9]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 425;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(var_X_nbrs);
        tmp_args_element_value_16 = var_X_nbrs;
        CHECK_OBJECT(var_X_nbrs);
        tmp_expression_value_45 = var_X_nbrs;
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[10]);
        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 425;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 425;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_assign_source_74 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
        }

        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 425;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = var_C_nbrs;
            var_C_nbrs = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_18;
        tmp_called_value_18 = module_var_accessor_sklearn$manifold$_locally_linear_$$_eigh(tstate);
        if (unlikely(tmp_called_value_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[48]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 426;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        CHECK_OBJECT(var_C_nbrs);
        tmp_args_element_value_18 = var_C_nbrs;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 426;
        tmp_iter_arg_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_18);
        if (tmp_iter_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 426;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_assign_source_75 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 426;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__source_iter;
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_75;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_76 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 0, 2);
        if (tmp_assign_source_76 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 426;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_1;
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_76;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_77 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_11, 1, 2);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 426;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_2;
            tmp_tuple_unpack_5__element_2 = tmp_assign_source_77;
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



            exception_lineno = 426;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_lineno_14 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_14 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_16;
    // End of try:
    try_end_14:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_lineno_15 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_15 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_15;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_78;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_78 = tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = var_evi;
            var_evi = tmp_assign_source_78;
            Py_INCREF(var_evi);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_79;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_79 = tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = var_vi;
            var_vi = tmp_assign_source_79;
            Py_INCREF(var_vi);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_23;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        CHECK_OBJECT(var_evi);
        tmp_expression_value_46 = var_evi;
        tmp_subscript_value_23 = mod_consts[92];
        tmp_ass_subvalue_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_23);
        if (tmp_ass_subvalue_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 427;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        if (var_evals == NULL) {
            Py_DECREF(tmp_ass_subvalue_9);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[91]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 427;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_ass_subscribed_9 = var_evals;
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_9 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        Py_DECREF(tmp_ass_subvalue_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 427;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
    }
    {
        PyObject *tmp_ass_subvalue_10;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_ass_subscribed_10;
        PyObject *tmp_ass_subscript_10;
        CHECK_OBJECT(var_vi);
        tmp_expression_value_47 = var_vi;
        tmp_subscript_value_24 = mod_consts[79];
        tmp_ass_subvalue_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_24);
        if (tmp_ass_subvalue_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 428;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        if (var_V == NULL) {
            Py_DECREF(tmp_ass_subvalue_10);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[90]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 428;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_ass_subscribed_10 = var_V;
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_10 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
        Py_DECREF(tmp_ass_subvalue_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 428;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 423;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_15;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_lineno_16 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_16 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    branch_end_14:;
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_called_instance_8;
        tmp_mult_expr_left_5 = mod_consts[93];
        if (var_evals == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[91]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 433;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = var_evals;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 433;
        tmp_mult_expr_right_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_8,
            mod_consts[18],
            PyTuple_GET_ITEM(mod_consts[94], 0)
        );

        if (tmp_mult_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 433;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_80 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        Py_DECREF(tmp_mult_expr_right_5);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 433;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_reg;
            assert(old != NULL);
            par_reg = tmp_assign_source_80;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_21;
        tmp_expression_value_48 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_48 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 435;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[9]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 435;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_V == NULL) {
            Py_DECREF(tmp_called_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[90]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 435;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = var_V;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 435;
        tmp_args_element_value_19 = CALL_METHOD_WITH_ARGS3(
            tstate,
            tmp_called_instance_9,
            mod_consts[95],
            &PyTuple_GET_ITEM(mod_consts[96], 0)
        );

        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 435;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_10 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_called_instance_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 435;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n_neighbors);
        tmp_args_element_value_21 = par_n_neighbors;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 435;
        tmp_args_element_value_20 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_10, mod_consts[8], tmp_args_element_value_21);
        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 435;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 435;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_assign_source_81 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
        }

        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 435;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tmp == NULL);
        var_tmp = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        CHECK_OBJECT(var_tmp);
        tmp_assign_source_82 = var_tmp;
        assert(tmp_inplace_assign_subscript_3__target == NULL);
        Py_INCREF(tmp_assign_source_82);
        tmp_inplace_assign_subscript_3__target = tmp_assign_source_82;
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_tuple_element_14;
        tmp_tuple_element_14 = mod_consts[20];
        tmp_assign_source_83 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_stop_value_8;
            PyTuple_SET_ITEM0(tmp_assign_source_83, 0, tmp_tuple_element_14);
            CHECK_OBJECT(var_nev);
            tmp_stop_value_8 = var_nev;
            tmp_tuple_element_14 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_8);
            assert(!(tmp_tuple_element_14 == NULL));
            PyTuple_SET_ITEM(tmp_assign_source_83, 1, tmp_tuple_element_14);
        }
        assert(tmp_inplace_assign_subscript_3__subscript == NULL);
        tmp_inplace_assign_subscript_3__subscript = tmp_assign_source_83;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_25;
        CHECK_OBJECT(tmp_inplace_assign_subscript_3__target);
        tmp_expression_value_49 = tmp_inplace_assign_subscript_3__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_3__subscript);
        tmp_subscript_value_25 = tmp_inplace_assign_subscript_3__subscript;
        tmp_assign_source_84 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_25);
        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 436;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        assert(tmp_inplace_assign_subscript_3__value == NULL);
        tmp_inplace_assign_subscript_3__value = tmp_assign_source_84;
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_itruediv_expr_left_2;
        PyObject *tmp_itruediv_expr_right_2;
        PyObject *tmp_add_expr_left_14;
        PyObject *tmp_add_expr_right_14;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_subscript_value_26;
        CHECK_OBJECT(tmp_inplace_assign_subscript_3__value);
        tmp_itruediv_expr_left_2 = tmp_inplace_assign_subscript_3__value;
        if (var_evals == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[91]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 436;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_add_expr_left_14 = var_evals;
        CHECK_OBJECT(par_reg);
        tmp_expression_value_50 = par_reg;
        tmp_subscript_value_26 = mod_consts[97];
        tmp_add_expr_right_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_26);
        if (tmp_add_expr_right_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 436;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_itruediv_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_14, tmp_add_expr_right_14);
        Py_DECREF(tmp_add_expr_right_14);
        if (tmp_itruediv_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 436;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_2, tmp_itruediv_expr_right_2);
        Py_DECREF(tmp_itruediv_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 436;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_assign_source_85 = tmp_itruediv_expr_left_2;
        tmp_inplace_assign_subscript_3__value = tmp_assign_source_85;

    }
    {
        PyObject *tmp_ass_subvalue_11;
        PyObject *tmp_ass_subscribed_11;
        PyObject *tmp_ass_subscript_11;
        CHECK_OBJECT(tmp_inplace_assign_subscript_3__value);
        tmp_ass_subvalue_11 = tmp_inplace_assign_subscript_3__value;
        CHECK_OBJECT(tmp_inplace_assign_subscript_3__target);
        tmp_ass_subscribed_11 = tmp_inplace_assign_subscript_3__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_3__subscript);
        tmp_ass_subscript_11 = tmp_inplace_assign_subscript_3__subscript;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 436;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_lineno_17 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_17 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_inplace_assign_subscript_3__target);
    Py_DECREF(tmp_inplace_assign_subscript_3__target);
    tmp_inplace_assign_subscript_3__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_3__subscript);
    Py_DECREF(tmp_inplace_assign_subscript_3__subscript);
    tmp_inplace_assign_subscript_3__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_3__value);
    tmp_inplace_assign_subscript_3__value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_inplace_assign_subscript_3__target);
    Py_DECREF(tmp_inplace_assign_subscript_3__target);
    tmp_inplace_assign_subscript_3__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_3__subscript);
    Py_DECREF(tmp_inplace_assign_subscript_3__subscript);
    tmp_inplace_assign_subscript_3__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_3__value);
    Py_DECREF(tmp_inplace_assign_subscript_3__value);
    tmp_inplace_assign_subscript_3__value = NULL;
    {
        PyObject *tmp_assign_source_86;
        CHECK_OBJECT(var_tmp);
        tmp_assign_source_86 = var_tmp;
        assert(tmp_inplace_assign_subscript_4__target == NULL);
        Py_INCREF(tmp_assign_source_86);
        tmp_inplace_assign_subscript_4__target = tmp_assign_source_86;
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_tuple_element_15;
        tmp_tuple_element_15 = mod_consts[20];
        tmp_assign_source_87 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_start_value_7;
            PyObject *tmp_stop_value_9;
            PyTuple_SET_ITEM0(tmp_assign_source_87, 0, tmp_tuple_element_15);
            CHECK_OBJECT(var_nev);
            tmp_start_value_7 = var_nev;
            tmp_stop_value_9 = Py_None;
            tmp_tuple_element_15 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_7, tmp_stop_value_9);
            assert(!(tmp_tuple_element_15 == NULL));
            PyTuple_SET_ITEM(tmp_assign_source_87, 1, tmp_tuple_element_15);
        }
        assert(tmp_inplace_assign_subscript_4__subscript == NULL);
        tmp_inplace_assign_subscript_4__subscript = tmp_assign_source_87;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_subscript_value_27;
        CHECK_OBJECT(tmp_inplace_assign_subscript_4__target);
        tmp_expression_value_51 = tmp_inplace_assign_subscript_4__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_4__subscript);
        tmp_subscript_value_27 = tmp_inplace_assign_subscript_4__subscript;
        tmp_assign_source_88 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_27);
        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        assert(tmp_inplace_assign_subscript_4__value == NULL);
        tmp_inplace_assign_subscript_4__value = tmp_assign_source_88;
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_itruediv_expr_left_3;
        PyObject *tmp_itruediv_expr_right_3;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_subscript_value_28;
        CHECK_OBJECT(tmp_inplace_assign_subscript_4__value);
        tmp_itruediv_expr_left_3 = tmp_inplace_assign_subscript_4__value;
        CHECK_OBJECT(par_reg);
        tmp_expression_value_52 = par_reg;
        tmp_subscript_value_28 = mod_consts[97];
        tmp_itruediv_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_52, tmp_subscript_value_28);
        if (tmp_itruediv_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_3, tmp_itruediv_expr_right_3);
        Py_DECREF(tmp_itruediv_expr_right_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_assign_source_89 = tmp_itruediv_expr_left_3;
        tmp_inplace_assign_subscript_4__value = tmp_assign_source_89;

    }
    {
        PyObject *tmp_ass_subvalue_12;
        PyObject *tmp_ass_subscribed_12;
        PyObject *tmp_ass_subscript_12;
        CHECK_OBJECT(tmp_inplace_assign_subscript_4__value);
        tmp_ass_subvalue_12 = tmp_inplace_assign_subscript_4__value;
        CHECK_OBJECT(tmp_inplace_assign_subscript_4__target);
        tmp_ass_subscribed_12 = tmp_inplace_assign_subscript_4__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_4__subscript);
        tmp_ass_subscript_12 = tmp_inplace_assign_subscript_4__subscript;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_lineno_18 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_18 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_inplace_assign_subscript_4__target);
    Py_DECREF(tmp_inplace_assign_subscript_4__target);
    tmp_inplace_assign_subscript_4__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_4__subscript);
    Py_DECREF(tmp_inplace_assign_subscript_4__subscript);
    tmp_inplace_assign_subscript_4__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_4__value);
    tmp_inplace_assign_subscript_4__value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_inplace_assign_subscript_4__target);
    Py_DECREF(tmp_inplace_assign_subscript_4__target);
    tmp_inplace_assign_subscript_4__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_4__subscript);
    Py_DECREF(tmp_inplace_assign_subscript_4__subscript);
    tmp_inplace_assign_subscript_4__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_4__value);
    Py_DECREF(tmp_inplace_assign_subscript_4__value);
    tmp_inplace_assign_subscript_4__value = NULL;
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_tuple_element_16;
        tmp_called_instance_11 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_called_instance_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 439;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_tuple_element_16 = var_N;
        tmp_args_element_value_22 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_22, 0, tmp_tuple_element_16);
        CHECK_OBJECT(par_n_neighbors);
        tmp_tuple_element_16 = par_n_neighbors;
        PyTuple_SET_ITEM0(tmp_args_element_value_22, 1, tmp_tuple_element_16);
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 439;
        tmp_assign_source_90 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_11, mod_consts[74], tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_assign_source_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 439;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_w_reg == NULL);
        var_w_reg = tmp_assign_source_90;
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_iter_arg_10;
        PyObject *tmp_xrange_low_5;
        CHECK_OBJECT(var_N);
        tmp_xrange_low_5 = var_N;
        tmp_iter_arg_10 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_5);
        if (tmp_iter_arg_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 440;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_91 = MAKE_ITERATOR(tstate, tmp_iter_arg_10);
        Py_DECREF(tmp_iter_arg_10);
        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 440;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_5__for_iterator == NULL);
        tmp_for_loop_5__for_iterator = tmp_assign_source_91;
    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_92;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_5 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_92 = ITERATOR_NEXT_ITERATOR(tmp_next_source_5);
        if (tmp_assign_source_92 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 440;
                goto try_except_handler_20;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_92;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_93;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_assign_source_93 = tmp_for_loop_5__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_93;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_13;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_subscript_value_29;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_ass_subscribed_13;
        PyObject *tmp_ass_subscript_13;
        tmp_expression_value_53 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_53 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 441;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[9]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 441;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        if (var_V == NULL) {
            Py_DECREF(tmp_called_value_20);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[90]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 441;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_expression_value_54 = var_V;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_29 = var_i;
        tmp_args_element_value_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_54, tmp_subscript_value_29);
        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 441;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        CHECK_OBJECT(var_tmp);
        tmp_expression_value_55 = var_tmp;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_30 = var_i;
        tmp_args_element_value_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_30);
        if (tmp_args_element_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 441;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 441;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_ass_subvalue_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
        }

        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_ass_subvalue_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 441;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        if (var_w_reg == NULL) {
            Py_DECREF(tmp_ass_subvalue_13);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[98]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 441;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_ass_subscribed_13 = var_w_reg;
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_13 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
        Py_DECREF(tmp_ass_subvalue_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 441;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 440;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_20;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_lineno_19 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_19 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_itruediv_expr_left_4;
        PyObject *tmp_itruediv_expr_right_4;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_subscript_value_31;
        if (var_w_reg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[98]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_itruediv_expr_left_4 = var_w_reg;
        if (var_w_reg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[98]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_12 = var_w_reg;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 442;
        tmp_expression_value_56 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_12,
            mod_consts[18],
            PyTuple_GET_ITEM(mod_consts[94], 0)
        );

        if (tmp_expression_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_31 = mod_consts[97];
        tmp_itruediv_expr_right_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_56, tmp_subscript_value_31);
        Py_DECREF(tmp_expression_value_56);
        if (tmp_itruediv_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_4, tmp_itruediv_expr_right_4);
        Py_DECREF(tmp_itruediv_expr_right_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 442;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_94 = tmp_itruediv_expr_left_4;
        var_w_reg = tmp_assign_source_94;

    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_32;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_subscript_value_33;
        PyObject *tmp_tuple_element_18;
        if (var_evals == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[91]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_57 = var_evals;
        tmp_tuple_element_17 = mod_consts[20];
        tmp_subscript_value_32 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_start_value_8;
            PyObject *tmp_stop_value_10;
            PyTuple_SET_ITEM0(tmp_subscript_value_32, 0, tmp_tuple_element_17);
            CHECK_OBJECT(par_n_components);
            tmp_start_value_8 = par_n_components;
            tmp_stop_value_10 = Py_None;
            tmp_tuple_element_17 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_8, tmp_stop_value_10);
            assert(!(tmp_tuple_element_17 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_32, 1, tmp_tuple_element_17);
        }
        tmp_called_instance_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_32);
        Py_DECREF(tmp_subscript_value_32);
        if (tmp_called_instance_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 446;
        tmp_truediv_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_13,
            mod_consts[18],
            PyTuple_GET_ITEM(mod_consts[94], 0)
        );

        Py_DECREF(tmp_called_instance_13);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_evals == NULL) {
            Py_DECREF(tmp_truediv_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[91]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_58 = var_evals;
        tmp_tuple_element_18 = mod_consts[20];
        tmp_subscript_value_33 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_stop_value_11;
            PyTuple_SET_ITEM0(tmp_subscript_value_33, 0, tmp_tuple_element_18);
            CHECK_OBJECT(par_n_components);
            tmp_stop_value_11 = par_n_components;
            tmp_tuple_element_18 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_11);
            assert(!(tmp_tuple_element_18 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_33, 1, tmp_tuple_element_18);
        }
        tmp_called_instance_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_58, tmp_subscript_value_33);
        Py_DECREF(tmp_subscript_value_33);
        if (tmp_called_instance_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 446;
        tmp_truediv_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_14,
            mod_consts[18],
            PyTuple_GET_ITEM(mod_consts[94], 0)
        );

        Py_DECREF(tmp_called_instance_14);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_95 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_assign_source_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rho == NULL);
        var_rho = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_args_element_value_25;
        tmp_called_instance_15 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_called_instance_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 447;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rho);
        tmp_args_element_value_25 = var_rho;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 447;
        tmp_assign_source_96 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_15, mod_consts[99], tmp_args_element_value_25);
        if (tmp_assign_source_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 447;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_eta == NULL);
        var_eta = tmp_assign_source_96;
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_kwargs_value_3;
        tmp_expression_value_59 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_59 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[74]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_tuple_element_19 = var_N;
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_19);
        tmp_kwargs_value_3 = DICT_COPY(tstate, mod_consts[3]);
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 452;
        tmp_assign_source_97 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_assign_source_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_s_range == NULL);
        var_s_range = tmp_assign_source_97;
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        tmp_called_value_22 = module_var_accessor_sklearn$manifold$_locally_linear_$$_stable_cumsum(tstate);
        if (unlikely(tmp_called_value_22 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[100]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 453;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_evals == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[91]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 453;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_26 = var_evals;
        tmp_args_element_value_27 = const_int_pos_1;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 453;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_assign_source_98 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_22, call_args);
        }

        if (tmp_assign_source_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 453;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_evals_cumsum == NULL);
        var_evals_cumsum = tmp_assign_source_98;
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_sub_expr_left_8;
        PyObject *tmp_sub_expr_right_8;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_subscript_value_34;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_subscript_value_35;
        CHECK_OBJECT(var_evals_cumsum);
        tmp_expression_value_60 = var_evals_cumsum;
        tmp_subscript_value_34 = mod_consts[101];
        tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_60, tmp_subscript_value_34);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 454;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_evals_cumsum);
        tmp_expression_value_61 = var_evals_cumsum;
        tmp_subscript_value_35 = mod_consts[102];
        tmp_truediv_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_35);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 454;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_sub_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 454;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_8 = const_int_pos_1;
        tmp_assign_source_99 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
        Py_DECREF(tmp_sub_expr_left_8);
        if (tmp_assign_source_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 454;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_eta_range == NULL);
        var_eta_range = tmp_assign_source_99;
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_iter_arg_11;
        PyObject *tmp_xrange_low_6;
        CHECK_OBJECT(var_N);
        tmp_xrange_low_6 = var_N;
        tmp_iter_arg_11 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_6);
        if (tmp_iter_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 455;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_100 = MAKE_ITERATOR(tstate, tmp_iter_arg_11);
        Py_DECREF(tmp_iter_arg_11);
        if (tmp_assign_source_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 455;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_6__for_iterator == NULL);
        tmp_for_loop_6__for_iterator = tmp_assign_source_100;
    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_101;
        CHECK_OBJECT(tmp_for_loop_6__for_iterator);
        tmp_next_source_6 = tmp_for_loop_6__for_iterator;
        tmp_assign_source_101 = ITERATOR_NEXT_ITERATOR(tmp_next_source_6);
        if (tmp_assign_source_101 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 455;
                goto try_except_handler_21;
            }
        }

        {
            PyObject *old = tmp_for_loop_6__iter_value;
            tmp_for_loop_6__iter_value = tmp_assign_source_101;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_102;
        CHECK_OBJECT(tmp_for_loop_6__iter_value);
        tmp_assign_source_102 = tmp_for_loop_6__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_102;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_14;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_subscript_value_36;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_ass_subscribed_14;
        PyObject *tmp_ass_subscript_14;
        tmp_expression_value_62 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_62 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[103]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        CHECK_OBJECT(var_eta_range);
        tmp_expression_value_63 = var_eta_range;
        CHECK_OBJECT(var_i);
        tmp_tuple_element_20 = var_i;
        tmp_subscript_value_36 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_subscript_value_36, 0, tmp_tuple_element_20);
        tmp_tuple_element_20 = mod_consts[92];
        PyTuple_SET_ITEM0(tmp_subscript_value_36, 1, tmp_tuple_element_20);
        tmp_args_element_value_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_36);
        Py_DECREF(tmp_subscript_value_36);
        if (tmp_args_element_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        if (var_eta == NULL) {
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_28);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[104]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_args_element_value_29 = var_eta;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 456;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_ass_subvalue_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_ass_subvalue_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        if (var_s_range == NULL) {
            Py_DECREF(tmp_ass_subvalue_14);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[105]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_ass_subscribed_14 = var_s_range;
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_14 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
        Py_DECREF(tmp_ass_subvalue_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 455;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_21;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_20;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_lineno_20 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_20 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        PyObject *tmp_sub_expr_left_9;
        PyObject *tmp_sub_expr_right_9;
        if (var_s_range == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[105]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_4 = var_s_range;
        CHECK_OBJECT(par_n_neighbors);
        tmp_sub_expr_left_9 = par_n_neighbors;
        CHECK_OBJECT(var_nev);
        tmp_sub_expr_right_9 = var_nev;
        tmp_iadd_expr_right_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_9, tmp_sub_expr_right_9);
        if (tmp_iadd_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        Py_DECREF(tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_103 = tmp_iadd_expr_left_4;
        var_s_range = tmp_assign_source_103;

    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_kw_call_dict_value_0_6;
        PyObject *tmp_expression_value_65;
        tmp_expression_value_64 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_64 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 461;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[74]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 461;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_tuple_element_21 = var_N;
        tmp_kw_call_arg_value_0_6 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_6, 0, tmp_tuple_element_21);
        CHECK_OBJECT(var_N);
        tmp_tuple_element_21 = var_N;
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_6, 1, tmp_tuple_element_21);
        tmp_expression_value_65 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_65 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_kw_call_arg_value_0_6);

            exception_lineno = 461;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[72]);
        if (tmp_kw_call_dict_value_0_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_kw_call_arg_value_0_6);

            exception_lineno = 461;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 461;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
            tmp_assign_source_104 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_24, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_kw_call_arg_value_0_6);
        Py_DECREF(tmp_kw_call_dict_value_0_6);
        if (tmp_assign_source_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 461;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_M == NULL);
        var_M = tmp_assign_source_104;
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_iter_arg_12;
        PyObject *tmp_xrange_low_7;
        CHECK_OBJECT(var_N);
        tmp_xrange_low_7 = var_N;
        tmp_iter_arg_12 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_7);
        if (tmp_iter_arg_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_105 = MAKE_ITERATOR(tstate, tmp_iter_arg_12);
        Py_DECREF(tmp_iter_arg_12);
        if (tmp_assign_source_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_7__for_iterator == NULL);
        tmp_for_loop_7__for_iterator = tmp_assign_source_105;
    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_106;
        CHECK_OBJECT(tmp_for_loop_7__for_iterator);
        tmp_next_source_7 = tmp_for_loop_7__for_iterator;
        tmp_assign_source_106 = ITERATOR_NEXT_ITERATOR(tmp_next_source_7);
        if (tmp_assign_source_106 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_7;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 462;
                goto try_except_handler_22;
            }
        }

        {
            PyObject *old = tmp_for_loop_7__iter_value;
            tmp_for_loop_7__iter_value = tmp_assign_source_106;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_107;
        CHECK_OBJECT(tmp_for_loop_7__iter_value);
        tmp_assign_source_107 = tmp_for_loop_7__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_107;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_subscript_value_37;
        CHECK_OBJECT(var_s_range);
        tmp_expression_value_66 = var_s_range;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_37 = var_i;
        tmp_assign_source_108 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_66, tmp_subscript_value_37);
        if (tmp_assign_source_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 463;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        {
            PyObject *old = var_s_i;
            var_s_i = tmp_assign_source_108;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_subscript_value_38;
        PyObject *tmp_tuple_element_22;
        if (var_V == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[90]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 466;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_expression_value_67 = var_V;
        CHECK_OBJECT(var_i);
        tmp_tuple_element_22 = var_i;
        tmp_subscript_value_38 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_start_value_9;
            PyObject *tmp_sub_expr_left_10;
            PyObject *tmp_sub_expr_right_10;
            PyObject *tmp_stop_value_12;
            PyTuple_SET_ITEM0(tmp_subscript_value_38, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = mod_consts[20];
            PyTuple_SET_ITEM0(tmp_subscript_value_38, 1, tmp_tuple_element_22);
            if (par_n_neighbors == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[14]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 466;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_8;
            }

            tmp_sub_expr_left_10 = par_n_neighbors;
            CHECK_OBJECT(var_s_i);
            tmp_sub_expr_right_10 = var_s_i;
            tmp_start_value_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_10, tmp_sub_expr_right_10);
            if (tmp_start_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 466;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            tmp_stop_value_12 = Py_None;
            tmp_tuple_element_22 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_9, tmp_stop_value_12);
            Py_DECREF(tmp_start_value_9);
            assert(!(tmp_tuple_element_22 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_38, 2, tmp_tuple_element_22);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_subscript_value_38);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_assign_source_109 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_67, tmp_subscript_value_38);
        Py_DECREF(tmp_subscript_value_38);
        if (tmp_assign_source_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 466;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        {
            PyObject *old = var_Vi;
            var_Vi = tmp_assign_source_109;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_args_element_value_31;
        tmp_expression_value_69 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_69 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 467;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_expression_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[106]);
        if (tmp_expression_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 467;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[107]);
        Py_DECREF(tmp_expression_value_68);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 467;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(var_Vi);
        tmp_called_instance_16 = var_Vi;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 467;
        tmp_args_element_value_30 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_16,
            mod_consts[18],
            PyTuple_GET_ITEM(mod_consts[76], 0)
        );

        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 467;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 467;
        tmp_truediv_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 467;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_called_instance_17 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_called_instance_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_truediv_expr_left_3);

            exception_lineno = 467;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(var_s_i);
        tmp_args_element_value_31 = var_s_i;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 467;
        tmp_truediv_expr_right_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_17, mod_consts[108], tmp_args_element_value_31);
        if (tmp_truediv_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_truediv_expr_left_3);

            exception_lineno = 467;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_assign_source_110 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        Py_DECREF(tmp_truediv_expr_right_3);
        if (tmp_assign_source_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 467;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        {
            PyObject *old = var_alpha_i;
            var_alpha_i = tmp_assign_source_110;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_sub_expr_left_11;
        PyObject *tmp_sub_expr_right_11;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_args_element_value_36;
        tmp_called_instance_18 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_called_instance_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_called_instance_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(var_s_i);
        tmp_args_element_value_32 = var_s_i;
        CHECK_OBJECT(var_alpha_i);
        tmp_args_element_value_33 = var_alpha_i;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 472;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33};
            tmp_sub_expr_left_11 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_18,
                mod_consts[109],
                call_args
            );
        }

        if (tmp_sub_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_expression_value_70 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_70 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_sub_expr_left_11);

            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[9]);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_11);

            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(var_Vi);
        tmp_expression_value_71 = var_Vi;
        tmp_args_element_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[10]);
        if (tmp_args_element_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_11);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_expression_value_72 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_72 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_sub_expr_left_11);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_34);

            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[8]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_11);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_34);

            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        if (par_n_neighbors == NULL) {
            Py_DECREF(tmp_sub_expr_left_11);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_called_value_27);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[14]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_args_element_value_36 = par_n_neighbors;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 472;
        tmp_args_element_value_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_27);
        if (tmp_args_element_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_11);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_34);

            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 472;
        {
            PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35};
            tmp_sub_expr_right_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_26, call_args);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_34);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_sub_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_11);

            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_assign_source_111 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_11, tmp_sub_expr_right_11);
        Py_DECREF(tmp_sub_expr_left_11);
        Py_DECREF(tmp_sub_expr_right_11);
        if (tmp_assign_source_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        {
            PyObject *old = var_h;
            var_h = tmp_assign_source_111;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_args_element_value_37;
        tmp_expression_value_73 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_73 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 474;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_called_instance_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[106]);
        if (tmp_called_instance_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 474;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(var_h);
        tmp_args_element_value_37 = var_h;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 474;
        tmp_assign_source_112 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_19, mod_consts[107], tmp_args_element_value_37);
        Py_DECREF(tmp_called_instance_19);
        if (tmp_assign_source_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 474;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        {
            PyObject *old = var_norm_h;
            var_norm_h = tmp_assign_source_112;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        CHECK_OBJECT(var_norm_h);
        tmp_cmp_expr_left_15 = var_norm_h;
        CHECK_OBJECT(par_modified_tol);
        tmp_cmp_expr_right_15 = par_modified_tol;
        tmp_condition_result_15 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 475;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_imult_expr_left_1;
        PyObject *tmp_imult_expr_right_1;
        CHECK_OBJECT(var_h);
        tmp_imult_expr_left_1 = var_h;
        tmp_imult_expr_right_1 = const_int_0;
        tmp_result = INPLACE_OPERATION_MULT_OBJECT_LONG(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_assign_source_113 = tmp_imult_expr_left_1;
        var_h = tmp_assign_source_113;

    }
    goto branch_end_15;
    branch_no_15:;
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_itruediv_expr_left_5;
        PyObject *tmp_itruediv_expr_right_5;
        CHECK_OBJECT(var_h);
        tmp_itruediv_expr_left_5 = var_h;
        CHECK_OBJECT(var_norm_h);
        tmp_itruediv_expr_right_5 = var_norm_h;
        tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_5, tmp_itruediv_expr_right_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 478;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_assign_source_114 = tmp_itruediv_expr_left_5;
        var_h = tmp_assign_source_114;

    }
    branch_end_15:;
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_add_expr_left_15;
        PyObject *tmp_add_expr_right_15;
        PyObject *tmp_sub_expr_left_12;
        PyObject *tmp_sub_expr_right_12;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        PyObject *tmp_sub_expr_left_13;
        PyObject *tmp_sub_expr_right_13;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_subscript_value_39;
        PyObject *tmp_tuple_element_23;
        CHECK_OBJECT(var_Vi);
        tmp_sub_expr_left_12 = var_Vi;
        tmp_mult_expr_left_6 = mod_consts[69];
        tmp_expression_value_74 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_74 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 485;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[110]);
        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 485;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_called_instance_20 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_called_instance_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_called_instance_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_28);

            exception_lineno = 485;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(var_Vi);
        tmp_args_element_value_39 = var_Vi;
        CHECK_OBJECT(var_h);
        tmp_args_element_value_40 = var_h;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 485;
        {
            PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40};
            tmp_args_element_value_38 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_20,
                mod_consts[9],
                call_args
            );
        }

        if (tmp_args_element_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 485;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(var_h);
        tmp_args_element_value_41 = var_h;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 485;
        {
            PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_41};
            tmp_mult_expr_right_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_28, call_args);
        }

        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_mult_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 485;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_sub_expr_right_12 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        Py_DECREF(tmp_mult_expr_right_6);
        if (tmp_sub_expr_right_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 485;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_add_expr_left_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_12, tmp_sub_expr_right_12);
        Py_DECREF(tmp_sub_expr_right_12);
        if (tmp_add_expr_left_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 485;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_sub_expr_left_13 = const_int_pos_1;
        CHECK_OBJECT(var_alpha_i);
        tmp_sub_expr_right_13 = var_alpha_i;
        tmp_mult_expr_left_7 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_13, tmp_sub_expr_right_13);
        if (tmp_mult_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_15);

            exception_lineno = 485;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(var_w_reg);
        tmp_expression_value_75 = var_w_reg;
        CHECK_OBJECT(var_i);
        tmp_tuple_element_23 = var_i;
        tmp_subscript_value_39 = MAKE_TUPLE_EMPTY(tstate, 3);
        PyTuple_SET_ITEM0(tmp_subscript_value_39, 0, tmp_tuple_element_23);
        tmp_tuple_element_23 = mod_consts[20];
        PyTuple_SET_ITEM0(tmp_subscript_value_39, 1, tmp_tuple_element_23);
        tmp_tuple_element_23 = Py_None;
        PyTuple_SET_ITEM0(tmp_subscript_value_39, 2, tmp_tuple_element_23);
        tmp_mult_expr_right_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_75, tmp_subscript_value_39);
        Py_DECREF(tmp_subscript_value_39);
        if (tmp_mult_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_15);
            Py_DECREF(tmp_mult_expr_left_7);

            exception_lineno = 485;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_add_expr_right_15 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        Py_DECREF(tmp_mult_expr_left_7);
        Py_DECREF(tmp_mult_expr_right_7);
        if (tmp_add_expr_right_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_15);

            exception_lineno = 485;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_assign_source_115 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_15, tmp_add_expr_right_15);
        Py_DECREF(tmp_add_expr_left_15);
        Py_DECREF(tmp_add_expr_right_15);
        if (tmp_assign_source_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 485;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        {
            PyObject *old = var_Wi;
            var_Wi = tmp_assign_source_115;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_iter_arg_13;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_subscript_value_40;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_subscript_value_41;
        tmp_expression_value_76 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_76 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_76 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 493;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[85]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 493;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_neighbors);
        tmp_expression_value_77 = var_neighbors;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_40 = var_i;
        tmp_args_element_value_42 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_77, tmp_subscript_value_40);
        if (tmp_args_element_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 493;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_neighbors);
        tmp_expression_value_78 = var_neighbors;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_41 = var_i;
        tmp_args_element_value_43 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_78, tmp_subscript_value_41);
        if (tmp_args_element_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_42);

            exception_lineno = 493;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 493;
        {
            PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43};
            tmp_iter_arg_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_29, call_args);
        }

        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_element_value_42);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_iter_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 493;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_116 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_13);
        Py_DECREF(tmp_iter_arg_13);
        if (tmp_assign_source_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 493;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__source_iter;
            tmp_tuple_unpack_6__source_iter = tmp_assign_source_116;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_117 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_12, 0, 2);
        if (tmp_assign_source_117 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 493;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_1;
            tmp_tuple_unpack_6__element_1 = tmp_assign_source_117;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_118 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_13, 1, 2);
        if (tmp_assign_source_118 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 493;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_2;
            tmp_tuple_unpack_6__element_2 = tmp_assign_source_118;
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



            exception_lineno = 493;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_lineno_21 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_21 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_21;
    exception_lineno = exception_keeper_lineno_21;

    goto try_except_handler_23;
    // End of try:
    try_end_21:;
    goto try_end_22;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_lineno_22 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_22 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_22;
    // End of try:
    try_end_22:;
    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    {
        PyObject *tmp_assign_source_119;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
        tmp_assign_source_119 = tmp_tuple_unpack_6__element_1;
        {
            PyObject *old = var_nbrs_x;
            var_nbrs_x = tmp_assign_source_119;
            Py_INCREF(var_nbrs_x);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_120;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
        tmp_assign_source_120 = tmp_tuple_unpack_6__element_2;
        {
            PyObject *old = var_nbrs_y;
            var_nbrs_y = tmp_assign_source_120;
            Py_INCREF(var_nbrs_y);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;

    {
        PyObject *tmp_assign_source_121;
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[49]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 494;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_assign_source_121 = var_M;
        {
            PyObject *old = tmp_inplace_assign_subscript_5__target;
            tmp_inplace_assign_subscript_5__target = tmp_assign_source_121;
            Py_INCREF(tmp_inplace_assign_subscript_5__target);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_tuple_element_24;
        CHECK_OBJECT(var_nbrs_x);
        tmp_tuple_element_24 = var_nbrs_x;
        tmp_assign_source_122 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_assign_source_122, 0, tmp_tuple_element_24);
        CHECK_OBJECT(var_nbrs_y);
        tmp_tuple_element_24 = var_nbrs_y;
        PyTuple_SET_ITEM0(tmp_assign_source_122, 1, tmp_tuple_element_24);
        {
            PyObject *old = tmp_inplace_assign_subscript_5__subscript;
            tmp_inplace_assign_subscript_5__subscript = tmp_assign_source_122;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_subscript_value_42;
        CHECK_OBJECT(tmp_inplace_assign_subscript_5__target);
        tmp_expression_value_79 = tmp_inplace_assign_subscript_5__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_5__subscript);
        tmp_subscript_value_42 = tmp_inplace_assign_subscript_5__subscript;
        tmp_assign_source_123 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_79, tmp_subscript_value_42);
        if (tmp_assign_source_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 494;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
        {
            PyObject *old = tmp_inplace_assign_subscript_5__value;
            tmp_inplace_assign_subscript_5__value = tmp_assign_source_123;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_iadd_expr_left_5;
        PyObject *tmp_iadd_expr_right_5;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_expression_value_81;
        CHECK_OBJECT(tmp_inplace_assign_subscript_5__value);
        tmp_iadd_expr_left_5 = tmp_inplace_assign_subscript_5__value;
        tmp_expression_value_80 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_80 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 494;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[9]);
        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 494;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
        CHECK_OBJECT(var_Wi);
        tmp_args_element_value_44 = var_Wi;
        CHECK_OBJECT(var_Wi);
        tmp_expression_value_81 = var_Wi;
        tmp_args_element_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[10]);
        if (tmp_args_element_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 494;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 494;
        {
            PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45};
            tmp_iadd_expr_right_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_30, call_args);
        }

        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_45);
        if (tmp_iadd_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 494;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
        Py_DECREF(tmp_iadd_expr_right_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 494;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
        tmp_assign_source_124 = tmp_iadd_expr_left_5;
        tmp_inplace_assign_subscript_5__value = tmp_assign_source_124;

    }
    {
        PyObject *tmp_ass_subvalue_15;
        PyObject *tmp_ass_subscribed_15;
        PyObject *tmp_ass_subscript_15;
        CHECK_OBJECT(tmp_inplace_assign_subscript_5__value);
        tmp_ass_subvalue_15 = tmp_inplace_assign_subscript_5__value;
        CHECK_OBJECT(tmp_inplace_assign_subscript_5__target);
        tmp_ass_subscribed_15 = tmp_inplace_assign_subscript_5__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_5__subscript);
        tmp_ass_subscript_15 = tmp_inplace_assign_subscript_5__subscript;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 494;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_lineno_23 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_23 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_inplace_assign_subscript_5__target);
    Py_DECREF(tmp_inplace_assign_subscript_5__target);
    tmp_inplace_assign_subscript_5__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_5__subscript);
    Py_DECREF(tmp_inplace_assign_subscript_5__subscript);
    tmp_inplace_assign_subscript_5__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_5__value);
    tmp_inplace_assign_subscript_5__value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_23;
    exception_lineno = exception_keeper_lineno_23;

    goto try_except_handler_22;
    // End of try:
    try_end_23:;
    CHECK_OBJECT(tmp_inplace_assign_subscript_5__target);
    Py_DECREF(tmp_inplace_assign_subscript_5__target);
    tmp_inplace_assign_subscript_5__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_5__subscript);
    Py_DECREF(tmp_inplace_assign_subscript_5__subscript);
    tmp_inplace_assign_subscript_5__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_5__value);
    Py_DECREF(tmp_inplace_assign_subscript_5__value);
    tmp_inplace_assign_subscript_5__value = NULL;
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_called_instance_21;
        CHECK_OBJECT(var_Wi);
        tmp_called_instance_21 = var_Wi;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 495;
        tmp_assign_source_125 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_21,
            mod_consts[18],
            PyTuple_GET_ITEM(mod_consts[94], 0)
        );

        if (tmp_assign_source_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 495;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        {
            PyObject *old = var_Wi_sum1;
            var_Wi_sum1 = tmp_assign_source_125;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_126;
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[49]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 496;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_assign_source_126 = var_M;
        {
            PyObject *old = tmp_inplace_assign_subscript_6__target;
            tmp_inplace_assign_subscript_6__target = tmp_assign_source_126;
            Py_INCREF(tmp_inplace_assign_subscript_6__target);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_tuple_element_25;
        CHECK_OBJECT(var_i);
        tmp_tuple_element_25 = var_i;
        tmp_assign_source_127 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_82;
            PyObject *tmp_subscript_value_43;
            PyTuple_SET_ITEM0(tmp_assign_source_127, 0, tmp_tuple_element_25);
            CHECK_OBJECT(var_neighbors);
            tmp_expression_value_82 = var_neighbors;
            CHECK_OBJECT(var_i);
            tmp_subscript_value_43 = var_i;
            tmp_tuple_element_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_82, tmp_subscript_value_43);
            if (tmp_tuple_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 496;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_127, 1, tmp_tuple_element_25);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_assign_source_127);
        goto try_except_handler_26;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        {
            PyObject *old = tmp_inplace_assign_subscript_6__subscript;
            tmp_inplace_assign_subscript_6__subscript = tmp_assign_source_127;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_subscript_value_44;
        CHECK_OBJECT(tmp_inplace_assign_subscript_6__target);
        tmp_expression_value_83 = tmp_inplace_assign_subscript_6__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_6__subscript);
        tmp_subscript_value_44 = tmp_inplace_assign_subscript_6__subscript;
        tmp_assign_source_128 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_83, tmp_subscript_value_44);
        if (tmp_assign_source_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 496;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        {
            PyObject *old = tmp_inplace_assign_subscript_6__value;
            tmp_inplace_assign_subscript_6__value = tmp_assign_source_128;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_isub_expr_left_2;
        PyObject *tmp_isub_expr_right_2;
        CHECK_OBJECT(tmp_inplace_assign_subscript_6__value);
        tmp_isub_expr_left_2 = tmp_inplace_assign_subscript_6__value;
        CHECK_OBJECT(var_Wi_sum1);
        tmp_isub_expr_right_2 = var_Wi_sum1;
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_2, tmp_isub_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 496;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_assign_source_129 = tmp_isub_expr_left_2;
        tmp_inplace_assign_subscript_6__value = tmp_assign_source_129;

    }
    {
        PyObject *tmp_ass_subvalue_16;
        PyObject *tmp_ass_subscribed_16;
        PyObject *tmp_ass_subscript_16;
        CHECK_OBJECT(tmp_inplace_assign_subscript_6__value);
        tmp_ass_subvalue_16 = tmp_inplace_assign_subscript_6__value;
        CHECK_OBJECT(tmp_inplace_assign_subscript_6__target);
        tmp_ass_subscribed_16 = tmp_inplace_assign_subscript_6__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_6__subscript);
        tmp_ass_subscript_16 = tmp_inplace_assign_subscript_6__subscript;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 496;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_lineno_24 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_24 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_inplace_assign_subscript_6__target);
    Py_DECREF(tmp_inplace_assign_subscript_6__target);
    tmp_inplace_assign_subscript_6__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_6__subscript);
    tmp_inplace_assign_subscript_6__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_6__value);
    tmp_inplace_assign_subscript_6__value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_24;
    exception_lineno = exception_keeper_lineno_24;

    goto try_except_handler_22;
    // End of try:
    try_end_24:;
    CHECK_OBJECT(tmp_inplace_assign_subscript_6__target);
    Py_DECREF(tmp_inplace_assign_subscript_6__target);
    tmp_inplace_assign_subscript_6__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_6__subscript);
    Py_DECREF(tmp_inplace_assign_subscript_6__subscript);
    tmp_inplace_assign_subscript_6__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_6__value);
    Py_DECREF(tmp_inplace_assign_subscript_6__value);
    tmp_inplace_assign_subscript_6__value = NULL;
    {
        PyObject *tmp_assign_source_130;
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[49]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 497;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_assign_source_130 = var_M;
        {
            PyObject *old = tmp_inplace_assign_subscript_7__target;
            tmp_inplace_assign_subscript_7__target = tmp_assign_source_130;
            Py_INCREF(tmp_inplace_assign_subscript_7__target);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_subscript_value_45;
        CHECK_OBJECT(var_neighbors);
        tmp_expression_value_84 = var_neighbors;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_45 = var_i;
        tmp_tuple_element_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_84, tmp_subscript_value_45);
        if (tmp_tuple_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 497;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_assign_source_131 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM(tmp_assign_source_131, 0, tmp_tuple_element_26);
        CHECK_OBJECT(var_i);
        tmp_tuple_element_26 = var_i;
        PyTuple_SET_ITEM0(tmp_assign_source_131, 1, tmp_tuple_element_26);
        {
            PyObject *old = tmp_inplace_assign_subscript_7__subscript;
            tmp_inplace_assign_subscript_7__subscript = tmp_assign_source_131;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_subscript_value_46;
        CHECK_OBJECT(tmp_inplace_assign_subscript_7__target);
        tmp_expression_value_85 = tmp_inplace_assign_subscript_7__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_7__subscript);
        tmp_subscript_value_46 = tmp_inplace_assign_subscript_7__subscript;
        tmp_assign_source_132 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_85, tmp_subscript_value_46);
        if (tmp_assign_source_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 497;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        {
            PyObject *old = tmp_inplace_assign_subscript_7__value;
            tmp_inplace_assign_subscript_7__value = tmp_assign_source_132;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_isub_expr_left_3;
        PyObject *tmp_isub_expr_right_3;
        CHECK_OBJECT(tmp_inplace_assign_subscript_7__value);
        tmp_isub_expr_left_3 = tmp_inplace_assign_subscript_7__value;
        CHECK_OBJECT(var_Wi_sum1);
        tmp_isub_expr_right_3 = var_Wi_sum1;
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_3, tmp_isub_expr_right_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 497;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_assign_source_133 = tmp_isub_expr_left_3;
        tmp_inplace_assign_subscript_7__value = tmp_assign_source_133;

    }
    {
        PyObject *tmp_ass_subvalue_17;
        PyObject *tmp_ass_subscribed_17;
        PyObject *tmp_ass_subscript_17;
        CHECK_OBJECT(tmp_inplace_assign_subscript_7__value);
        tmp_ass_subvalue_17 = tmp_inplace_assign_subscript_7__value;
        CHECK_OBJECT(tmp_inplace_assign_subscript_7__target);
        tmp_ass_subscribed_17 = tmp_inplace_assign_subscript_7__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_7__subscript);
        tmp_ass_subscript_17 = tmp_inplace_assign_subscript_7__subscript;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 497;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_lineno_25 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_25 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_inplace_assign_subscript_7__target);
    Py_DECREF(tmp_inplace_assign_subscript_7__target);
    tmp_inplace_assign_subscript_7__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_7__subscript);
    tmp_inplace_assign_subscript_7__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_7__value);
    tmp_inplace_assign_subscript_7__value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_25;
    exception_lineno = exception_keeper_lineno_25;

    goto try_except_handler_22;
    // End of try:
    try_end_25:;
    CHECK_OBJECT(tmp_inplace_assign_subscript_7__target);
    Py_DECREF(tmp_inplace_assign_subscript_7__target);
    tmp_inplace_assign_subscript_7__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_7__subscript);
    Py_DECREF(tmp_inplace_assign_subscript_7__subscript);
    tmp_inplace_assign_subscript_7__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_7__value);
    Py_DECREF(tmp_inplace_assign_subscript_7__value);
    tmp_inplace_assign_subscript_7__value = NULL;
    {
        PyObject *tmp_assign_source_134;
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[49]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 498;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_assign_source_134 = var_M;
        {
            PyObject *old = tmp_inplace_assign_subscript_8__target;
            tmp_inplace_assign_subscript_8__target = tmp_assign_source_134;
            Py_INCREF(tmp_inplace_assign_subscript_8__target);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_tuple_element_27;
        CHECK_OBJECT(var_i);
        tmp_tuple_element_27 = var_i;
        tmp_assign_source_135 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_assign_source_135, 0, tmp_tuple_element_27);
        CHECK_OBJECT(var_i);
        tmp_tuple_element_27 = var_i;
        PyTuple_SET_ITEM0(tmp_assign_source_135, 1, tmp_tuple_element_27);
        {
            PyObject *old = tmp_inplace_assign_subscript_8__subscript;
            tmp_inplace_assign_subscript_8__subscript = tmp_assign_source_135;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_subscript_value_47;
        CHECK_OBJECT(tmp_inplace_assign_subscript_8__target);
        tmp_expression_value_86 = tmp_inplace_assign_subscript_8__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_8__subscript);
        tmp_subscript_value_47 = tmp_inplace_assign_subscript_8__subscript;
        tmp_assign_source_136 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_86, tmp_subscript_value_47);
        if (tmp_assign_source_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 498;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }
        {
            PyObject *old = tmp_inplace_assign_subscript_8__value;
            tmp_inplace_assign_subscript_8__value = tmp_assign_source_136;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_iadd_expr_left_6;
        PyObject *tmp_iadd_expr_right_6;
        CHECK_OBJECT(tmp_inplace_assign_subscript_8__value);
        tmp_iadd_expr_left_6 = tmp_inplace_assign_subscript_8__value;
        CHECK_OBJECT(var_s_i);
        tmp_iadd_expr_right_6 = var_s_i;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 498;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }
        tmp_assign_source_137 = tmp_iadd_expr_left_6;
        tmp_inplace_assign_subscript_8__value = tmp_assign_source_137;

    }
    {
        PyObject *tmp_ass_subvalue_18;
        PyObject *tmp_ass_subscribed_18;
        PyObject *tmp_ass_subscript_18;
        CHECK_OBJECT(tmp_inplace_assign_subscript_8__value);
        tmp_ass_subvalue_18 = tmp_inplace_assign_subscript_8__value;
        CHECK_OBJECT(tmp_inplace_assign_subscript_8__target);
        tmp_ass_subscribed_18 = tmp_inplace_assign_subscript_8__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_8__subscript);
        tmp_ass_subscript_18 = tmp_inplace_assign_subscript_8__subscript;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 498;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }
    }
    goto try_end_26;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_lineno_26 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_26 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_inplace_assign_subscript_8__target);
    Py_DECREF(tmp_inplace_assign_subscript_8__target);
    tmp_inplace_assign_subscript_8__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_8__subscript);
    Py_DECREF(tmp_inplace_assign_subscript_8__subscript);
    tmp_inplace_assign_subscript_8__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_8__value);
    tmp_inplace_assign_subscript_8__value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_26;
    exception_lineno = exception_keeper_lineno_26;

    goto try_except_handler_22;
    // End of try:
    try_end_26:;
    CHECK_OBJECT(tmp_inplace_assign_subscript_8__target);
    Py_DECREF(tmp_inplace_assign_subscript_8__target);
    tmp_inplace_assign_subscript_8__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_8__subscript);
    Py_DECREF(tmp_inplace_assign_subscript_8__subscript);
    tmp_inplace_assign_subscript_8__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_8__value);
    Py_DECREF(tmp_inplace_assign_subscript_8__value);
    tmp_inplace_assign_subscript_8__value = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 462;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_27;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_lineno_27 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_27 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_27:;
    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_16;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_M_sparse);
        tmp_truth_name_5 = CHECK_IF_TRUE(var_M_sparse);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 500;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_element_value_46;
        tmp_called_value_31 = module_var_accessor_sklearn$manifold$_locally_linear_$$_csr_matrix(tstate);
        if (unlikely(tmp_called_value_31 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[33]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 501;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[49]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 501;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_46 = var_M;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 501;
        tmp_assign_source_138 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_46);
        if (tmp_assign_source_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 501;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_M;
            var_M = tmp_assign_source_138;
            Py_XDECREF(old);
        }

    }
    branch_no_16:;
    goto branch_end_12;
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        CHECK_OBJECT(par_method);
        tmp_cmp_expr_left_16 = par_method;
        tmp_cmp_expr_right_16 = mod_consts[111];
        tmp_condition_result_17 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 503;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_kw_call_dict_value_0_7;
        PyObject *tmp_add_expr_left_16;
        PyObject *tmp_add_expr_right_16;
        PyObject *tmp_kw_call_dict_value_1_4;
        CHECK_OBJECT(var_nbrs);
        tmp_expression_value_87 = var_nbrs;
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[27]);
        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 504;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_X);
        tmp_kw_call_arg_value_0_7 = par_X;
        CHECK_OBJECT(par_n_neighbors);
        tmp_add_expr_left_16 = par_n_neighbors;
        tmp_add_expr_right_16 = const_int_pos_1;
        tmp_kw_call_dict_value_0_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_16, tmp_add_expr_right_16);
        if (tmp_kw_call_dict_value_0_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 505;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_4 = Py_False;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 504;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_7};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_7, tmp_kw_call_dict_value_1_4};
            tmp_assign_source_139 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_32, args, kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_kw_call_dict_value_0_7);
        if (tmp_assign_source_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 504;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_neighbors == NULL);
        var_neighbors = tmp_assign_source_139;
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_subscript_value_48;
        CHECK_OBJECT(var_neighbors);
        tmp_expression_value_88 = var_neighbors;
        tmp_subscript_value_48 = mod_consts[29];
        tmp_assign_source_140 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_88, tmp_subscript_value_48);
        if (tmp_assign_source_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 507;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_neighbors;
            assert(old != NULL);
            var_neighbors = tmp_assign_source_140;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_tuple_element_28;
        tmp_called_instance_22 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_called_instance_22 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_called_instance_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 509;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_tuple_element_28 = var_N;
        tmp_args_element_value_47 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_47, 0, tmp_tuple_element_28);
        CHECK_OBJECT(var_N);
        tmp_tuple_element_28 = var_N;
        PyTuple_SET_ITEM0(tmp_args_element_value_47, 1, tmp_tuple_element_28);
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 509;
        tmp_assign_source_141 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_22, mod_consts[74], tmp_args_element_value_47);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_assign_source_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 509;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_M == NULL);
        var_M = tmp_assign_source_141;
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        CHECK_OBJECT(par_n_neighbors);
        tmp_cmp_expr_left_17 = par_n_neighbors;
        CHECK_OBJECT(var_d_in);
        tmp_cmp_expr_right_17 = var_d_in;
        tmp_assign_source_142 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        if (tmp_assign_source_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 511;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_use_svd == NULL);
        var_use_svd = tmp_assign_source_142;
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_iter_arg_14;
        PyObject *tmp_xrange_low_8;
        CHECK_OBJECT(var_N);
        tmp_xrange_low_8 = var_N;
        tmp_iter_arg_14 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_8);
        if (tmp_iter_arg_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 513;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_143 = MAKE_ITERATOR(tstate, tmp_iter_arg_14);
        Py_DECREF(tmp_iter_arg_14);
        if (tmp_assign_source_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 513;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_8__for_iterator == NULL);
        tmp_for_loop_8__for_iterator = tmp_assign_source_143;
    }
    // Tried code:
    loop_start_8:;
    {
        PyObject *tmp_next_source_8;
        PyObject *tmp_assign_source_144;
        CHECK_OBJECT(tmp_for_loop_8__for_iterator);
        tmp_next_source_8 = tmp_for_loop_8__for_iterator;
        tmp_assign_source_144 = ITERATOR_NEXT_ITERATOR(tmp_next_source_8);
        if (tmp_assign_source_144 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_8;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 513;
                goto try_except_handler_29;
            }
        }

        {
            PyObject *old = tmp_for_loop_8__iter_value;
            tmp_for_loop_8__iter_value = tmp_assign_source_144;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_145;
        CHECK_OBJECT(tmp_for_loop_8__iter_value);
        tmp_assign_source_145 = tmp_for_loop_8__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_145;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_subscript_value_49;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_subscript_value_50;
        CHECK_OBJECT(par_X);
        tmp_expression_value_89 = par_X;
        CHECK_OBJECT(var_neighbors);
        tmp_expression_value_90 = var_neighbors;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_50 = var_i;
        tmp_subscript_value_49 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_90, tmp_subscript_value_50);
        if (tmp_subscript_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 514;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        tmp_assign_source_146 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_89, tmp_subscript_value_49);
        Py_DECREF(tmp_subscript_value_49);
        if (tmp_assign_source_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 514;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        {
            PyObject *old = var_Xi;
            var_Xi = tmp_assign_source_146;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_isub_expr_left_4;
        PyObject *tmp_isub_expr_right_4;
        PyObject *tmp_called_instance_23;
        CHECK_OBJECT(var_Xi);
        tmp_isub_expr_left_4 = var_Xi;
        CHECK_OBJECT(var_Xi);
        tmp_called_instance_23 = var_Xi;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 515;
        tmp_isub_expr_right_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_23,
            mod_consts[75],
            PyTuple_GET_ITEM(mod_consts[76], 0)
        );

        if (tmp_isub_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 515;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_4, tmp_isub_expr_right_4);
        Py_DECREF(tmp_isub_expr_right_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 515;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        tmp_assign_source_147 = tmp_isub_expr_left_4;
        var_Xi = tmp_assign_source_147;

    }
    {
        nuitka_bool tmp_condition_result_18;
        int tmp_truth_name_6;
        CHECK_OBJECT(var_use_svd);
        tmp_truth_name_6 = CHECK_IF_TRUE(var_use_svd);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 518;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        tmp_condition_result_18 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_kwargs_value_4;
        PyObject *tmp_subscript_value_51;
        tmp_called_value_33 = module_var_accessor_sklearn$manifold$_locally_linear_$$_svd(tstate);
        if (unlikely(tmp_called_value_33 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[77]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 519;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        CHECK_OBJECT(var_Xi);
        tmp_tuple_element_29 = var_Xi;
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_29);
        tmp_kwargs_value_4 = DICT_COPY(tstate, mod_consts[89]);
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 519;
        tmp_expression_value_91 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_args_value_4);
        Py_DECREF(tmp_kwargs_value_4);
        if (tmp_expression_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 519;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        tmp_subscript_value_51 = const_int_0;
        tmp_assign_source_148 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_91, tmp_subscript_value_51, 0);
        Py_DECREF(tmp_expression_value_91);
        if (tmp_assign_source_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 519;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_148;
            Py_XDECREF(old);
        }

    }
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_expression_value_93;
        tmp_expression_value_92 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_92 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 521;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[9]);
        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 521;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        CHECK_OBJECT(var_Xi);
        tmp_args_element_value_48 = var_Xi;
        CHECK_OBJECT(var_Xi);
        tmp_expression_value_93 = var_Xi;
        tmp_args_element_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[10]);
        if (tmp_args_element_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 521;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 521;
        {
            PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49};
            tmp_assign_source_149 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_34, call_args);
        }

        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_49);
        if (tmp_assign_source_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 521;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        {
            PyObject *old = var_Ci;
            var_Ci = tmp_assign_source_149;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_subscript_value_52;
        PyObject *tmp_subscript_value_53;
        tmp_called_value_35 = module_var_accessor_sklearn$manifold$_locally_linear_$$_eigh(tstate);
        if (unlikely(tmp_called_value_35 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[48]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 522;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        CHECK_OBJECT(var_Ci);
        tmp_args_element_value_50 = var_Ci;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 522;
        tmp_expression_value_95 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_50);
        if (tmp_expression_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 522;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        tmp_subscript_value_52 = const_int_pos_1;
        tmp_expression_value_94 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_95, tmp_subscript_value_52, 1);
        Py_DECREF(tmp_expression_value_95);
        if (tmp_expression_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 522;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        tmp_subscript_value_53 = mod_consts[79];
        tmp_assign_source_150 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_94, tmp_subscript_value_53);
        Py_DECREF(tmp_expression_value_94);
        if (tmp_assign_source_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 522;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_150;
            Py_XDECREF(old);
        }

    }
    branch_end_18:;
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_tuple_element_30;
        tmp_expression_value_96 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_96 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_96 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 524;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[74]);
        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 524;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        if (par_n_neighbors == NULL) {
            Py_DECREF(tmp_called_value_36);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[14]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 524;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }

        tmp_tuple_element_30 = par_n_neighbors;
        tmp_args_element_value_51 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_add_expr_left_17;
            PyObject *tmp_add_expr_right_17;
            PyTuple_SET_ITEM0(tmp_args_element_value_51, 0, tmp_tuple_element_30);
            if (par_n_components == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[80]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 524;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_10;
            }

            tmp_add_expr_left_17 = par_n_components;
            tmp_add_expr_right_17 = const_int_pos_1;
            tmp_tuple_element_30 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_17, tmp_add_expr_right_17);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 524;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_51, 1, tmp_tuple_element_30);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_args_element_value_51);
        goto try_except_handler_29;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 524;
        tmp_assign_source_151 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_51);
        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_assign_source_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 524;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        {
            PyObject *old = var_Gi;
            var_Gi = tmp_assign_source_151;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_19;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_subscript_value_54;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_ass_subscribed_19;
        PyObject *tmp_ass_subscript_19;
        CHECK_OBJECT(var_v);
        tmp_expression_value_97 = var_v;
        tmp_tuple_element_31 = mod_consts[20];
        tmp_subscript_value_54 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_stop_value_13;
            PyTuple_SET_ITEM0(tmp_subscript_value_54, 0, tmp_tuple_element_31);
            if (par_n_components == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[80]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 525;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_11;
            }

            tmp_stop_value_13 = par_n_components;
            tmp_tuple_element_31 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_13);
            assert(!(tmp_tuple_element_31 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_54, 1, tmp_tuple_element_31);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_subscript_value_54);
        goto try_except_handler_29;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_ass_subvalue_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_97, tmp_subscript_value_54);
        Py_DECREF(tmp_subscript_value_54);
        if (tmp_ass_subvalue_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 525;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        CHECK_OBJECT(var_Gi);
        tmp_ass_subscribed_19 = var_Gi;
        tmp_ass_subscript_19 = mod_consts[29];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
        Py_DECREF(tmp_ass_subvalue_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 525;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
    }
    {
        PyObject *tmp_ass_subvalue_20;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_ass_subscribed_20;
        PyObject *tmp_ass_subscript_20;
        tmp_truediv_expr_left_4 = mod_consts[112];
        tmp_expression_value_98 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_98 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 526;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[108]);
        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 526;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        if (par_n_neighbors == NULL) {
            Py_DECREF(tmp_called_value_37);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[14]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 526;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }

        tmp_args_element_value_52 = par_n_neighbors;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 526;
        tmp_truediv_expr_right_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_52);
        Py_DECREF(tmp_called_value_37);
        if (tmp_truediv_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 526;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        tmp_ass_subvalue_20 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_right_4);
        if (tmp_ass_subvalue_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 526;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        CHECK_OBJECT(var_Gi);
        tmp_ass_subscribed_20 = var_Gi;
        tmp_ass_subscript_20 = mod_consts[73];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
        Py_DECREF(tmp_ass_subvalue_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 526;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_expression_value_100;
        tmp_expression_value_99 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_99 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 528;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[9]);
        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 528;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        CHECK_OBJECT(var_Gi);
        tmp_args_element_value_53 = var_Gi;
        CHECK_OBJECT(var_Gi);
        tmp_expression_value_100 = var_Gi;
        tmp_args_element_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[10]);
        if (tmp_args_element_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 528;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 528;
        {
            PyObject *call_args[] = {tmp_args_element_value_53, tmp_args_element_value_54};
            tmp_assign_source_152 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_38, call_args);
        }

        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_assign_source_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 528;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        {
            PyObject *old = var_GiGiT;
            var_GiGiT = tmp_assign_source_152;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_iter_arg_15;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_subscript_value_55;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_subscript_value_56;
        tmp_expression_value_101 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_101 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_101 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 530;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[85]);
        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 530;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        CHECK_OBJECT(var_neighbors);
        tmp_expression_value_102 = var_neighbors;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_55 = var_i;
        tmp_args_element_value_55 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_102, tmp_subscript_value_55);
        if (tmp_args_element_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 530;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        CHECK_OBJECT(var_neighbors);
        tmp_expression_value_103 = var_neighbors;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_56 = var_i;
        tmp_args_element_value_56 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_103, tmp_subscript_value_56);
        if (tmp_args_element_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_55);

            exception_lineno = 530;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 530;
        {
            PyObject *call_args[] = {tmp_args_element_value_55, tmp_args_element_value_56};
            tmp_iter_arg_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_39, call_args);
        }

        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_element_value_55);
        Py_DECREF(tmp_args_element_value_56);
        if (tmp_iter_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 530;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        tmp_assign_source_153 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_15);
        Py_DECREF(tmp_iter_arg_15);
        if (tmp_assign_source_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 530;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__source_iter;
            tmp_tuple_unpack_7__source_iter = tmp_assign_source_153;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_154 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_14, 0, 2);
        if (tmp_assign_source_154 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 530;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_1;
            tmp_tuple_unpack_7__element_1 = tmp_assign_source_154;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_15 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_155 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_15, 1, 2);
        if (tmp_assign_source_155 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 530;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_2;
            tmp_tuple_unpack_7__element_2 = tmp_assign_source_155;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_7;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_iterator_name_7 = tmp_tuple_unpack_7__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_7, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 530;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
    }
    goto try_end_28;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_lineno_28 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_28 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_28;
    exception_lineno = exception_keeper_lineno_28;

    goto try_except_handler_30;
    // End of try:
    try_end_28:;
    goto try_end_29;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_lineno_29 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_29 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_29;
    exception_lineno = exception_keeper_lineno_29;

    goto try_except_handler_29;
    // End of try:
    try_end_29:;
    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    {
        PyObject *tmp_assign_source_156;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
        tmp_assign_source_156 = tmp_tuple_unpack_7__element_1;
        {
            PyObject *old = var_nbrs_x;
            var_nbrs_x = tmp_assign_source_156;
            Py_INCREF(var_nbrs_x);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_157;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
        tmp_assign_source_157 = tmp_tuple_unpack_7__element_2;
        {
            PyObject *old = var_nbrs_y;
            var_nbrs_y = tmp_assign_source_157;
            Py_INCREF(var_nbrs_y);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;

    {
        PyObject *tmp_assign_source_158;
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[49]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 531;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }

        tmp_assign_source_158 = var_M;
        {
            PyObject *old = tmp_inplace_assign_subscript_9__target;
            tmp_inplace_assign_subscript_9__target = tmp_assign_source_158;
            Py_INCREF(tmp_inplace_assign_subscript_9__target);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_tuple_element_32;
        CHECK_OBJECT(var_nbrs_x);
        tmp_tuple_element_32 = var_nbrs_x;
        tmp_assign_source_159 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_assign_source_159, 0, tmp_tuple_element_32);
        CHECK_OBJECT(var_nbrs_y);
        tmp_tuple_element_32 = var_nbrs_y;
        PyTuple_SET_ITEM0(tmp_assign_source_159, 1, tmp_tuple_element_32);
        {
            PyObject *old = tmp_inplace_assign_subscript_9__subscript;
            tmp_inplace_assign_subscript_9__subscript = tmp_assign_source_159;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_subscript_value_57;
        CHECK_OBJECT(tmp_inplace_assign_subscript_9__target);
        tmp_expression_value_104 = tmp_inplace_assign_subscript_9__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_9__subscript);
        tmp_subscript_value_57 = tmp_inplace_assign_subscript_9__subscript;
        tmp_assign_source_160 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_104, tmp_subscript_value_57);
        if (tmp_assign_source_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 531;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        {
            PyObject *old = tmp_inplace_assign_subscript_9__value;
            tmp_inplace_assign_subscript_9__value = tmp_assign_source_160;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_isub_expr_left_5;
        PyObject *tmp_isub_expr_right_5;
        CHECK_OBJECT(tmp_inplace_assign_subscript_9__value);
        tmp_isub_expr_left_5 = tmp_inplace_assign_subscript_9__value;
        CHECK_OBJECT(var_GiGiT);
        tmp_isub_expr_right_5 = var_GiGiT;
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_5, tmp_isub_expr_right_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 531;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        tmp_assign_source_161 = tmp_isub_expr_left_5;
        tmp_inplace_assign_subscript_9__value = tmp_assign_source_161;

    }
    {
        PyObject *tmp_ass_subvalue_21;
        PyObject *tmp_ass_subscribed_21;
        PyObject *tmp_ass_subscript_21;
        CHECK_OBJECT(tmp_inplace_assign_subscript_9__value);
        tmp_ass_subvalue_21 = tmp_inplace_assign_subscript_9__value;
        CHECK_OBJECT(tmp_inplace_assign_subscript_9__target);
        tmp_ass_subscribed_21 = tmp_inplace_assign_subscript_9__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_9__subscript);
        tmp_ass_subscript_21 = tmp_inplace_assign_subscript_9__subscript;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 531;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
    }
    goto try_end_30;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_lineno_30 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_30 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_inplace_assign_subscript_9__target);
    Py_DECREF(tmp_inplace_assign_subscript_9__target);
    tmp_inplace_assign_subscript_9__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_9__subscript);
    Py_DECREF(tmp_inplace_assign_subscript_9__subscript);
    tmp_inplace_assign_subscript_9__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_9__value);
    tmp_inplace_assign_subscript_9__value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_30;
    exception_lineno = exception_keeper_lineno_30;

    goto try_except_handler_29;
    // End of try:
    try_end_30:;
    CHECK_OBJECT(tmp_inplace_assign_subscript_9__target);
    Py_DECREF(tmp_inplace_assign_subscript_9__target);
    tmp_inplace_assign_subscript_9__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_9__subscript);
    Py_DECREF(tmp_inplace_assign_subscript_9__subscript);
    tmp_inplace_assign_subscript_9__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_9__value);
    Py_DECREF(tmp_inplace_assign_subscript_9__value);
    tmp_inplace_assign_subscript_9__value = NULL;
    {
        PyObject *tmp_assign_source_162;
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[49]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 532;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }

        tmp_assign_source_162 = var_M;
        {
            PyObject *old = tmp_inplace_assign_subscript_10__target;
            tmp_inplace_assign_subscript_10__target = tmp_assign_source_162;
            Py_INCREF(tmp_inplace_assign_subscript_10__target);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_subscript_value_58;
        CHECK_OBJECT(var_neighbors);
        tmp_expression_value_105 = var_neighbors;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_58 = var_i;
        tmp_tuple_element_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_105, tmp_subscript_value_58);
        if (tmp_tuple_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 532;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        tmp_assign_source_163 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_106;
            PyObject *tmp_subscript_value_59;
            PyTuple_SET_ITEM(tmp_assign_source_163, 0, tmp_tuple_element_33);
            CHECK_OBJECT(var_neighbors);
            tmp_expression_value_106 = var_neighbors;
            CHECK_OBJECT(var_i);
            tmp_subscript_value_59 = var_i;
            tmp_tuple_element_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_106, tmp_subscript_value_59);
            if (tmp_tuple_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 532;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_assign_source_163, 1, tmp_tuple_element_33);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_assign_source_163);
        goto try_except_handler_33;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        {
            PyObject *old = tmp_inplace_assign_subscript_10__subscript;
            tmp_inplace_assign_subscript_10__subscript = tmp_assign_source_163;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_subscript_value_60;
        CHECK_OBJECT(tmp_inplace_assign_subscript_10__target);
        tmp_expression_value_107 = tmp_inplace_assign_subscript_10__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_10__subscript);
        tmp_subscript_value_60 = tmp_inplace_assign_subscript_10__subscript;
        tmp_assign_source_164 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_107, tmp_subscript_value_60);
        if (tmp_assign_source_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 532;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        {
            PyObject *old = tmp_inplace_assign_subscript_10__value;
            tmp_inplace_assign_subscript_10__value = tmp_assign_source_164;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_iadd_expr_left_7;
        PyObject *tmp_iadd_expr_right_7;
        CHECK_OBJECT(tmp_inplace_assign_subscript_10__value);
        tmp_iadd_expr_left_7 = tmp_inplace_assign_subscript_10__value;
        tmp_iadd_expr_right_7 = const_int_pos_1;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_7, tmp_iadd_expr_right_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 532;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        tmp_assign_source_165 = tmp_iadd_expr_left_7;
        tmp_inplace_assign_subscript_10__value = tmp_assign_source_165;

    }
    {
        PyObject *tmp_ass_subvalue_22;
        PyObject *tmp_ass_subscribed_22;
        PyObject *tmp_ass_subscript_22;
        CHECK_OBJECT(tmp_inplace_assign_subscript_10__value);
        tmp_ass_subvalue_22 = tmp_inplace_assign_subscript_10__value;
        CHECK_OBJECT(tmp_inplace_assign_subscript_10__target);
        tmp_ass_subscribed_22 = tmp_inplace_assign_subscript_10__target;
        CHECK_OBJECT(tmp_inplace_assign_subscript_10__subscript);
        tmp_ass_subscript_22 = tmp_inplace_assign_subscript_10__subscript;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 532;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
    }
    goto try_end_31;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_lineno_31 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_31 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_inplace_assign_subscript_10__target);
    Py_DECREF(tmp_inplace_assign_subscript_10__target);
    tmp_inplace_assign_subscript_10__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_10__subscript);
    tmp_inplace_assign_subscript_10__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscript_10__value);
    tmp_inplace_assign_subscript_10__value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_31;
    exception_lineno = exception_keeper_lineno_31;

    goto try_except_handler_29;
    // End of try:
    try_end_31:;
    CHECK_OBJECT(tmp_inplace_assign_subscript_10__target);
    Py_DECREF(tmp_inplace_assign_subscript_10__target);
    tmp_inplace_assign_subscript_10__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_10__subscript);
    Py_DECREF(tmp_inplace_assign_subscript_10__subscript);
    tmp_inplace_assign_subscript_10__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscript_10__value);
    Py_DECREF(tmp_inplace_assign_subscript_10__value);
    tmp_inplace_assign_subscript_10__value = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 513;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_29;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_32;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_lineno_32 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_32 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_8__iter_value);
    tmp_for_loop_8__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_8__for_iterator);
    Py_DECREF(tmp_for_loop_8__for_iterator);
    tmp_for_loop_8__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_32:;
    Py_XDECREF(tmp_for_loop_8__iter_value);
    tmp_for_loop_8__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_8__for_iterator);
    Py_DECREF(tmp_for_loop_8__for_iterator);
    tmp_for_loop_8__for_iterator = NULL;
    branch_no_17:;
    branch_end_12:;
    branch_end_8:;
    branch_end_6:;
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_kw_call_arg_value_0_8;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_8;
        PyObject *tmp_kw_call_dict_value_1_5;
        PyObject *tmp_kw_call_dict_value_2_2;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        tmp_called_value_40 = module_var_accessor_sklearn$manifold$_locally_linear_$$_null_space(tstate);
        if (unlikely(tmp_called_value_40 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[113]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 534;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[49]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 535;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_8 = var_M;
        if (par_n_components == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[80]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 536;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_1 = par_n_components;
        tmp_kw_call_dict_value_0_8 = const_int_pos_1;
        CHECK_OBJECT(par_eigen_solver);
        tmp_kw_call_dict_value_1_5 = par_eigen_solver;
        CHECK_OBJECT(par_tol);
        tmp_kw_call_dict_value_2_2 = par_tol;
        CHECK_OBJECT(par_max_iter);
        tmp_kw_call_dict_value_3_1 = par_max_iter;
        CHECK_OBJECT(par_random_state);
        tmp_kw_call_dict_value_4_1 = par_random_state;
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame.f_lineno = 534;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_8, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_8, tmp_kw_call_dict_value_1_5, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_40, args, kw_values, mod_consts[114]);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 534;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding,
        type_description_1,
        par_X,
        par_n_neighbors,
        par_n_components,
        par_reg,
        par_eigen_solver,
        par_tol,
        par_max_iter,
        par_method,
        par_hessian_tol,
        par_modified_tol,
        par_random_state,
        par_n_jobs,
        var_nbrs,
        var_N,
        var_d_in,
        var_M_sparse,
        var_W,
        var_M,
        var_dp,
        var_neighbors,
        var_Yi,
        var_use_svd,
        var_i,
        var_Gi,
        var_U,
        var_Ci,
        var_j,
        var_k,
        var_Q,
        var_R,
        var_w,
        var_S,
        var_nbrs_x,
        var_nbrs_y,
        var_V,
        var_nev,
        var_evals,
        var_X_nbrs,
        var__,
        var_C_nbrs,
        var_evi,
        var_vi,
        var_tmp,
        var_w_reg,
        var_rho,
        var_eta,
        var_s_range,
        var_evals_cumsum,
        var_eta_range,
        var_s_i,
        var_Vi,
        var_alpha_i,
        var_h,
        var_norm_h,
        var_Wi,
        var_Wi_sum1,
        var_Xi,
        var_v,
        var_GiGiT
    );


    // Release cached frame if used for exception.
    if (frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding == cache_frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding);
        cache_frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding = NULL;
    }

    assertFrameObject(frame_frame_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_X);
    Py_DECREF(par_X);
    par_X = NULL;
    Py_XDECREF(par_reg);
    par_reg = NULL;
    CHECK_OBJECT(var_nbrs);
    Py_DECREF(var_nbrs);
    var_nbrs = NULL;
    Py_XDECREF(var_N);
    var_N = NULL;
    CHECK_OBJECT(var_d_in);
    Py_DECREF(var_d_in);
    var_d_in = NULL;
    CHECK_OBJECT(var_M_sparse);
    Py_DECREF(var_M_sparse);
    var_M_sparse = NULL;
    Py_XDECREF(var_W);
    var_W = NULL;
    Py_XDECREF(var_M);
    var_M = NULL;
    Py_XDECREF(var_dp);
    var_dp = NULL;
    Py_XDECREF(var_neighbors);
    var_neighbors = NULL;
    Py_XDECREF(var_Yi);
    var_Yi = NULL;
    Py_XDECREF(var_use_svd);
    var_use_svd = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_Gi);
    var_Gi = NULL;
    Py_XDECREF(var_U);
    var_U = NULL;
    Py_XDECREF(var_Ci);
    var_Ci = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_Q);
    var_Q = NULL;
    Py_XDECREF(var_R);
    var_R = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
    Py_XDECREF(var_S);
    var_S = NULL;
    Py_XDECREF(var_nbrs_x);
    var_nbrs_x = NULL;
    Py_XDECREF(var_nbrs_y);
    var_nbrs_y = NULL;
    Py_XDECREF(var_V);
    var_V = NULL;
    Py_XDECREF(var_nev);
    var_nev = NULL;
    Py_XDECREF(var_evals);
    var_evals = NULL;
    Py_XDECREF(var_X_nbrs);
    var_X_nbrs = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_C_nbrs);
    var_C_nbrs = NULL;
    Py_XDECREF(var_evi);
    var_evi = NULL;
    Py_XDECREF(var_vi);
    var_vi = NULL;
    Py_XDECREF(var_tmp);
    var_tmp = NULL;
    Py_XDECREF(var_w_reg);
    var_w_reg = NULL;
    Py_XDECREF(var_rho);
    var_rho = NULL;
    Py_XDECREF(var_eta);
    var_eta = NULL;
    Py_XDECREF(var_s_range);
    var_s_range = NULL;
    Py_XDECREF(var_evals_cumsum);
    var_evals_cumsum = NULL;
    Py_XDECREF(var_eta_range);
    var_eta_range = NULL;
    Py_XDECREF(var_s_i);
    var_s_i = NULL;
    Py_XDECREF(var_Vi);
    var_Vi = NULL;
    Py_XDECREF(var_alpha_i);
    var_alpha_i = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_norm_h);
    var_norm_h = NULL;
    Py_XDECREF(var_Wi);
    var_Wi = NULL;
    Py_XDECREF(var_Wi_sum1);
    var_Wi_sum1 = NULL;
    Py_XDECREF(var_Xi);
    var_Xi = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_GiGiT);
    var_GiGiT = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_33 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_33 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(par_X);
    par_X = NULL;
    Py_XDECREF(par_reg);
    par_reg = NULL;
    Py_XDECREF(var_nbrs);
    var_nbrs = NULL;
    Py_XDECREF(var_N);
    var_N = NULL;
    Py_XDECREF(var_d_in);
    var_d_in = NULL;
    Py_XDECREF(var_M_sparse);
    var_M_sparse = NULL;
    Py_XDECREF(var_W);
    var_W = NULL;
    Py_XDECREF(var_M);
    var_M = NULL;
    Py_XDECREF(var_dp);
    var_dp = NULL;
    Py_XDECREF(var_neighbors);
    var_neighbors = NULL;
    Py_XDECREF(var_Yi);
    var_Yi = NULL;
    Py_XDECREF(var_use_svd);
    var_use_svd = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_Gi);
    var_Gi = NULL;
    Py_XDECREF(var_U);
    var_U = NULL;
    Py_XDECREF(var_Ci);
    var_Ci = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_Q);
    var_Q = NULL;
    Py_XDECREF(var_R);
    var_R = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
    Py_XDECREF(var_S);
    var_S = NULL;
    Py_XDECREF(var_nbrs_x);
    var_nbrs_x = NULL;
    Py_XDECREF(var_nbrs_y);
    var_nbrs_y = NULL;
    Py_XDECREF(var_V);
    var_V = NULL;
    Py_XDECREF(var_nev);
    var_nev = NULL;
    Py_XDECREF(var_evals);
    var_evals = NULL;
    Py_XDECREF(var_X_nbrs);
    var_X_nbrs = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_C_nbrs);
    var_C_nbrs = NULL;
    Py_XDECREF(var_evi);
    var_evi = NULL;
    Py_XDECREF(var_vi);
    var_vi = NULL;
    Py_XDECREF(var_tmp);
    var_tmp = NULL;
    Py_XDECREF(var_w_reg);
    var_w_reg = NULL;
    Py_XDECREF(var_rho);
    var_rho = NULL;
    Py_XDECREF(var_eta);
    var_eta = NULL;
    Py_XDECREF(var_s_range);
    var_s_range = NULL;
    Py_XDECREF(var_evals_cumsum);
    var_evals_cumsum = NULL;
    Py_XDECREF(var_eta_range);
    var_eta_range = NULL;
    Py_XDECREF(var_s_i);
    var_s_i = NULL;
    Py_XDECREF(var_Vi);
    var_Vi = NULL;
    Py_XDECREF(var_alpha_i);
    var_alpha_i = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_norm_h);
    var_norm_h = NULL;
    Py_XDECREF(var_Wi);
    var_Wi = NULL;
    Py_XDECREF(var_Wi_sum1);
    var_Wi_sum1 = NULL;
    Py_XDECREF(var_Xi);
    var_Xi = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_GiGiT);
    var_GiGiT = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_33;
    exception_lineno = exception_keeper_lineno_33;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_n_neighbors);
    Py_DECREF(par_n_neighbors);
    CHECK_OBJECT(par_n_components);
    Py_DECREF(par_n_components);
    CHECK_OBJECT(par_eigen_solver);
    Py_DECREF(par_eigen_solver);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    CHECK_OBJECT(par_max_iter);
    Py_DECREF(par_max_iter);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_hessian_tol);
    Py_DECREF(par_hessian_tol);
    CHECK_OBJECT(par_modified_tol);
    Py_DECREF(par_modified_tol);
    CHECK_OBJECT(par_random_state);
    Py_DECREF(par_random_state);
    CHECK_OBJECT(par_n_jobs);
    Py_DECREF(par_n_jobs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n_neighbors);
    Py_DECREF(par_n_neighbors);
    CHECK_OBJECT(par_n_components);
    Py_DECREF(par_n_components);
    CHECK_OBJECT(par_eigen_solver);
    Py_DECREF(par_eigen_solver);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    CHECK_OBJECT(par_max_iter);
    Py_DECREF(par_max_iter);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_hessian_tol);
    Py_DECREF(par_hessian_tol);
    CHECK_OBJECT(par_modified_tol);
    Py_DECREF(par_modified_tol);
    CHECK_OBJECT(par_random_state);
    Py_DECREF(par_random_state);
    CHECK_OBJECT(par_n_jobs);
    Py_DECREF(par_n_jobs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sklearn$manifold$_locally_linear$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_n_neighbors = python_pars[1];
    PyObject *par_n_components = python_pars[2];
    PyObject *par_reg = python_pars[3];
    PyObject *par_eigen_solver = python_pars[4];
    PyObject *par_tol = python_pars[5];
    PyObject *par_max_iter = python_pars[6];
    PyObject *par_method = python_pars[7];
    PyObject *par_hessian_tol = python_pars[8];
    PyObject *par_modified_tol = python_pars[9];
    PyObject *par_neighbors_algorithm = python_pars[10];
    PyObject *par_random_state = python_pars[11];
    PyObject *par_n_jobs = python_pars[12];
    struct Nuitka_FrameObject *frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__ = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__)) {
        Py_XDECREF(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__ == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_30a6dca4028299600dd6b80c80e393a4, module_sklearn$manifold$_locally_linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__->m_type_description == NULL);
    frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__ = cache_frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__);
    assert(Py_REFCNT(frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_n_neighbors);
        tmp_assattr_value_1 = par_n_neighbors;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 694;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_n_components);
        tmp_assattr_value_2 = par_n_components;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[80], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 695;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_reg);
        tmp_assattr_value_3 = par_reg;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[12], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 696;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_eigen_solver);
        tmp_assattr_value_4 = par_eigen_solver;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[116], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 697;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_tol);
        tmp_assattr_value_5 = par_tol;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[117], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 698;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_max_iter);
        tmp_assattr_value_6 = par_max_iter;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[118], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 699;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_method);
        tmp_assattr_value_7 = par_method;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[119], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 700;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_hessian_tol);
        tmp_assattr_value_8 = par_hessian_tol;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[120], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 701;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_modified_tol);
        tmp_assattr_value_9 = par_modified_tol;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[121], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 702;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_random_state);
        tmp_assattr_value_10 = par_random_state;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[122], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 703;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_neighbors_algorithm);
        tmp_assattr_value_11 = par_neighbors_algorithm;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[123], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 704;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(par_n_jobs);
        tmp_assattr_value_12 = par_n_jobs;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[124], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 705;
            type_description_1 = "ooooooooooooo";
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
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__,
        type_description_1,
        par_self,
        par_n_neighbors,
        par_n_components,
        par_reg,
        par_eigen_solver,
        par_tol,
        par_max_iter,
        par_method,
        par_hessian_tol,
        par_modified_tol,
        par_neighbors_algorithm,
        par_random_state,
        par_n_jobs
    );


    // Release cached frame if used for exception.
    if (frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__ == cache_frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__);
        cache_frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__ = NULL;
    }

    assertFrameObject(frame_frame_sklearn$manifold$_locally_linear$$$function__5___init__);

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
    CHECK_OBJECT(par_n_neighbors);
    Py_DECREF(par_n_neighbors);
    CHECK_OBJECT(par_n_components);
    Py_DECREF(par_n_components);
    CHECK_OBJECT(par_reg);
    Py_DECREF(par_reg);
    CHECK_OBJECT(par_eigen_solver);
    Py_DECREF(par_eigen_solver);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    CHECK_OBJECT(par_max_iter);
    Py_DECREF(par_max_iter);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_hessian_tol);
    Py_DECREF(par_hessian_tol);
    CHECK_OBJECT(par_modified_tol);
    Py_DECREF(par_modified_tol);
    CHECK_OBJECT(par_neighbors_algorithm);
    Py_DECREF(par_neighbors_algorithm);
    CHECK_OBJECT(par_random_state);
    Py_DECREF(par_random_state);
    CHECK_OBJECT(par_n_jobs);
    Py_DECREF(par_n_jobs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_n_neighbors);
    Py_DECREF(par_n_neighbors);
    CHECK_OBJECT(par_n_components);
    Py_DECREF(par_n_components);
    CHECK_OBJECT(par_reg);
    Py_DECREF(par_reg);
    CHECK_OBJECT(par_eigen_solver);
    Py_DECREF(par_eigen_solver);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    CHECK_OBJECT(par_max_iter);
    Py_DECREF(par_max_iter);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_hessian_tol);
    Py_DECREF(par_hessian_tol);
    CHECK_OBJECT(par_modified_tol);
    Py_DECREF(par_modified_tol);
    CHECK_OBJECT(par_neighbors_algorithm);
    Py_DECREF(par_neighbors_algorithm);
    CHECK_OBJECT(par_random_state);
    Py_DECREF(par_random_state);
    CHECK_OBJECT(par_n_jobs);
    Py_DECREF(par_n_jobs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sklearn$manifold$_locally_linear$$$function__6__fit_transform(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_X = python_pars[1];
    PyObject *var_random_state = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform)) {
        Py_XDECREF(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform = MAKE_FUNCTION_FRAME(tstate, code_objects_cd8ef109e29a77387c08daecc163856b, module_sklearn$manifold$_locally_linear, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform->m_type_description == NULL);
    frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform = cache_frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform);
    assert(Py_REFCNT(frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = module_var_accessor_sklearn$manifold$_locally_linear_$$_NearestNeighbors(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[22]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 708;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 709;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[123]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 710;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[124]);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 711;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform->m_frame.f_lineno = 708;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_assattr_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[125]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 708;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[126], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 708;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        tmp_called_value_2 = module_var_accessor_sklearn$manifold$_locally_linear_$$_check_random_state(tstate);
        if (unlikely(tmp_called_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[127]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 714;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[122]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 714;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform->m_frame.f_lineno = 714;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 714;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_random_state == NULL);
        var_random_state = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[128]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 715;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_X);
        tmp_tuple_element_1 = par_X;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[129]);
        frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform->m_frame.f_lineno = 715;
        tmp_assign_source_2 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 715;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_X;
            assert(old != NULL);
            par_X = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[126]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 716;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_X);
        tmp_args_element_value_2 = par_X;
        frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform->m_frame.f_lineno = 716;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[24], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 716;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_value_8_1;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_kw_call_value_9_1;
        PyObject *tmp_kw_call_value_10_1;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kw_call_value_11_1;
        PyObject *tmp_expression_value_17;
        tmp_called_value_4 = module_var_accessor_sklearn$manifold$_locally_linear_$$_locally_linear_embedding(tstate);
        if (unlikely(tmp_called_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[130]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 717;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[126]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 718;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[14]);
        if (tmp_kw_call_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_value_0_2);

            exception_lineno = 719;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_kw_call_value_2_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[80]);
        if (tmp_kw_call_value_2_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);

            exception_lineno = 720;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[116]);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_2_2);

            exception_lineno = 721;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[117]);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_2_2);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 722;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_kw_call_value_5_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[118]);
        if (tmp_kw_call_value_5_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_2_2);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);

            exception_lineno = 723;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_kw_call_value_6_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[119]);
        if (tmp_kw_call_value_6_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_2_2);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);

            exception_lineno = 724;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_kw_call_value_7_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[120]);
        if (tmp_kw_call_value_7_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_2_2);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);

            exception_lineno = 725;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_kw_call_value_8_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[121]);
        if (tmp_kw_call_value_8_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_2_2);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);

            exception_lineno = 726;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_random_state);
        tmp_kw_call_value_9_1 = var_random_state;
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_kw_call_value_10_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[12]);
        if (tmp_kw_call_value_10_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_2_2);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);

            exception_lineno = 728;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_kw_call_value_11_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[124]);
        if (tmp_kw_call_value_11_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_value_0_2);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_2_2);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            Py_DECREF(tmp_kw_call_value_10_1);

            exception_lineno = 729;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform->m_frame.f_lineno = 717;
        {
            PyObject *kw_values[12] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1, tmp_kw_call_value_11_1};

            tmp_iter_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[131]);
        }

        Py_DECREF(tmp_kw_call_value_0_2);
        Py_DECREF(tmp_kw_call_value_1_2);
        Py_DECREF(tmp_kw_call_value_2_2);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        Py_DECREF(tmp_kw_call_value_5_1);
        Py_DECREF(tmp_kw_call_value_6_1);
        Py_DECREF(tmp_kw_call_value_7_1);
        Py_DECREF(tmp_kw_call_value_8_1);
        Py_DECREF(tmp_kw_call_value_10_1);
        Py_DECREF(tmp_kw_call_value_11_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 717;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 717;
            type_description_1 = "ooo";
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
        tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 717;
            type_description_1 = "ooo";
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
        tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 717;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 717;
            type_description_1 = "ooo";
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
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assattr_value_2 = tmp_tuple_unpack_1__element_1;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[132], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 717;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assattr_value_3 = tmp_tuple_unpack_1__element_2;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[133], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 717;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
    }
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


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform,
        type_description_1,
        par_self,
        par_X,
        var_random_state
    );


    // Release cached frame if used for exception.
    if (frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform == cache_frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform);
        cache_frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform = NULL;
    }

    assertFrameObject(frame_frame_sklearn$manifold$_locally_linear$$$function__6__fit_transform);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_X);
    Py_DECREF(par_X);
    par_X = NULL;
    CHECK_OBJECT(var_random_state);
    Py_DECREF(var_random_state);
    var_random_state = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(par_X);
    par_X = NULL;
    Py_XDECREF(var_random_state);
    var_random_state = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sklearn$manifold$_locally_linear$$$function__7_fit(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_X = python_pars[1];
    PyObject *par_y = python_pars[2];
    struct Nuitka_FrameObject *frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit)) {
        Py_XDECREF(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit = MAKE_FUNCTION_FRAME(tstate, code_objects_72c0ccef093113aa4ad4b797aa3e3250, module_sklearn$manifold$_locally_linear, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit->m_type_description == NULL);
    frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit = cache_frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit);
    assert(Py_REFCNT(frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_X);
        tmp_args_element_value_1 = par_X;
        frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit->m_frame.f_lineno = 748;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[134], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 748;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit,
        type_description_1,
        par_self,
        par_X,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit == cache_frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit);
        cache_frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit = NULL;
    }

    assertFrameObject(frame_frame_sklearn$manifold$_locally_linear$$$function__7_fit);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_X);
    Py_DECREF(par_X);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_X);
    Py_DECREF(par_X);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sklearn$manifold$_locally_linear$$$function__8_fit_transform(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_X = python_pars[1];
    PyObject *par_y = python_pars[2];
    struct Nuitka_FrameObject *frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform)) {
        Py_XDECREF(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform = MAKE_FUNCTION_FRAME(tstate, code_objects_e2f20b2128127067498b5a3b841f3b94, module_sklearn$manifold$_locally_linear, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform->m_type_description == NULL);
    frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform = cache_frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform);
    assert(Py_REFCNT(frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_X);
        tmp_args_element_value_1 = par_X;
        frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform->m_frame.f_lineno = 767;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[134], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 767;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[132]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 768;
            type_description_1 = "ooo";
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
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform,
        type_description_1,
        par_self,
        par_X,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform == cache_frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform);
        cache_frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform = NULL;
    }

    assertFrameObject(frame_frame_sklearn$manifold$_locally_linear$$$function__8_fit_transform);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_X);
    Py_DECREF(par_X);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_X);
    Py_DECREF(par_X);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sklearn$manifold$_locally_linear$$$function__9_transform(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_X = python_pars[1];
    PyObject *var_ind = NULL;
    PyObject *var_weights = NULL;
    PyObject *var_X_new = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform)) {
        Py_XDECREF(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform = MAKE_FUNCTION_FRAME(tstate, code_objects_ea16d2e03837db281f8b6e5c47b97c37, module_sklearn$manifold$_locally_linear, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform->m_type_description == NULL);
    frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform = cache_frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform);
    assert(Py_REFCNT(frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = module_var_accessor_sklearn$manifold$_locally_linear_$$_check_is_fitted(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[137]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 789;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform->m_frame.f_lineno = 789;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 789;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[128]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 791;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_X);
        tmp_tuple_element_1 = par_X;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[138]);
        frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform->m_frame.f_lineno = 791;
        tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 791;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_X;
            assert(old != NULL);
            par_X = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_dict_value_1_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[126]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 792;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[27]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 792;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_X);
        tmp_kw_call_arg_value_0_1 = par_X;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[14]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 793;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = Py_False;
        frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform->m_frame.f_lineno = 792;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 792;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ind == NULL);
        var_ind = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_7;
        tmp_called_value_4 = module_var_accessor_sklearn$manifold$_locally_linear_$$_barycenter_weights(tstate);
        if (unlikely(tmp_called_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[30]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 795;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_X);
        tmp_kw_call_arg_value_0_2 = par_X;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[126]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 795;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[25]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 795;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ind);
        tmp_kw_call_arg_value_2_1 = var_ind;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[12]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 795;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform->m_frame.f_lineno = 795;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[31]);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 795;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_weights == NULL);
        var_weights = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_8 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 796;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[6]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 796;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_X);
        tmp_expression_value_10 = par_X;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[4]);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 796;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = const_int_0;
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 796;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_11;
            PyTuple_SET_ITEM(tmp_args_element_value_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_self);
            tmp_expression_value_11 = par_self;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[80]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 796;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform->m_frame.f_lineno = 796;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 796;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_X_new == NULL);
        var_X_new = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_X);
        tmp_expression_value_13 = par_X;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[4]);
        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 797;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = const_int_0;
        tmp_xrange_low_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_xrange_low_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 797;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 797;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 797;
            type_description_1 = "oooooo";
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
        tmp_assign_source_6 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "oooooo";
                exception_lineno = 797;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_7;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_value_14 = module_var_accessor_sklearn$manifold$_locally_linear_$$_np(tstate);
        if (unlikely(tmp_expression_value_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 798;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[9]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 798;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[139]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 798;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_17 = par_self;
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[132]);
        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 798;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ind);
        tmp_expression_value_18 = var_ind;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_4 = var_i;
        tmp_subscript_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_4);
        if (tmp_subscript_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_expression_value_16);

            exception_lineno = 798;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_16);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 798;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[10]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 798;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_weights);
        tmp_expression_value_19 = var_weights;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_5 = var_i;
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 798;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform->m_frame.f_lineno = 798;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 798;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (var_X_new == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[140]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 798;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_X_new;
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_1 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 798;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 797;
        type_description_1 = "oooooo";
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
    if (var_X_new == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[140]);
        NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
        CHAIN_EXCEPTION(tstate, exception_state.exception_value);

        exception_lineno = 799;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_X_new;
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
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform,
        type_description_1,
        par_self,
        par_X,
        var_ind,
        var_weights,
        var_X_new,
        var_i
    );


    // Release cached frame if used for exception.
    if (frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform == cache_frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform);
        cache_frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform = NULL;
    }

    assertFrameObject(frame_frame_sklearn$manifold$_locally_linear$$$function__9_transform);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_X);
    Py_DECREF(par_X);
    par_X = NULL;
    CHECK_OBJECT(var_ind);
    Py_DECREF(var_ind);
    var_ind = NULL;
    CHECK_OBJECT(var_weights);
    Py_DECREF(var_weights);
    var_weights = NULL;
    Py_XDECREF(var_X_new);
    var_X_new = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(par_X);
    par_X = NULL;
    Py_XDECREF(var_ind);
    var_ind = NULL;
    Py_XDECREF(var_weights);
    var_weights = NULL;
    Py_XDECREF(var_X_new);
    var_X_new = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_88c51a192473e8b8a74975bc867cf313,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sklearn$manifold$_locally_linear,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b843a4db13aad88fe9c414ba3d42c292,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sklearn$manifold$_locally_linear,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__3_null_space(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$manifold$_locally_linear$$$function__3_null_space,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_75c97f0e69354b307f90c383e069ed45,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sklearn$manifold$_locally_linear,
        mod_consts[54],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding(PyThreadState *tstate, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e8756097c0789e376f94020ec6b63593,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_sklearn$manifold$_locally_linear,
        mod_consts[115],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__5___init__(PyThreadState *tstate, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$manifold$_locally_linear$$$function__5___init__,
        mod_consts[186],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        code_objects_30a6dca4028299600dd6b80c80e393a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_sklearn$manifold$_locally_linear,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__6__fit_transform(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$manifold$_locally_linear$$$function__6__fit_transform,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[188],
#endif
        code_objects_cd8ef109e29a77387c08daecc163856b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sklearn$manifold$_locally_linear,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__7_fit(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$manifold$_locally_linear$$$function__7_fit,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        mod_consts[190],
#endif
        code_objects_72c0ccef093113aa4ad4b797aa3e3250,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sklearn$manifold$_locally_linear,
        mod_consts[135],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__8_fit_transform(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$manifold$_locally_linear$$$function__8_fit_transform,
        mod_consts[191],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        code_objects_e2f20b2128127067498b5a3b841f3b94,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sklearn$manifold$_locally_linear,
        mod_consts[136],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__9_transform(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$manifold$_locally_linear$$$function__9_transform,
        mod_consts[193],
#if PYTHON_VERSION >= 0x300
        mod_consts[194],
#endif
        code_objects_ea16d2e03837db281f8b6e5c47b97c37,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sklearn$manifold$_locally_linear,
        mod_consts[141],
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

static function_impl_code const function_table_sklearn$manifold$_locally_linear[] = {
    impl_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights,
    impl_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph,
    impl_sklearn$manifold$_locally_linear$$$function__3_null_space,
    impl_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding,
    impl_sklearn$manifold$_locally_linear$$$function__5___init__,
    impl_sklearn$manifold$_locally_linear$$$function__6__fit_transform,
    impl_sklearn$manifold$_locally_linear$$$function__7_fit,
    impl_sklearn$manifold$_locally_linear$$$function__8_fit_transform,
    impl_sklearn$manifold$_locally_linear$$$function__9_transform,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_sklearn$manifold$_locally_linear);

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
        module_sklearn$manifold$_locally_linear,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_sklearn$manifold$_locally_linear,
        sizeof(function_table_sklearn$manifold$_locally_linear) / sizeof(function_impl_code)
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
static char const *module_full_name = "sklearn.manifold._locally_linear";
#endif

// Internal entry point for module code.
PyObject *modulecode_sklearn$manifold$_locally_linear(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sklearn$manifold$_locally_linear");

    // Store the module for future use.
    module_sklearn$manifold$_locally_linear = module;

    moduledict_sklearn$manifold$_locally_linear = MODULE_DICT(module_sklearn$manifold$_locally_linear);

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
        PRINT_STRING("sklearn$manifold$_locally_linear: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("sklearn$manifold$_locally_linear: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("sklearn$manifold$_locally_linear: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "sklearn.manifold._locally_linear" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initsklearn$manifold$_locally_linear\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sklearn$manifold$_locally_linear,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sklearn$manifold$_locally_linear,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[207]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sklearn$manifold$_locally_linear,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sklearn$manifold$_locally_linear,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sklearn$manifold$_locally_linear,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sklearn$manifold$_locally_linear);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_sklearn$manifold$_locally_linear);
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

        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    struct Nuitka_FrameObject *frame_frame_sklearn$manifold$_locally_linear;
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
    PyObject *locals_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_545 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_frame_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[142];
        UPDATE_STRING_DICT0(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_2);
    }
    frame_frame_sklearn$manifold$_locally_linear = MAKE_MODULE_FRAME(code_objects_43b032e7925edaca7c3276dc68c238af, module_sklearn$manifold$_locally_linear);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$manifold$_locally_linear);
    assert(Py_REFCNT(frame_frame_sklearn$manifold$_locally_linear) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_sklearn$manifold$_locally_linear_$$___spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[145], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = module_var_accessor_sklearn$manifold$_locally_linear_$$___spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[146], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[148];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sklearn$manifold$_locally_linear;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = const_int_0;
        frame_frame_sklearn$manifold$_locally_linear->m_frame.f_lineno = 7;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[149];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sklearn$manifold$_locally_linear;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[150];
        tmp_level_value_2 = const_int_0;
        frame_frame_sklearn$manifold$_locally_linear->m_frame.f_lineno = 8;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_sklearn$manifold$_locally_linear,
                mod_consts[48],
                const_int_0
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[48]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_sklearn$manifold$_locally_linear,
                mod_consts[77],
                const_int_0
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[77]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_sklearn$manifold$_locally_linear,
                mod_consts[83],
                const_int_0
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[83]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_8);
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
                (PyObject *)moduledict_sklearn$manifold$_locally_linear,
                mod_consts[15],
                const_int_0
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[15]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_9);
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
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[151];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sklearn$manifold$_locally_linear;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[152];
        tmp_level_value_3 = const_int_0;
        frame_frame_sklearn$manifold$_locally_linear->m_frame.f_lineno = 9;
        tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_sklearn$manifold$_locally_linear,
                mod_consts[65],
                const_int_0
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[65]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_sklearn$manifold$_locally_linear,
                mod_consts[33],
                const_int_0
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[33]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[153];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sklearn$manifold$_locally_linear;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[154];
        tmp_level_value_4 = const_int_0;
        frame_frame_sklearn$manifold$_locally_linear->m_frame.f_lineno = 10;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_sklearn$manifold$_locally_linear,
                mod_consts[43],
                const_int_0
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[155];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_sklearn$manifold$_locally_linear;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[156];
        tmp_level_value_5 = mod_consts[69];
        frame_frame_sklearn$manifold$_locally_linear->m_frame.f_lineno = 12;
        tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;

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
                (PyObject *)moduledict_sklearn$manifold$_locally_linear,
                mod_consts[157],
                const_int_0
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[157]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_15);
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
                (PyObject *)moduledict_sklearn$manifold$_locally_linear,
                mod_consts[158],
                const_int_0
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[158]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_sklearn$manifold$_locally_linear,
                mod_consts[159],
                const_int_0
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[159]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_17);
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[160];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_sklearn$manifold$_locally_linear;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[161];
        tmp_level_value_6 = mod_consts[69];
        frame_frame_sklearn$manifold$_locally_linear->m_frame.f_lineno = 13;
        tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_11 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_sklearn$manifold$_locally_linear,
                mod_consts[127],
                const_int_0
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[127]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_12 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_sklearn$manifold$_locally_linear,
                mod_consts[0],
                const_int_0
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[0]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_20);
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
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[162];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_sklearn$manifold$_locally_linear;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[163];
        tmp_level_value_7 = mod_consts[69];
        frame_frame_sklearn$manifold$_locally_linear->m_frame.f_lineno = 14;
        tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_sklearn$manifold$_locally_linear,
                mod_consts[42],
                const_int_0
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[42]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[164];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_sklearn$manifold$_locally_linear;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[165];
        tmp_level_value_8 = mod_consts[69];
        frame_frame_sklearn$manifold$_locally_linear->m_frame.f_lineno = 15;
        tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_sklearn$manifold$_locally_linear,
                mod_consts[100],
                const_int_0
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[100]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[166];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_sklearn$manifold$_locally_linear;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[167];
        tmp_level_value_9 = mod_consts[69];
        frame_frame_sklearn$manifold$_locally_linear->m_frame.f_lineno = 16;
        tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_sklearn$manifold$_locally_linear,
                mod_consts[137],
                const_int_0
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[137]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[166];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_sklearn$manifold$_locally_linear;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[168];
        tmp_level_value_10 = mod_consts[69];
        frame_frame_sklearn$manifold$_locally_linear->m_frame.f_lineno = 17;
        tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_sklearn$manifold$_locally_linear,
                mod_consts[1],
                const_int_0
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[1]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[169];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_sklearn$manifold$_locally_linear;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[170];
        tmp_level_value_11 = mod_consts[69];
        frame_frame_sklearn$manifold$_locally_linear->m_frame.f_lineno = 18;
        tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_sklearn$manifold$_locally_linear,
                mod_consts[22],
                const_int_0
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[22]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[171];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_26 = MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__1_barycenter_weights(tstate, tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[172];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_27 = MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__2_barycenter_kneighbors_graph(tstate, tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[173];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_28 = MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__3_null_space(tstate, tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_kw_defaults_1;
        tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts[174]);


        tmp_assign_source_29 = MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__4_locally_linear_embedding(tstate, tmp_kw_defaults_1);

        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_29);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = module_var_accessor_sklearn$manifold$_locally_linear_$$_TransformerMixin(tstate);
        if (unlikely(tmp_tuple_element_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[158]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 545;

            goto try_except_handler_5;
        }
        tmp_assign_source_30 = MAKE_TUPLE_EMPTY(tstate, 3);
        PyTuple_SET_ITEM0(tmp_assign_source_30, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = module_var_accessor_sklearn$manifold$_locally_linear_$$__UnstableArchMixin(tstate);
        if (unlikely(tmp_tuple_element_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[159]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 545;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_30, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = module_var_accessor_sklearn$manifold$_locally_linear_$$_BaseEstimator(tstate);
        if (unlikely(tmp_tuple_element_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[157]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 545;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_30, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_30);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_direct_call_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_direct_call_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_direct_call_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
            tmp_assign_source_31 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 545;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 545;

            goto try_except_handler_5;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 545;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 545;

            goto try_except_handler_5;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_33 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 545;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[175]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 545;

            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[175]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 545;

            goto try_except_handler_5;
        }
        tmp_tuple_element_2 = mod_consts[176];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_frame_sklearn$manifold$_locally_linear->m_frame.f_lineno = 545;
        tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 545;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_34;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[177]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 545;

            goto try_except_handler_5;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_12;
        PyObject *tmp_default_value_1;
        tmp_mod_expr_left_1 = mod_consts[178];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_12 = mod_consts[179];
        tmp_default_value_1 = mod_consts[180];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_12, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 545;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[179]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 545;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 545;

            goto try_except_handler_5;
        }
        frame_frame_sklearn$manifold$_locally_linear->m_frame.f_lineno = 545;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_state.exception_type = tmp_raise_type_1;
        exception_lineno = 545;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);

        goto try_except_handler_5;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_35;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_36;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_545 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[181];
        tmp_res = PyObject_SetItem(locals_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_545, mod_consts[182], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 545;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[183];
        tmp_res = PyObject_SetItem(locals_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_545, mod_consts[143], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 545;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[176];
        tmp_res = PyObject_SetItem(locals_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_545, mod_consts[184], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 545;

            goto try_except_handler_7;
        }
        frame_frame_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_2 = MAKE_CLASS_FRAME(tstate, code_objects_0f5622cbb6ad05478ec327b34df4fed3, module_sklearn$manifold$_locally_linear, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_2);
        assert(Py_REFCNT(frame_frame_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_2) == 2);

        // Framed code:
        {
            PyObject *tmp_kw_defaults_2;
            tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts[185]);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__5___init__(tstate, tmp_kw_defaults_2);

            tmp_res = PyObject_SetItem(locals_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_545, mod_consts[186], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 678;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__6__fit_transform(tstate);

        tmp_res = PyObject_SetItem(locals_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_545, mod_consts[134], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 707;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[189];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__7_fit(tstate, tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_545, mod_consts[24], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 732;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[189];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__8_fit_transform(tstate, tmp_defaults_5);

            tmp_res = PyObject_SetItem(locals_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_545, mod_consts[191], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 751;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_sklearn$manifold$_locally_linear$$$function__9_transform(tstate);

        tmp_res = PyObject_SetItem(locals_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_545, mod_consts[193], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 770;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        {
            PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_2, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            } else if (exception_tb->tb_frame != &frame_frame_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_2->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_2, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            }
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_frame_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_frame_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_7;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 545;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_545, mod_consts[195], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 545;

            goto try_except_handler_7;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[176];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_545;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_frame_sklearn$manifold$_locally_linear->m_frame.f_lineno = 545;
            tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 545;

                goto try_except_handler_7;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_37;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_36 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_36);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_545);
        locals_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_545 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_lineno_5 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_5 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_545);
        locals_sklearn$manifold$_locally_linear$$$class__1_LocallyLinearEmbedding_545 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_lineno_6 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_6 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 545;
        goto try_except_handler_5;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_36);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_7 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_7 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$manifold$_locally_linear, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$manifold$_locally_linear->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$manifold$_locally_linear, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_sklearn$manifold$_locally_linear);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sklearn$manifold$_locally_linear", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "sklearn.manifold._locally_linear" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_sklearn$manifold$_locally_linear);
    return module_sklearn$manifold$_locally_linear;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$manifold$_locally_linear, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("sklearn$manifold$_locally_linear", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
